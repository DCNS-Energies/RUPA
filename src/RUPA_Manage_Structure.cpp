#include "RUPA_Manage_Structure.h"



void Set_Col_Transponder(wxListCtrl * l)
{

    l->InsertColumn(0, ("Address"));
    l->InsertColumn(1, ("Frequency"));
    l->InsertColumn(2, ("Voltage"));
    l->InsertColumn(3, ("Serial Number"));
    for(int i=0; i<13; i++)
    {
	l->SetColumnWidth(i, wxLIST_AUTOSIZE);
    }
}

void Set_Col_Burst(wxListCtrl * l)
{

    l->InsertColumn(0, ("X"));
    l->InsertColumn(1, ("Burst N°"));
    l->InsertColumn(2, ("Mode"));
    l->InsertColumn(3, ("Pings\ncount"));
    l->InsertColumn(4, ("% Pings\nreceived"));
    l->InsertColumn(5, ("Starting\nTime"));
    l->InsertColumn(6, ("Burst Duration"));
    for(int i=0; i<13; i++)
    {
	l->SetColumnWidth(i, wxLIST_AUTOSIZE);
    }
}


RUPA_Manage_Structure::RUPA_Manage_Structure( wxWindow* parent, RUPA_Manage_Campaign * MC, long int Structure_ID )
:Manage_Structure( parent ), l_Manage_Campaign(MC), id(Structure_ID)
{
    this->parent = parent;
    Set_Col_Transponder(Deployment_Transponder_Caracteristics);
    Set_Col_Transponder(Recovery_Transponder_Caracteristics);
    Set_Col_Burst(Manage_Structure_Deployment_Table);
    Set_Col_Burst(Manage_Structure_Recovery_Table);
    Refresh_Transponder_Tables();
    Refresh_Burst_Tables();
}

void RUPA_Manage_Structure::On_Launch_Auto_Burst_Deployment( wxCommandEvent& event )
{
    this->Show(!this->IsShown());
    t_Automatic_Burst = new RUPA_Automatic_Burst(this, 0);
    RUPA_Utils_Pos(t_Automatic_Burst);
}

void RUPA_Manage_Structure::On_Launch_Auto_Burst_Recovery( wxCommandEvent& event )
{
    this->Show(!this->IsShown());
    t_Automatic_Burst = new RUPA_Automatic_Burst(this, 1);
    RUPA_Utils_Pos(t_Automatic_Burst);
}

void RUPA_Manage_Structure::On_Launch_Semi_Auto_Burst_Deployment( wxCommandEvent& event )
{
// TODO: Implement On_Launch_Semi_Auto_Burst
    this->Show(!this->IsShown());
    t_Semi_Automatic_Burst = new RUPA_Semi_Automatic_Burst(this, this, 0);
    RUPA_Utils_Pos(t_Semi_Automatic_Burst);
}

void RUPA_Manage_Structure::On_Launch_Semi_Auto_Burst_Recovery( wxCommandEvent& event )
{
    this->Show(!this->IsShown());
    t_Semi_Automatic_Burst = new RUPA_Semi_Automatic_Burst(this, this, 1);
    RUPA_Utils_Pos(t_Semi_Automatic_Burst);
}


void RUPA_Manage_Structure::OnDoubleClick( wxMouseEvent& event )
{
// TODO: Implement OnDoubleClick
}

void RUPA_Manage_Structure::OnLeftDown( wxMouseEvent& event )
{
// TODO: Implement OnLeftDown
}

void RUPA_Manage_Structure::On_Enter_Burst_Manually( wxCommandEvent& event )
{
// TODO: Implement On_Enter_Burst_Manually
}

void RUPA_Manage_Structure::On_Edit_Burst_Recovery( wxCommandEvent& event )
{
// TODO: Implement On_Edit_burst
    t_Burst_Editing = new RUPA_Burst_Editing(this, this, 5);
    RUPA_Utils_Pos(t_Burst_Editing);
}




void RUPA_Manage_Structure::On_Delete_Burst( wxCommandEvent& event )
{
// TODO: Implement On_Delete_Burst
    t_Warning_Delete_Burst = new RUPA_Warning_Delete_Burst(this);
    RUPA_Utils_Pos(t_Warning_Delete_Burst);
}




void RUPA_Manage_Structure::On_Force_Validation( wxCommandEvent& event )
{
// TODO: Implement On_Force_Validation
    t_Change_Validation_State = new RUPA_Change_Validation_State(this);
    RUPA_Utils_Pos(t_Change_Validation_State);
}




void RUPA_Manage_Structure::On_Force_Invalidation( wxCommandEvent& event )
{
// TODO: Implement On_Force_Invalidation
    t_Change_Validation_State = new RUPA_Change_Validation_State(this);
    RUPA_Utils_Pos(t_Change_Validation_State);
}





void RUPA_Manage_Structure::On_Set_Position_Button( wxCommandEvent& event )
{
// TODO: Implement On_Set_Position_Button
}






