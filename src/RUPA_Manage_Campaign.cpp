#include "RUPA_Manage_Campaign.h"


enum AlarmStatus { ALARM_ENABLED, ALARM_TYPE, ALARM_STATUS };

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



RUPA_Manage_Campaign::RUPA_Manage_Campaign( wxWindow* parent )
:
Manage_Campaign( parent )
{

    this->parent = parent;
    Set_Col_Transponder(Installation_Transponder_Caracteristics);
    Set_Col_Transponder(Recovery_Transponder_Caracteristics);
    Set_Col_Burst(Manage_Campaign_Installation_Table);
    Set_Col_Burst(Manage_Campaign_Recovery_Table);
}

void RUPA_Manage_Campaign::On_Launch_Auto_Burst( wxCommandEvent& event )
{
// TODO: Implement On_Launch_Auto_Burst
    
    this->Show(!this->IsShown());
    t_Automatic_Burst = new RUPA_Automatic_Burst(this);
    RUPA_Utils_Pos(t_Automatic_Burst);
}

void RUPA_Manage_Campaign::On_Launch_Semi_Auto_Burst( wxCommandEvent& event )
{
// TODO: Implement On_Launch_Semi_Auto_Burst
    this->Show(!this->IsShown());
    t_Semi_Automatic_Burst = new RUPA_Semi_Automatic_Burst(this);
    RUPA_Utils_Pos(t_Semi_Automatic_Burst);
}

void RUPA_Manage_Campaign::OnDoubleClick( wxMouseEvent& event )
{
// TODO: Implement OnDoubleClick
}

void RUPA_Manage_Campaign::OnLeftDown( wxMouseEvent& event )
{
// TODO: Implement OnLeftDown
}

void RUPA_Manage_Campaign::On_Enter_Burst_Manually( wxCommandEvent& event )
{
// TODO: Implement On_Enter_Burst_Manually
}

void RUPA_Manage_Campaign::On_Edit_burst( wxCommandEvent& event )
{
// TODO: Implement On_Edit_burst
    t_Burst_Editing = new RUPA_Burst_Editing(this);
    RUPA_Utils_Pos(t_Burst_Editing);
}

void RUPA_Manage_Campaign::On_Delete_Burst( wxCommandEvent& event )
{
// TODO: Implement On_Delete_Burst
    t_Warning_Delete_Burst = new RUPA_Warning_Delete_Burst(this);
    RUPA_Utils_Pos(t_Warning_Delete_Burst);
}

void RUPA_Manage_Campaign::On_Force_Validation( wxCommandEvent& event )
{
// TODO: Implement On_Force_Validation
    t_Change_Validation_State = new RUPA_Change_Validation_State(this);
    RUPA_Utils_Pos(t_Change_Validation_State);
}

void RUPA_Manage_Campaign::On_Force_Invalidation( wxCommandEvent& event )
{
// TODO: Implement On_Force_Invalidation
    t_Change_Validation_State = new RUPA_Change_Validation_State(this);
    RUPA_Utils_Pos(t_Change_Validation_State);
}

void RUPA_Manage_Campaign::On_Set_Position_Button( wxCommandEvent& event )
{
// TODO: Implement On_Set_Position_Button

}

void RUPA_Manage_Campaign::On_Launch_Semin_Auto_Burst( wxCommandEvent& event )
{
// TODO: Implement On_Launch_Semin_Auto_Burst
    t_Semi_Automatic_Burst = new RUPA_Semi_Automatic_Burst(this);
    RUPA_Utils_Pos(t_Semi_Automatic_Burst);
}

void RUPA_Manage_Campaign::On_Edit_Burst( wxCommandEvent& event )
{
// TODO: Implement On_Edit_Burst
    t_Burst_Editing = new RUPA_Burst_Editing(this);
    RUPA_Utils_Pos(t_Burst_Editing);
}

void RUPA_Manage_Campaign::On_Close( wxCommandEvent& event )
{
// TODO: Implement On_Close
    parent->Show(!parent->IsShown());
    this->Destroy();
}
