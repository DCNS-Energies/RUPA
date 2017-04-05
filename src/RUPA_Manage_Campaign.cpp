#include "RUPA_Manage_Campaign.h"

RUPA_Manage_Campaign::RUPA_Manage_Campaign( wxWindow* parent )
:
Manage_Campaign( parent )
{

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
    this->Destroy();
}
