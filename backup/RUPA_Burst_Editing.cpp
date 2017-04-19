#include "RUPA_Burst_Editing.h"



void Set_Col_Measurement(wxListCtrl * l)
{
 
    
    l->InsertColumn(0, ("X"));
    l->InsertColumn(1, ("GPS Latitude"));
    l->InsertColumn(2, ("GPS Longitude"));
    l->InsertColumn(3, ("ID"));
    l->InsertColumn(4, ("Frequency"));
    l->InsertColumn(5, ("Message Sent"));
    l->InsertColumn(6, ("Emission Date"));
    l->InsertColumn(7, ("Reception Date"));
    l->InsertColumn(8, ("Value"));


    for(int i=0; i<13; i++)
    {
	l->SetColumnWidth(i, wxLIST_AUTOSIZE);
    }
}



RUPA_Burst_Editing::RUPA_Burst_Editing( wxWindow* parent/*, RUPA_Manage_Structure * MS, long int Burst_Id*/ )
:Burst_Editing( parent )/*, l_Manage_Structure(MS), Id(Burst_Id)*/
{
    Set_Col_Measurement(Burst_Editing_Table);
}

void RUPA_Burst_Editing::On_Add_Measure( wxCommandEvent& event )
{
// TODO: Implement On_Add_Measure
}

void RUPA_Burst_Editing::On_Delete_Measure( wxCommandEvent& event )
{
// TODO: Implement On_Delete_Measure
}

void RUPA_Burst_Editing::On_Close( wxCommandEvent& event )
{
// TODO: Implement On_Close
    //l_Manage_Structure->Refresh_Burst_Tables();
    this->Destroy();
}

//void RUPA_Burst_Editing::Print_Measurement_Data_In_Table(wxListCtrl* Table, long int id_Structure, bool Recovery)//dor = deployment or recovery
//{
    //Inspired by https://wiki.wxwidgets.org/WxListCtrl 
    //-> Adding items in a multiple column list

  /*  Table->DeleteAllItems();
    try
    {
	driver = get_driver_instance();
	con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
	con->setSchema(DB);
	stmt = con->createStatement();
	//prep_stmt = con->prepareStatement("SELECT * FROM Operation WHERE structure=? AND deployment_or_recovery = ? ");
	//prep_stmt->setInt(1, id);
	//prep_stmt->setString(2, dor);
	//res = prep_stmt->executeQuery();
	//while(res->next())
	//{
	    prep_stmt = con->prepareStatement("SELECT * FROM Measurement WHERE burst=? ");
	    prep_stmt->setInt(1, Id);
	    res = prep_stmt->executeQuery();
	    while(res->next())
	    {
		//res->next();
		long Item_Index = Table->InsertItem(res->getInt("id"), wxString::Format(wxT("%i"),res->getInt("viewable")));
		Table->SetItem(Item_Index, 1, wxString::Format(wxT("%f"), res->getDouble("latitude")));
		Table->SetItem(Item_Index, 2, wxString::Format(wxT("%f"), res->getDouble("longitude")));
		//Table->SetItem(Item_Index, 3, wxString::Format(wxT("%i"),pings_emmited));
		//Table->SetItem(Item_Index, 4, wxString::Format(wxT("%i"),pings_emmited));
		wxString message(res->getString("message").c_str(), wxConvUTF8);
		Table->SetItem(Item_Index, 5, message);
		wxString value(res->getString("value").c_str(), wxConvUTF8);
		Table->SetItem(Item_Index, 8, value);
		//Table->SetItem(Item_Index, 1, wxString::Format(wxT("%i"),res->getInt("viewable")));
		//wxString burst_mode(res->getString("burst_mode").c_str(), wxConvUTF8);
		//Table->SetItem(Item_Index, 2, burst_mode);
		//int pings_emmited = res->getInt("pings_emmited_count");
		//int pings_received = res->getInt("pings_received_count");
		//float ratio = pings_emmited>0 ? pings_received/pings_emmited : -1;
		//Table->SetItem(Item_Index, 3, wxString::Format(wxT("%i"),pings_emmited));
		//Table->SetItem(Item_Index, 4, wxString::Format(wxT("%f"), ratio));
	//    }
	}
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }

	delete prep_stmt;
	delete res;*/
//}



/*void RUPA_Burst_Editing::Refresh_Burst_Tables()
{

    //this->Print_Measurement_Data_In_Table(Burst_Editing_Table, 1, "D");
    //this->Print_Burst_Data_In_Table(Manage_Structure_Recovery_Table, 1, "R");
}*/
