#include "RUPA_Manage_Campaign.h"





void Set_Col_Structures(wxListCtrl * l)
{
 
    
    l->InsertColumn(0, ("Devices"));
    l->InsertColumn(1, ("Transponder's\nAdresses used"));
    l->InsertColumn(2, ("Depth"));
    l->InsertColumn(3, ("Latitude"));
    l->InsertColumn(4, ("Longitude"));
    l->InsertColumn(5, ("Installation\nDate UTC"));
    l->InsertColumn(6, ("Recovery\nDate UTC"));
    l->InsertColumn(7, ("Latitude"));
    l->InsertColumn(8, ("Longitude"));


    for(int i=0; i<9; i++)
    {
	l->SetColumnWidth(i, wxLIST_AUTOSIZE);
    }
}




RUPA_Manage_Campaign::RUPA_Manage_Campaign( wxWindow* parent )
:
Manage_Campaign( parent )
{

    this->parent = parent;
    Set_Col_Structures(Manage_Campaign_Deployed_Table);
    Set_Col_Structures(Manage_Campaign_Recovered_Table);
    Refresh_Structure_Tables();
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
    this->On_Manage_Structure(event);
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
	//wxLogDebug(Manage_Campaign_Deployed_Table->GetItemText(Item_Index));
	std::cout<<"line number "<<Item_Index<<" removed"<<std::endl;
    
    try
    {
	driver = get_driver_instance();
	con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
	con->setSchema(DB);
	stmt = con->createStatement();
	prep_stmt = con->prepareStatement("SELECT * FROM Structure WHERE campaign=4 LIMIT ?,1");
	std::cout<<"line number "<<Item_Index<<" removed"<<std::endl;
	prep_stmt->setInt(1, Item_Index);
	res = prep_stmt->executeQuery();
	res->next();
	std::cout<<"line id "<<res->getInt("id")<<" removed"<<std::endl;
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
	std::cout<<"line number "<<Item_Index<<" removed"<<std::endl;
	
	try
	{
	    driver = get_driver_instance();
	    con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
	    con->setSchema(DB);
	    stmt = con->createStatement();
	    prep_stmt = con->prepareStatement("SELECT * FROM Structure WHERE campaign=4 LIMIT ?,1");
	    std::cout<<"line number "<<Item_Index<<" removed"<<std::endl;
	    prep_stmt->setInt(1, Item_Index);
	    res = prep_stmt->executeQuery();
	    res->next();
	    std::cout<<"line id "<<res->getInt("id")<<" removed"<<std::endl;
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
    parent->Show(!parent->IsShown());
    this->Destroy();
}

void RUPA_Manage_Campaign::Print_Structure_Data_In_Table(wxListCtrl* Structure_Table, long int id_Structure, Phase dor)//dor = deployment or recovery
{
    //Inspired by https://wiki.wxwidgets.org/WxListCtrl 
    //-> Adding items in a multiple column list
    Structure_Table->DeleteAllItems();
    int num;
    try
    {
	driver = get_driver_instance();
	con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
	con->setSchema(DB);
	stmt = con->createStatement();
	prep_stmt = con->prepareStatement("SELECT COUNT(*) FROM Structure WHERE campaign=? ");
	res = prep_stmt->executeQuery();
	res->next();
	num = res->getInt(1);
	delete prep_stmt;
	delete res;
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
    try
    {
	prep_stmt = con->prepareStatement("SELECT * FROM Structure WHERE campaign=4 ");
	res = prep_stmt->executeQuery();
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
    for(int i=0; i<num; i++)
    {
	try
	{
	    res->next();
	    long Item_Index = Structure_Table->InsertItem(res->getInt("id"), wxString::Format(wxT("%i"),res->getInt("id")));
	    //Structure
	    Structure_Table->SetItem(Item_Index, 1, wxString::Format(wxT("%i"),res->getInt("campaign")));
	    /*if(dor)
	    {
		Transponder_Table->SetItem(Item_Index, 2, wxString::Format(wxT("%f"),res->getInt("recovery_voltage")));
	    }else
	    {
		Transponder_Table->SetItem(Item_Index, 2, wxString::Format(wxT("%f"),res->getInt("deployment_voltage")));
	    }
	    wxString serial_number(res->getString("serial_number").c_str(), wxConvUTF8);
	    Transponder_Table->SetItem(Item_Index, 3, serial_number);*/
	}catch(sql::SQLException &e)
	{
	    RUPA_Utils_Print_SQL_Error(e);
	}
    }
}

void RUPA_Manage_Campaign::Refresh_Structure_Tables()
{

    this->Print_Structure_Data_In_Table(Manage_Campaign_Deployed_Table, 1, DEPLOYMENT);
    this->Print_Structure_Data_In_Table(Manage_Campaign_Recovered_Table, 1, RECOVERY);
    //this->Print_Transponder_Data_In_Table(Recovery_Transponder_Caracteristics, 1, RECOVERY);
}

