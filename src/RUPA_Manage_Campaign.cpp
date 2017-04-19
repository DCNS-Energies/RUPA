#include "RUPA_Manage_Campaign.h"





void Set_Col_Structures(wxListCtrl * l)
{
 
    
    l->InsertColumn(1, ("Location's name"));
    l->InsertColumn(2, ("Devices"));
    l->InsertColumn(3, ("Transponder's\nAdresses used"));
    l->InsertColumn(4, ("Depth"));
    l->InsertColumn(5, ("Latitude"));
    l->InsertColumn(6, ("Longitude"));
    l->InsertColumn(7, ("Installation\nDate UTC"));
    l->InsertColumn(8, ("Recovery\nDate UTC"));
    l->InsertColumn(9, ("Latitude"));
    l->InsertColumn(10, ("Longitude"));


    for(int i=0; i<11; i++)
    {
	l->SetColumnWidth(i, wxLIST_AUTOSIZE);
    }
}




RUPA_Manage_Campaign::RUPA_Manage_Campaign( wxWindow* parent, RUPA_Campaign * C, long int Campaign_Id )
:Manage_Campaign( parent ), l_Campaign(C), id(Campaign_Id)
{

    std::cout<<"In RUPA Manage Campaign \n";
    this->parent = parent;
    std::cout<<"In RUPA Manage Campaign->Parent \n";
    Set_Col_Structures(Manage_Campaign_Deployed_Table);
    Set_Col_Structures(Manage_Campaign_Recovered_Table);
    std::cout<<"In RUPA Manage Campaign->Col \n";
    Refresh_Structure_Tables();
    std::cout<<"In RUPA Manage Campaign->Refresh \n";
}

void RUPA_Manage_Campaign::On_Import_Structure( wxCommandEvent& event )
{
// TODO: Implement On_Import_Structure
}

void RUPA_Manage_Campaign::On_Export_Structure( wxCommandEvent& event )
{
// TODO: Implement On_Export_Structure
}

void RUPA_Manage_Campaign::On_Display_All_Structures( wxCommandEvent& event )
{
// TODO: Implement On_Display_All_Structures
}

void RUPA_Manage_Campaign::On_Display_Current_Structures( wxCommandEvent& event )
{
// TODO: Implement On_Display_Current_Structures
}

void RUPA_Manage_Campaign::On_Display_Recovered_Structures( wxCommandEvent& event )
{
// TODO: Implement On_Display_Recovered_Structures
}

void RUPA_Manage_Campaign::OnDoubleClick( wxMouseEvent& event )
{
// TODO: Implement OnDoubleClick
}

void RUPA_Manage_Campaign::OnLeftDown( wxMouseEvent& event )
{
// TODO: Implement OnLeftDown
}

