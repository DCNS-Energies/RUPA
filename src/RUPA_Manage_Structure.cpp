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


RUPA_Manage_Structure::RUPA_Manage_Structure( wxWindow* parent, RUPA_Manage_Campaign * MC, long int Structure_ID, bool new_structure )
:Manage_Structure( parent ), l_Manage_Campaign(MC), id(Structure_ID)
{
    this->parent = parent;
    Set_Col_Transponder(Deployment_Transponder_Caracteristics);
    Set_Col_Transponder(Recovery_Transponder_Caracteristics);
    Set_Col_Burst(Manage_Structure_Deployment_Table);
    Set_Col_Burst(Manage_Structure_Recovery_Table);
    Refresh_Transponder_Tables();
    Refresh_Burst_Tables();
    if(new_structure)
    {
	t_Setup_Structure = new RUPA_Setup_Structure(this->parent, this);
    }
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
    t_Semi_Automatic_Burst = new RUPA_Semi_Automatic_Burst(this->parent, this, 0);
    RUPA_Utils_Pos(t_Semi_Automatic_Burst);
}

void RUPA_Manage_Structure::On_Launch_Semi_Auto_Burst_Recovery( wxCommandEvent& event )
{
    this->Show(!this->IsShown());
    t_Semi_Automatic_Burst = new RUPA_Semi_Automatic_Burst(this->parent, this, 1);
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
    t_Burst_Editing = new RUPA_Burst_Editing(this->parent, this, 5);
    RUPA_Utils_Pos(t_Burst_Editing);
}




void RUPA_Manage_Structure::On_Delete_Burst( wxCommandEvent& event )
{
// TODO: Implement On_Delete_Burst
    long int Object_ID = Get_Selected_Burst_ID();
    RUPA_Utils_Delete_Item("Burst", Object_ID);
    Refresh_Burst_Tables();
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
    RUPA_SQL *c ;
    long int Object_ID = Get_Selected_Burst_ID();
    t_Burst_Editing = new RUPA_Burst_Editing(this->parent, this, Object_ID);
    RUPA_Utils_Pos(t_Burst_Editing);
}




void RUPA_Manage_Structure::On_Close( wxCommandEvent& event )
{
// TODO: Implement On_Close
    l_Manage_Campaign->Show(1);
    l_Manage_Campaign->Refresh_Structure_Tables();
    this->Destroy();
}




void RUPA_Manage_Structure::On_Add_Transponder(wxCommandEvent& event)
{
    t_Manage_Transponder = new RUPA_Manage_Transponder(this->parent, this);
    RUPA_Utils_Pos(t_Manage_Transponder);
}




void RUPA_Manage_Structure::On_Edit_Transponder(wxCommandEvent& event)
{
    t_Burst_Editing = new RUPA_Burst_Editing(this->parent, this, 5);
    RUPA_Utils_Pos(t_Burst_Editing);
}




void RUPA_Manage_Structure::On_Remove_Transponder(wxCommandEvent& event)
{
    long int Object_ID = Get_Selected_Transponder_ID();
    RUPA_Utils_Delete_Item("Transponder", Object_ID);
    Refresh_Transponder_Tables();
}





