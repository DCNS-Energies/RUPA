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
}

void RUPA_Manage_Campaign::On_Manage_Structure( wxCommandEvent& event )
{
// TODO: Implement On_Manage_Structure
    this->Show(!this->IsShown());
    t_Manage_Structure = new RUPA_Manage_Structure(this);
    RUPA_Utils_Pos(t_Manage_Structure);
}

void RUPA_Manage_Campaign::On_Close_Manage_Campaign( wxCommandEvent& event )
{
// TODO: Implement On_Close_Manage_Campaign
    parent->Show(!parent->IsShown());
    this->Destroy();
}