void RUPA_Manage_Campaign::On_New_Structure( wxCommandEvent& event )
{
// TODO: Implement On_New_Structure
    try
    {
	driver = get_driver_instance();
	con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
	con->setSchema(DB);
	stmt = con->createStatement();

	prep_stmt = con->prepareStatement("INSERT INTO Structure(campaign) VALUES(?)");
    	prep_stmt->setInt(1,id);
    	prep_stmt->execute();
	delete prep_stmt;
	prep_stmt = con->prepareStatement("SELECT LAST_INSERT_ID() AS last_id");
	res = prep_stmt->executeQuery();
	res->next();
	prep_stmt = con->prepareStatement("INSERT INTO Operation( deployment_or_recovery, structure) VALUES(?,?)");/*;INSERT INTO Operation(deployment_or_recovery='R', structure) VALUES(,?)");deployment_or_recovery ='D',"*/
    	prep_stmt->setInt(2,res->getInt("last_id"));
    	prep_stmt->setString(1,"D");
    	prep_stmt->execute();
	prep_stmt = con->prepareStatement("INSERT INTO Operation(deployment_or_recovery, structure) VALUES(?,?)");/*;INSERT INTO Operation(deployment_or_recovery='R', structure) VALUES(,?)");deployment_or_recovery ='D',"*/
    	prep_stmt->setInt(2,res->getInt("last_id"));
    	prep_stmt->setString(1,"R");
    	prep_stmt->execute();
	t_Manage_Structure = new RUPA_Manage_Structure(this, this, res->getInt("last_id"));
	this->Show(!this->IsShown());
	RUPA_Utils_Pos(t_Manage_Structure);
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
    //this->Destroy();
    //l_Manage_Structure->Refresh_Transponder_Tables();
	delete con;
	delete prep_stmt;
	delete res;

}

void RUPA_Manage_Campaign::On_Delete_Structure( wxCommandEvent& event )
{
// TODO: Implement On_Delete_Structure
   /* this->Show(!this->IsShown());
    t_Semi_Automatic_Burst = new RUPA_Semi_Automatic_Burst(this);
    RUPA_Utils_Pos(t_Semi_Automatic_Burst);*/
    long Item_Index = -1;

    while((Item_Index = Manage_Campaign_Deployed_Table->GetNextItem(Item_Index,
		    wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED)) != wxNOT_FOUND)
    {
	try
	{
	    driver = get_driver_instance();
	    con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
	    con->setSchema(DB);
	    stmt = con->createStatement();
	    prep_stmt = con->prepareStatement("SELECT * FROM Structure WHERE campaign=? LIMIT ?,1");
	    prep_stmt->setInt(1, id);
	    prep_stmt->setInt(2, Item_Index);
	    res = prep_stmt->executeQuery();
	    res->next();
	    delete prep_stmt;
	    delete res;
	}catch(sql::SQLException &e)
	{
	    RUPA_Utils_Print_SQL_Error(e);
	}

    }
}

void RUPA_Manage_Campaign::On_Manage_Structure( wxCommandEvent& event )
{
// TODO: Implement On_Manage_Structure
    this->Show(!this->IsShown());
    long Item_Index = -1;

    while((Item_Index = Manage_Campaign_Deployed_Table->GetNextItem(Item_Index,
		    wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED)) != wxNOT_FOUND)
    {
	try
	{
	    driver = get_driver_instance();
	    con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
	    con->setSchema(DB);
	    stmt = con->createStatement();
	    prep_stmt = con->prepareStatement("SELECT * FROM Structure WHERE campaign=? LIMIT ?,1");
	    prep_stmt->setInt(1, id);
	    prep_stmt->setInt(2, Item_Index);
	    res = prep_stmt->executeQuery();
	    res->next();
	}catch(sql::SQLException &e)
	{
	    RUPA_Utils_Print_SQL_Error(e);
	}

    }
    t_Manage_Structure = new RUPA_Manage_Structure(this, this, res->getInt("id"));
    RUPA_Utils_Pos(t_Manage_Structure);
    delete prep_stmt;
    delete res;
}

void RUPA_Manage_Campaign::On_Close_Manage_Campaign( wxCommandEvent& event )
{
// TODO: Implement On_Close_Manage_Campaign
    l_Campaign->Refresh_Campaigns_Tables();
    parent->Show(!parent->IsShown());
    this->Destroy();
}

void RUPA_Manage_Campaign::Print_Structure_Data_In_Table(wxListCtrl* Table, long int id_Structure, Phase dor)//dor = deployment or recovery
{
    //Inspired by https://wiki.wxwidgets.org/WxListCtrl 
    //-> Adding items in a multiple column list
    Table->DeleteAllItems();
    int num;
    try
    {
	driver = get_driver_instance();
	con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
	con->setSchema(DB);
	stmt = con->createStatement();
	prep_stmt = con->prepareStatement("SELECT * FROM Structure WHERE campaign=? ");
	prep_stmt->setInt(1, id);
	res = prep_stmt->executeQuery();
	std::cout<<"res = \n";
	delete prep_stmt;
	while(res->next())
	{
	    wxString location_name(res->getString("location_name").c_str(), wxConvUTF8);
	    //Table->SetItem(Item_Index, 1, location_name);
	    long Item_Index = Table->InsertItem(res->getInt("id"), location_name);
	    wxString devices(res->getString("devices").c_str(), wxConvUTF8);
	    Table->SetItem(Item_Index, 1, devices);
	    //Structure
	    Table->SetItem(Item_Index, 3, wxString::Format(wxT("%i"),res->getInt("structure_depth")));
	    prep_stmt = con->prepareStatement("SELECT * FROM Transponder WHERE structure=? ");
	    prep_stmt->setInt(1, res->getInt("id"));
	    res2 = prep_stmt->executeQuery();
	    std::string s="";
	    while(res2->next())
	    {
		s+= res2->getString("address")+":"+res2->getString("frequency")+"  ";
	    }
	    wxString Transponders_Addresses(s.c_str(), wxConvUTF8);
	    Table->SetItem(Item_Index, 2, Transponders_Addresses);

	    /*if(dor)
	    {
		Transponder_Table->SetItem(Item_Index, 2, wxString::Format(wxT("%f"),res->getInt("recovery_voltage")));
	    }else
	    {
		Transponder_Table->SetItem(Item_Index, 2, wxString::Format(wxT("%f"),res->getInt("deployment_voltage")));
	    }
	    wxString serial_number(res->getString("serial_number").c_str(), wxConvUTF8);
	    Transponder_Table->SetItem(Item_Index, 3, serial_number);*/
	}
    delete res;
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
}

void RUPA_Manage_Campaign::Refresh_Structure_Tables()
{

    this->Print_Structure_Data_In_Table(Manage_Campaign_Deployed_Table, 1, DEPLOYMENT);
    this->Print_Structure_Data_In_Table(Manage_Campaign_Recovered_Table, 1, RECOVERY);
    std::cout<<"everything printed\n";
    //this->Print_Transponder_Data_In_Table(Recovery_Transponder_Caracteristics, 1, RECOVERY);
}

/*
void RUPA_Manage_Campaign::Print_Campaigns_In_Table(wxListCtrl* Table, Phase cof)//cof = current of finished 
{
    //Inspired by https://wiki.wxwidgets.org/WxListCtrl 
    //-> Adding items in a multiple column list

    Table->DeleteAllItems();
    try
    {
	driver = get_driver_instance();
	con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
	con->setSchema(DB);
	stmt = con->createStatement();
	prep_stmt = con->prepareStatement("SELECT * FROM Structure WHERE campaign = ?"); //AND fished=?
	//prep_stmt->setInt(1, cof);
	res = prep_stmt->executeQuery();
	while(res->next())
	{
	    //res->next();
	    long Item_Index = Table->InsertItem(res->getInt("id"), wxString::Format(wxT("%i"),res->getInt("viewable")));
	    wxString geographical_area(res->getString("geographical_area").c_str(), wxConvUTF8);
	    Table->SetItem(Item_Index, 1, geographical_area);
	    wxString campaign_name(res->getString("campaign_name").c_str(), wxConvUTF8);
	    Table->SetItem(Item_Index, 2, campaign_name);
	    //wxString serial_number(res->getString("serial_number").c_str(), wxConvUTF8);
	    //Table->SetItem(Item_Index, 3, serial_number);
	}
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }

	delete prep_stmt;
	delete res;
}




void RUPA_Manage_Campaign::Refresh_Campaigns_Tables()
{

    this->Print_Campaigns_In_Table(Campaign_Current_Table, CURRENT);
    this->Print_Campaigns_In_Table(Campaign_Finished_Table, FINISHED);
}*/
