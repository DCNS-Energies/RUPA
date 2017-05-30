#include "RUPA_Semi_Automatic_Burst.h"
RUPA_Semi_Automatic_Burst::RUPA_Semi_Automatic_Burst( wxWindow* parent, RUPA_Manage_Structure * MS , bool Recovery)
:Semi_Automatic_Burst( parent ), l_Manage_Structure(MS), Id_Calling_Structure(MS->get_Id())

{
    this->parent = parent;
    std::string dor = Recovery < 1 ? "D" : "R";
    RUPA_SQL *c;
    Transponders_Count = 0;
    try
    {
	c = new RUPA_SQL;
	c->prep_stmt = c->con->prepareStatement("SELECT * FROM Transponder WHERE structure=? ");
	c->prep_stmt->setInt(1, Id_Calling_Structure);
	c->res=c->prep_stmt->executeQuery();
	while(c->res->next())
	{
	    Transponders_Count++;
	    std::string s = ToString(c->res->getString("address"))+":"+ToString(c->res->getString("frequency"));
	    std::cout<<s<<"\n";
	    Transponders.push_back(s);
	}
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
    try
    {
	Prepare_SQL();
	prep_stmt = con->prepareStatement("SELECT * FROM Operation WHERE structure=? AND deployment_or_recovery=?");
	prep_stmt->setInt(1, Id_Calling_Structure);
	prep_stmt->setString(2, dor);
	res=prep_stmt->executeQuery();
	res->next();
	prep_stmt = con->prepareStatement("INSERT INTO Burst(operation, burst_mode) VALUES(?,?)");
	prep_stmt->setInt(1, res->getInt("id"));
	prep_stmt->setString(2, "S");
	prep_stmt->execute();
	prep_stmt = con->prepareStatement("SELECT LAST_INSERT_ID() AS last_id");
	res = prep_stmt->executeQuery();
	res->next();
	Burst_Id = res->getInt("last_id");
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
    messages_sent_count = 0;
    messages_received_count = 0;
    delete c;
    Transponder_Number = 0;//Actual Transponder
    Current_Transponder = Transponders.at(Transponder_Number);
}



void RUPA_Semi_Automatic_Burst::On_Range_Button( wxCommandEvent& event )
{
// TODO: Implement On_Range_Button
	//unsigned char 	cBufWrite[BUF_SIZE];
	
    //unsigned char 	msg[]="$t111:1%";
    std::string msg ="$t" + Current_Transponder + "%";
    unsigned char *msgc = new unsigned char[msg.size()+1];
    std::copy(msg.begin(), msg.end(), msgc);
    msgc[msg.size()] = '\0';
    messages_sent_count ++;
    Semi_Auto_Message_Sent_Count->SetValue(wxString::Format(wxT("%i"),messages_sent_count));
    std::string Buf_Read = RUPA_RS232(msgc);
    //*Buf_Read = RUPA_RS232();
    std::cout<<"RS232 OK\n"<<Buf_Read<<"\n";
    std::istringstream iss(Buf_Read);
    std::string word;
    std::string ProperMessage = "";
    std::vector<std::string> Vec_Buf_Read;
    for(int i=0; iss>>word && i<5; i++)
    {
	ProperMessage+=word+" ";
	Vec_Buf_Read.push_back(word);
	printf("%d\n", i);
    }
    try
    {
	Semi_Automatic_Last_Value_Box->SetValue(wxString(ProperMessage.c_str(), wxConvUTF8));
	Prepare_SQL();
	prep_stmt = con->prepareStatement("INSERT INTO Measurement(message, rs232_command, latitude, longitude, burst, value) VALUES(?,?,?,?,?,?)");
	prep_stmt->setString(1, "Range");
	prep_stmt->setString(2, "$t123:4\%");
	prep_stmt->setDouble(3, g_watchdog_pi->LastFix().Lat);
	prep_stmt->setDouble(4, g_watchdog_pi->LastFix().Lon);
	prep_stmt->setInt(5, Burst_Id);
	printf("11\n");
	if(!Vec_Buf_Read.empty())
	{
	    if(Vec_Buf_Read.size()>2)
	    {
		if(Vec_Buf_Read.at(2).compare("Range") ==0)
		{
		    std::string m = Vec_Buf_Read.at(4);
		    prep_stmt->setString(6, m.substr(0,m.length()-1));
		    messages_received_count ++;
		    Semi_Auto_Message_Received_Count->SetValue(wxString::Format(wxT("%i"),messages_received_count));
		}
		else
		{
		    prep_stmt->setString(6, "Fail");
		}
	    }
	    else
	    {
		prep_stmt->setString(6, "Fail");
	    }
	    prep_stmt->execute();
	    prep_stmt = con->prepareStatement("UPDATE Burst SET pings_emmited_count=pings_emmited_count+1 WHERE id=?");
	    prep_stmt->setInt(1, Burst_Id);
	    prep_stmt->execute();
	    delete con;
	}else
	{
	    Semi_Automatic_Last_Value_Box->SetValue(wxString::Format(wxT("Deck unit was sleeping, try again")));
	}
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
	


}

void RUPA_Semi_Automatic_Burst::On_Next_Transponder_Button( wxCommandEvent& event )
{
    Transponder_Number = (Transponder_Number + 1) % (Transponders_Count );
    Current_Transponder = Transponders.at(Transponder_Number);
}

void RUPA_Semi_Automatic_Burst::On_Previous_Transponder_Button( wxCommandEvent& event )
{
    Transponder_Number = (Transponder_Number +Transponders_Count - 1) % Transponders_Count;
    Current_Transponder = Transponders.at(Transponder_Number);
}


/*void RUPA_Semi_Automatic_Burst::On_Battery_Check_Button( wxCommandEvent& event )
{
// TODO: Implement On_Battery_Check_Button
    try
    {
	Prepare_SQL();
	prep_stmt = con->prepareStatement("INSERT INTO Measurement(message, rs232_command) VALUES(?,?)");
	prep_stmt->setString(1, "Range");
	prep_stmt->setString(2, "$t123:4\%");
	prep_stmt->execute();
	delete con;
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
}*/

/*void RUPA_Semi_Automatic_Burst::On_Release_Nut_Button( wxCommandEvent& event )
{
// TODO: Implement On_Release_Nut_Button
}*/

void RUPA_Semi_Automatic_Burst::On_Finish_Burst_Button( wxCommandEvent& event )
{
// TODO: Implement On_Finish_Burst_Button
    l_Manage_Structure->Refresh_Burst_Tables();
    l_Manage_Structure->Show(1);
    this->Destroy();
}

void RUPA_Semi_Automatic_Burst::Prepare_SQL()
{

    try
    {
	driver = get_driver_instance();
	con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
	con->setSchema(DB);
	stmt = con->createStatement();
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
}
