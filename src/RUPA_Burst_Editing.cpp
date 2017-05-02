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



RUPA_Burst_Editing::RUPA_Burst_Editing( wxWindow* parent, RUPA_Manage_Structure * MS, long int Burst_Id )
:Burst_Editing( parent ), l_Manage_Structure(MS), Id(Burst_Id)
{
    Set_Col_Measurement(Burst_Editing_Table);
    std::cout<<"Burst Editing Creating\n";
    Refresh_Burst_Tables();
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
    l_Manage_Structure->Refresh_Burst_Tables();
    this->Destroy();
}

void RUPA_Burst_Editing::Print_Measurement_Data_In_Table(wxListCtrl* Table, long int id_Structure, bool Recovery)//dor = deployment or recovery
{
    //Inspired by https://wiki.wxwidgets.org/WxListCtrl 
    //-> Adding items in a multiple column list

    Table->DeleteAllItems();
    RUPA_SQL *c ;
    try
    {
	c = new RUPA_SQL();
	c->prep_stmt = c->con->prepareStatement("SELECT * FROM Measurement WHERE burst=? ");
	c->prep_stmt->setInt(1, Id);
	c->res = c->prep_stmt->executeQuery();
	RUPA_SQL *c2 ;
	c2 = new RUPA_SQL();
	while(c->res->next())
	{
	    //res->next();
	    long Item_Index = Table->InsertItem(c->res->getInt("id"), wxString::Format(wxT("%i"),c->res->getInt("viewable")));
	    Table->SetItem(Item_Index, 1, ToString(c->res->getDouble("latitude")));
	    Table->SetItem(Item_Index, 2, ToString(c->res->getDouble("longitude")));
	    c2->prep_stmt = c->con->prepareStatement("SELECT * FROM Transponder WHERE id = ? ");
	    c2->prep_stmt->setInt(1, c->res->getInt("id_transponder"));
	    c2->res = c2->prep_stmt->executeQuery();
	    c2->res->next();
	    Table->SetItem(Item_Index, 3, ToString(c2->res->getInt("address")));
	    Table->SetItem(Item_Index, 4, ToString(c2->res->getInt("frequency")));
	    Table->SetItem(Item_Index, 5, ToString(c->res->getString("message")));
	    Table->SetItem(Item_Index, 6, ToString(c->res->getString("emission_date")));
	    Table->SetItem(Item_Index, 7, ToString(c->res->getString("receipt_date")));
	    Table->SetItem(Item_Index, 8, ToString(c->res->getString("value")));
    }
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
    delete c;

}



void RUPA_Burst_Editing::Refresh_Burst_Tables()
{

    this->Print_Measurement_Data_In_Table(Burst_Editing_Table, 1, 0);
}
