#include "RUPA_Change_Validation_State.h"

RUPA_Change_Validation_State::RUPA_Change_Validation_State( wxWindow* parent )
:
Change_Validation_State( parent )
{

}

void RUPA_Change_Validation_State::On_Yes( wxCommandEvent& event )
{
// TODO: Implement On_Yes
    this->Destroy();
}

void RUPA_Change_Validation_State::On_No( wxCommandEvent& event )
{
// TODO: Implement On_No
    this->Destroy();
}
