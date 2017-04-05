#include "RUPA_Burst_Editing.h"

RUPA_Burst_Editing::RUPA_Burst_Editing( wxWindow* parent )
:
Burst_Editing( parent )
{

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
    this->Destroy();
}
