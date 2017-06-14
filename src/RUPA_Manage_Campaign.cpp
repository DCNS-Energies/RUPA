#include "RUPA_Manage_Campaign.h"





void Set_Col_Structures(wxListCtrl * l)
{
 
    
    l->InsertColumn(1, ("Location's name"));
    l->InsertColumn(2, ("Devices"));
    l->InsertColumn(3, ("Transponder's\nAdresses used"));
    l->InsertColumn(4, ("Depth"));
    //l->InsertColumn(5, ("Latitude"));// TODO_Trilateration
    //l->InsertColumn(6, ("Longitude"));// TODO_Trilateration
    l->InsertColumn(5, ("Installation\nDate UTC"));
    l->InsertColumn(6, ("Recovery\nDate UTC"));
    //l->InsertColumn(9, ("Latitude"));// TODO_Trilateration
    //l->InsertColumn(10, ("Longitude"));// TODO_Trilateration


    for(int i=0; i<11; i++)
    {
	l->SetColumnWidth(i, wxLIST_AUTOSIZE);
    }
}




RUPA_Manage_Campaign::RUPA_Manage_Campaign( wxWindow* parent, RUPA_Campaign * C, long int Campaign_Id )
:Manage_Campaign( parent ), l_Campaign(C), id(Campaign_Id)
{

    /*l_Campaign->Show(!l_Campaign->IsShown());*/
    l_Campaign->Show(0);
    this->parent = parent;
    this->GetSizer()->Fit( this );
    this->Layout();
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
    RUPA_SQL *c ;
    try
    {
	c = new RUPA_SQL();
	c->prep_stmt = c->con->prepareStatement("INSERT INTO Structure(campaign) VALUES(?)");
    	c->prep_stmt->setInt(1,id);
    	c->prep_stmt->execute();
	c->prep_stmt = c->con->prepareStatement("SELECT LAST_INSERT_ID() AS last_id");
	c->res = c->prep_stmt->executeQuery();
	c->res->next();
	c->prep_stmt = c->con->prepareStatement("INSERT INTO Operation( deployment_or_recovery, structure) VALUES(?,?)");
    	c->prep_stmt->setInt(2,c->res->getInt("last_id"));
    	c->prep_stmt->setString(1,"D");
    	c->prep_stmt->execute();
    	c->prep_stmt->setString(1,"R");
    	c->prep_stmt->execute();
	t_Manage_Structure = new RUPA_Manage_Structure(this->parent, this, c->res->getInt("last_id"), true);
	this->Show(!this->IsShown());
	RUPA_Utils_Pos(t_Manage_Structure);
	RUPA_Utils_Pos(t_Manage_Structure ->t_Setup_Structure);
	//t_Manage_Structure->Pos_Setup_Window();
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
    delete c;
}

void RUPA_Manage_Campaign::On_Delete_Structure( wxCommandEvent& event )
{

    long int Object_ID = Get_Selected_ID();
    RUPA_Utils_Delete_Item("Structure", Object_ID);
    Refresh_Structure_Tables();
}

void RUPA_Manage_Campaign::On_Manage_Structure( wxCommandEvent& event )
{
// TODO: Implement On_Manage_Structure
    this->Show(!this->IsShown());
    long int Object_ID = Get_Selected_ID();
    t_Manage_Structure = new RUPA_Manage_Structure(this->parent, this, Object_ID, false);
    RUPA_Utils_Pos(t_Manage_Structure);
}

void RUPA_Manage_Campaign::On_Un_Recover( wxCommandEvent& event )
{
    RUPA_SQL *c ;

    long int Object_ID = Get_Selected_ID();
    if (Object_ID>=0)
    {
	try
	{
	    c = new RUPA_SQL();
	    c->prep_stmt = c->con->prepareStatement("UPDATE Structure SET recovered = 1-recovered WHERE id =?");
	    c->prep_stmt->setInt(1, Object_ID);
	    c->prep_stmt->execute();
	}catch(sql::SQLException &e)
	{
	    RUPA_Utils_Print_SQL_Error(e);
	}
	Refresh_Structure_Tables();
    }
}


void RUPA_Manage_Campaign::On_Close_Manage_Campaign( wxCommandEvent& event )
{
// TODO: Implement On_Close_Manage_Campaign
    l_Campaign->Refresh_Campaigns_Tables();
    //parent->Show(!parent->IsShown());
    //l_Campaign->Show(!parent->IsShown());
    l_Campaign->Show(1);
    this->Destroy();
}

void RUPA_Manage_Campaign::Print_Structure_Data_In_Table( wxListCtrl* Table_d, //deployment
							  wxListCtrl* Table_r, //recovery
							  long int id_Structure)
{
    //Inspired by https://wiki.wxwidgets.org/WxListCtrl 
    //-> Adding items in a multiple column list
    Table_d->DeleteAllItems();
    Table_r->DeleteAllItems();
    wxListCtrl* Table;
    RUPA_SQL *c ;
    RUPA_SQL *c2 ;
    try
    {
	c = new RUPA_SQL();
	c->prep_stmt = c->con->prepareStatement("SELECT * FROM Structure WHERE campaign=? ");
	c->prep_stmt->setInt(1, id);
	c->res = c->prep_stmt->executeQuery();
	c2 = new RUPA_SQL();
	while(c->res->next())
	{
	    Table = c->res->getInt("recovered") == 0 ? Table_d : Table_r;
	    wxString location_name(c->res->getString("location_name").c_str(), wxConvUTF8);
	    long Item_Index = Table->InsertItem(c->res->getInt("id"), location_name);
	    Table->SetItem(Item_Index, 1, ToString(c->res->getString("devices")));
	    //Structure
	    Table->SetItem(Item_Index, 3, ToString(c->res->getInt("structure_depth")));
	    c->prep_stmt = c->con->prepareStatement("SELECT * FROM Transponder WHERE structure=? ");
	    c->prep_stmt->setInt(1, c->res->getInt("id"));
	    c->res2 = c->prep_stmt->executeQuery();
	    std::string Transponders_Addresses="";
	    while(c->res2->next())
	    {
		Transponders_Addresses += c->res2->getString("address")+":"+c->res2->getString("frequency")+"  ";
	    }
	    Table->SetItem(Item_Index, 2, ToString(Transponders_Addresses));
	    c2->prep_stmt = c2->con->prepareStatement("SELECT * FROM Operation WHERE structure=? ");
	    c2->prep_stmt->setInt(1, c->res->getInt("id"));
	    c2->res = c2->prep_stmt->executeQuery();
	    for(int i=0; i<2;i++)
	    {
		//first time for deployed structures, second for recovered
		c2->res->next();
		//Table->SetItem(Item_Index, 4+3*i, ToString(c2->res->getDouble("latitude")));// TODO_Trilateration
		//Table->SetItem(Item_Index, 5+3*i, ToString(c2->res->getDouble("longitude")));// TODO_Trilateration
		//Table->SetItem(Item_Index, 6+3*i, ToString(c2->res->getString("operation_date")));
		Table->SetItem(Item_Index, 4+i, ToString(c2->res->getString("operation_date")));
	    }


	}
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
    delete c;
    delete c2;
}

void RUPA_Manage_Campaign::Refresh_Structure_Tables()
{

    this->Print_Structure_Data_In_Table(Manage_Campaign_Deployed_Table, 
					Manage_Campaign_Recovered_Table,
					1);
    //this->Print_Structure_Data_In_Table(Manage_Campaign_Recovered_Table, 1, RECOVERY);
}

long int RUPA_Manage_Campaign::Get_Selected_ID()
{
    int sel = Manage_Campaign_Tabs_Layout->GetSelection();//to get what tab is selected
    std::cout<<"sel = "<<sel<<"\n";
    wxListCtrl* Table;
    Table = sel == 0 ? Manage_Campaign_Deployed_Table : Manage_Campaign_Recovered_Table;
    
    std::stringstream Cond;
    Cond<< "WHERE campaign = " << id;
    return RUPA_Utils_Get_Selected_ID("Structure", Table, Cond.str());
}

