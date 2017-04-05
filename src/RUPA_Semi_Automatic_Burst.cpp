#include "RUPA_Semi_Automatic_Burst.h"

RUPA_Semi_Automatic_Burst::RUPA_Semi_Automatic_Burst( wxWindow* parent )
:
Semi_Automatic_Burst( parent )
{
    this->parent = parent;

}

void RUPA_Semi_Automatic_Burst::On_Range_Button( wxCommandEvent& event )
{
// TODO: Implement On_Range_Button
}

void RUPA_Semi_Automatic_Burst::On_Battery_Check_Button( wxCommandEvent& event )
{
// TODO: Implement On_Battery_Check_Button
}

void RUPA_Semi_Automatic_Burst::On_Release_Nut_Button( wxCommandEvent& event )
{
// TODO: Implement On_Release_Nut_Button
}

void RUPA_Semi_Automatic_Burst::On_Finish_Burst_Button( wxCommandEvent& event )
{
// TODO: Implement On_Finish_Burst_Button
    parent->Show(!parent->IsShown());
    this->Destroy();
}
