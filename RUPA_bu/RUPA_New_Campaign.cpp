#include "RUPA_New_Campaign.h"

RUPA_New_Campaign::RUPA_New_Campaign( wxWindow* parent )
:New_Campaign( parent )
{

}

//RUPA_New_Campaign::~RUPA_New_Campaign( ){

//}
void RUPA_New_Campaign::On_Install_Later( wxCommandEvent& event )
{
// TODO: Implement On_Install_Later
    this->Destroy();

    //~RUPA_New_Campaign();
    
}

void RUPA_New_Campaign::On_Install_Now( wxCommandEvent& event )
{
// TODO: Implement On_Install_Now
    this->Destroy();
}

void RUPA_New_Campaign::On_Cancel( wxCommandEvent& event )
{
    this->Destroy();
}