void RUPA_Manage_Structure:: On_Structure_General_Settings_Button( wxCommandEvent& event)
{
    t_Setup_Structure = new RUPA_Setup_Structure(this->parent, this);
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
    RUPA_SQL *c ;
    try
    {
	c = new RUPA_SQL();
	c->prep_stmt = c->con->prepareStatement("SELECT * FROM Transponder WHERE structure=? ");
	c->prep_stmt->setInt(1, id);
	c->res = c->prep_stmt->executeQuery();
	while(c->res->next())
	{
	    long Item_Index = Table->InsertItem(c->res->getInt("id"), wxString::Format(wxT("%i"),c->res->getInt("address")));
	    Table->SetItem(Item_Index, 1, wxString::Format(wxT("%i"),c->res->getInt("frequency")));
	    if(dor)
	    {
		Table->SetItem(Item_Index, 2, wxString::Format(wxT("%f"),c->res->getInt("recovery_voltage")));
	    }else
	    {
		Table->SetItem(Item_Index, 2, wxString::Format(wxT("%f"),c->res->getInt("deployment_voltage")));
	    }
	    wxString serial_number(c->res->getString("serial_number").c_str(), wxConvUTF8);
	    Table->SetItem(Item_Index, 3, serial_number);
	}
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
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
    RUPA_SQL *c ;
    try
    {
	c = new RUPA_SQL();
	c->prep_stmt = c->con->prepareStatement("SELECT * FROM Operation WHERE structure=? AND deployment_or_recovery = ? ");
	c->prep_stmt->setInt(1, id);
	c->prep_stmt->setString(2, dor);
	c->res = c->prep_stmt->executeQuery();
	RUPA_SQL *c2 ;
	c2 = new RUPA_SQL();
	int Burst_Count = 0;
	while(c->res->next())
	{
	    c->prep_stmt = c->con->prepareStatement("SELECT * FROM Burst WHERE operation=? ");
	    c->prep_stmt->setInt(1, c->res->getInt("id"));
	    c->res2 = c->prep_stmt->executeQuery();
	    while(c->res2->next())
	    {
		Burst_Count++;
		long Item_Index = Table->InsertItem(c->res->getInt("id"), wxString::Format(wxT("%i"),c->res->getInt("viewable")));
		Table->SetItem(Item_Index, 1, ToString(Burst_Count));
		wxString burst_mode(c->res2->getString("burst_mode").c_str(), wxConvUTF8);
		Table->SetItem(Item_Index, 2, ToString(c->res2->getString("burst_mode"))/*burst_mode*/);
		int pings_emmited = c->res2->getInt("pings_emmited_count");
		int pings_received = c->res2->getInt("pings_received_count");
		float ratio = pings_emmited>0 ? float(pings_received)/float(pings_emmited)*100 : -1;
		Table->SetItem(Item_Index, 3, wxString::Format(wxT("%i"),pings_emmited));
		Table->SetItem(Item_Index, 4, ToString(ratio));
		c2->prep_stmt = c2->con->prepareStatement("SELECT min(emission_date) AS mini, TIMEDIFF(max(receipt_date), min(emission_date)) AS duration FROM Measurement WHERE burst=? ");
		c2->prep_stmt->setInt(1, c->res2->getInt("id"));
		std::cout<<c->res2->getInt("id")<<"\n";
		c2->res = c2->prep_stmt->executeQuery();
		c2->res->next();
		Table->SetItem(Item_Index, 5, ToString(c2->res->getString("mini")));
		Table->SetItem(Item_Index, 6, ToString(c2->res->getString("duration")));
	    }
	}
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
}



void RUPA_Manage_Structure::Refresh_Burst_Tables()
{

    this->Print_Burst_Data_In_Table(Manage_Structure_Deployment_Table, 1, "D");
    this->Print_Burst_Data_In_Table(Manage_Structure_Recovery_Table, 1, "R");
}



long int RUPA_Manage_Structure::Get_Selected_Burst_ID()
{
    RUPA_SQL *c ;
    int sel = Manage_Structure_Tabs_Layout->GetSelection();//to get what tab is selected
    wxListCtrl* Table;
    std::string State;
    Table = sel == 0 ? Manage_Structure_Deployment_Table : Manage_Structure_Recovery_Table;
    State = sel == 0 ? "D" : "R";
    try
    {
	c = new RUPA_SQL();
	c->prep_stmt = c->con->prepareStatement("SELECT * FROM Operation WHERE structure=? AND deployment_or_recovery = ? ");
	c->prep_stmt->setInt(1, id);
	c->prep_stmt->setString(2, State);
	c->res = c->prep_stmt->executeQuery();
	c->res->next();
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
    std::stringstream Cond;
    Cond<< "WHERE operation = " << c->res->getInt("id");
    return RUPA_Utils_Get_Selected_ID("Burst", Table, Cond.str());
}


long int RUPA_Manage_Structure::Get_Selected_Transponder_ID()
{
    wxListCtrl* Table;
    Table = Deployment_Transponder_Caracteristics;
    std::stringstream Cond;
    Cond<< "WHERE structure = " << id;
    return RUPA_Utils_Get_Selected_ID("Transponder", Table, Cond.str());
}