void RUPA_Manage_Structure::On_Edit_Burst_Deployment( wxCommandEvent& event )
{
    long Item_Index = -1;
    std::cout<<"1"<<std::endl;
//New_Campaign_Id = 0;
     try
    {
	driver = get_driver_instance();
	con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
	con->setSchema(DB);
	stmt = con->createStatement();
	prep_stmt = con->prepareStatement("SELECT * FROM Operation WHERE structure=? AND deployment_or_recovery = ? ");
	prep_stmt->setInt(1, id);
	prep_stmt->setString(2, "D");
	res = prep_stmt->executeQuery();
	res->next();
	if(1)
	{
	while((Item_Index = Manage_Structure_Deployment_Table->GetNextItem(Item_Index,
			wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED)) != wxNOT_FOUND)
	{
		prep_stmt = con->prepareStatement("SELECT * FROM Burst WHERE operation=? LIMIT ?,1");
		prep_stmt->setInt(1, res->getInt("id"));
		prep_stmt->setInt(2, Item_Index);
		res2 = prep_stmt->executeQuery();
		res2->next();
	}
	}
	    }catch(sql::SQLException &e)
	    {
		RUPA_Utils_Print_SQL_Error(e);
	    }

	
//	t_Manage_Campaign = new RUPA_Manage_Campaign(this, this, res->getInt("id"));
    t_Burst_Editing = new RUPA_Burst_Editing(this, this, res2->getInt("id"));
    delete prep_stmt;
    delete res;
    delete res2;
    /*else
    {
	t_Manage_Campaign = new RUPA_Manage_Campaign(this, this, New_Campaign_Id);
	New_Campaign_Id = 0;
    }*/
    RUPA_Utils_Pos(t_Burst_Editing);
}




void RUPA_Manage_Structure::On_Close( wxCommandEvent& event )
{
// TODO: Implement On_Close
    parent->Show(!parent->IsShown());
    l_Manage_Campaign->Refresh_Structure_Tables();
    this->Destroy();
}




void RUPA_Manage_Structure::On_Add_Transponder(wxCommandEvent& event)
{
    t_Manage_Transponder = new RUPA_Manage_Transponder(this, this);
    RUPA_Utils_Pos(t_Manage_Transponder);
}




void RUPA_Manage_Structure::On_Edit_Transponder(wxCommandEvent& event)
{
    t_Burst_Editing = new RUPA_Burst_Editing(this, this, 5);
    RUPA_Utils_Pos(t_Burst_Editing);
}




void RUPA_Manage_Structure::On_Remove_Transponder(wxCommandEvent& event)
{
    t_Burst_Editing = new RUPA_Burst_Editing(this, this, 5);
    RUPA_Utils_Pos(t_Burst_Editing);
}





void RUPA_Manage_Structure:: On_Structure_General_Settings_Button( wxCommandEvent& event)
{
    t_Setup_Structure = new RUPA_Setup_Structure(this, this);
    RUPA_Utils_Pos(t_Setup_Structure);
    
}




void RUPA_Manage_Structure::Insert_Data()
{

}




void RUPA_Manage_Structure::Print_Transponder_Data_In_Table(wxListCtrl* Table, long int id_Structure, Phase dor)//dor = deployment or recovery
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
	prep_stmt = con->prepareStatement("SELECT * FROM Transponder WHERE structure=? ");
	prep_stmt->setInt(1, id);
	res = prep_stmt->executeQuery();
	while(res->next())
	{
	    //res->next();
	    long Item_Index = Table->InsertItem(res->getInt("id"), wxString::Format(wxT("%i"),res->getInt("address")));
	    Table->SetItem(Item_Index, 1, wxString::Format(wxT("%i"),res->getInt("frequency")));
	    if(dor)
	    {
		Table->SetItem(Item_Index, 2, wxString::Format(wxT("%f"),res->getInt("recovery_voltage")));
	    }else
	    {
		Table->SetItem(Item_Index, 2, wxString::Format(wxT("%f"),res->getInt("deployment_voltage")));
	    }
	    wxString serial_number(res->getString("serial_number").c_str(), wxConvUTF8);
	    Table->SetItem(Item_Index, 3, serial_number);
	}
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }

	delete prep_stmt;
	delete res;
}



void RUPA_Manage_Structure::Refresh_Transponder_Tables()
{

    this->Print_Transponder_Data_In_Table(Deployment_Transponder_Caracteristics, 1, DEPLOYMENT);
    this->Print_Transponder_Data_In_Table(Recovery_Transponder_Caracteristics, 1, RECOVERY);
}



void RUPA_Manage_Structure::Print_Burst_Data_In_Table(wxListCtrl* Table, long int id_Structure, std::string dor)//dor = deployment or recovery
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
	prep_stmt = con->prepareStatement("SELECT * FROM Operation WHERE structure=? AND deployment_or_recovery = ? ");
	prep_stmt->setInt(1, id);
	prep_stmt->setString(2, dor);
	res = prep_stmt->executeQuery();
	while(res->next())
	{
	    prep_stmt = con->prepareStatement("SELECT * FROM Burst WHERE operation=? ");
	    prep_stmt->setInt(1, res->getInt("id"));
	    res2 = prep_stmt->executeQuery();
	    while(res2->next())
	    {
		//res->next();
		long Item_Index = Table->InsertItem(res->getInt("id"), wxString::Format(wxT("%i"),res->getInt("viewable")));
		//Table->SetItem(Item_Index, 1, wxString::Format(wxT("%i"),res->getInt("viewable")));
		wxString burst_mode(res2->getString("burst_mode").c_str(), wxConvUTF8);
		Table->SetItem(Item_Index, 2, burst_mode);
		int pings_emmited = res2->getInt("pings_emmited_count");
		int pings_received = res2->getInt("pings_received_count");
		float ratio = pings_emmited>0 ? pings_received/pings_emmited : -1;
		Table->SetItem(Item_Index, 3, wxString::Format(wxT("%i"),pings_emmited));
		Table->SetItem(Item_Index, 4, wxString::Format(wxT("%f"), ratio));
	    }
	}
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }

	delete prep_stmt;
	delete res;
}



void RUPA_Manage_Structure::Refresh_Burst_Tables()
{

    this->Print_Burst_Data_In_Table(Manage_Structure_Deployment_Table, 1, "D");
    this->Print_Burst_Data_In_Table(Manage_Structure_Recovery_Table, 1, "R");
}
