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
}

void RUPA_Manage_Structure::On_Launch_Auto_Burst( wxCommandEvent& event )
{
// TODO: Implement On_Launch_Auto_Burst
    this->Show(!this->IsShown());
    t_Automatic_Burst = new RUPA_Automatic_Burst(this);
    RUPA_Utils_Pos(t_Automatic_Burst);
}

void RUPA_Manage_Structure::On_Launch_Semi_Auto_Burst( wxCommandEvent& event )
{
// TODO: Implement On_Launch_Semi_Auto_Burst
    this->Show(!this->IsShown());
    t_Semi_Automatic_Burst = new RUPA_Semi_Automatic_Burst(this);
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

void RUPA_Manage_Structure::On_Edit_burst( wxCommandEvent& event )
{
// TODO: Implement On_Edit_burst
    t_Burst_Editing = new RUPA_Burst_Editing(this);
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




void RUPA_Manage_Structure::On_Launch_Semin_Auto_Burst( wxCommandEvent& event )
{
    t_Semi_Automatic_Burst = new RUPA_Semi_Automatic_Burst(this);
    RUPA_Utils_Pos(t_Semi_Automatic_Burst);
}




void RUPA_Manage_Structure::On_Edit_Burst( wxCommandEvent& event )
{
// TODO: Implement On_Edit_Burst
    t_Burst_Editing = new RUPA_Burst_Editing(this);
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
    t_Manage_Transponder = new RUPA_Manage_Transponder(this, this);//a bit heavy style but is the structure id, so I insist on
    RUPA_Utils_Pos(t_Manage_Transponder);
}




void RUPA_Manage_Structure::On_Edit_Transponder(wxCommandEvent& event)
{
    t_Burst_Editing = new RUPA_Burst_Editing(this);
    RUPA_Utils_Pos(t_Burst_Editing);
}




void RUPA_Manage_Structure::On_Remove_Transponder(wxCommandEvent& event)
{
    t_Burst_Editing = new RUPA_Burst_Editing(this);
    RUPA_Utils_Pos(t_Burst_Editing);
}




void RUPA_Manage_Structure::On_Transponder_Number_Leave_Window( wxMouseEvent& event ) 
{

}




void RUPA_Manage_Structure::On_Transponder_Number_Text_Enter( wxCommandEvent& event )
{

}




void RUPA_Manage_Structure::Insert_Data()
{

}




void RUPA_Manage_Structure::Print_Transponder_Data_In_Table(wxListCtrl* Transponder_Table, long int id_Structure, Phase dor)//dor = deployment or recovery
{
    //Inspired by https://wiki.wxwidgets.org/WxListCtrl 
    //-> Adding items in a multiple column list

    Transponder_Table->DeleteAllItems();
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
	    long Item_Index = Transponder_Table->InsertItem(res->getInt("id"), wxString::Format(wxT("%i"),res->getInt("address")));
	    std::cout<<"Item_Index ="<<Item_Index<<std::endl;
	    Transponder_Table->SetItem(Item_Index, 1, wxString::Format(wxT("%i"),res->getInt("frequency")));
	    if(dor)
	    {
		Transponder_Table->SetItem(Item_Index, 2, wxString::Format(wxT("%f"),res->getInt("recovery_voltage")));
	    }else
	    {
		Transponder_Table->SetItem(Item_Index, 2, wxString::Format(wxT("%f"),res->getInt("deployment_voltage")));
	    }
	    wxString serial_number(res->getString("serial_number").c_str(), wxConvUTF8);
	    Transponder_Table->SetItem(Item_Index, 3, serial_number);
	}
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
/*    while(res->next())
    {
	try
	{
	    //res->next();
	    long Item_Index = Transponder_Table->InsertItem(res->getInt("id"), wxString::Format(wxT("%i"),res->getInt("address")));
	    std::cout<<"Item_Index ="<<Item_Index<<std::endl;
	    Transponder_Table->SetItem(Item_Index, 1, wxString::Format(wxT("%i"),res->getInt("frequency")));
	    if(dor)
	    {
		Transponder_Table->SetItem(Item_Index, 2, wxString::Format(wxT("%f"),res->getInt("recovery_voltage")));
	    }else
	    {
		Transponder_Table->SetItem(Item_Index, 2, wxString::Format(wxT("%f"),res->getInt("deployment_voltage")));
	    }
	    wxString serial_number(res->getString("serial_number").c_str(), wxConvUTF8);
	    Transponder_Table->SetItem(Item_Index, 3, serial_number);
	}catch(sql::SQLException &e)
	{
	    RUPA_Utils_Print_SQL_Error(e);
	}

}*/
	delete prep_stmt;
	delete res;
}




void RUPA_Manage_Structure::Refresh_Transponder_Tables()
{

    this->Print_Transponder_Data_In_Table(Deployment_Transponder_Caracteristics, 1, DEPLOYMENT);
    this->Print_Transponder_Data_In_Table(Recovery_Transponder_Caracteristics, 1, RECOVERY);
}
