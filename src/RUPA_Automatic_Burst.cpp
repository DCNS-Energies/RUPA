#include "RUPA_Automatic_Burst.h"

RUPA_Automatic_Burst::RUPA_Automatic_Burst( wxWindow* parent, bool Recovery )
:
Automatic_Burst( parent )
{
this->parent = parent;
}

void RUPA_Automatic_Burst::On_Stop_Automatic_Burst( wxCommandEvent& event )
{
// TODO: Implement On_Stop_Automatic_Burst
    parent->Show(!parent->IsShown());
    this->Destroy();
}
