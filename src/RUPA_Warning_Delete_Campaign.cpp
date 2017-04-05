#include "RUPA_Warning_Delete_Campaign.h"

RUPA_Warning_Delete_Campaign::RUPA_Warning_Delete_Campaign( wxWindow* parent )
:
Warning_Delete_Campaign( parent )
{

}

void RUPA_Warning_Delete_Campaign::On_Delete( wxCommandEvent& event )
{
// TODO: Implement On_Delete
    this->Destroy();
}


void RUPA_Warning_Delete_Campaign::On_Cancel( wxCommandEvent& event )
{
    this->Destroy();
}
