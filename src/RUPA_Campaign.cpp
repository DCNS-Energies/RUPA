





#include "RUPA_Campaign.h"
#include "watchdog_pi.h"



extern watchdog_pi *g_watchdog_pi;

/* XPM */
/*const char * box_xpm[] = {
"20 20 3 1",
" 	c None",
".	c #FFFFFF",
"+	c #333333",
"....................",
".++++++++++++++++++.",
".+................+.",
".+................+.",
".+................+.",
".+................+.",
".+................+.",
".+................+.",
".+................+.",
".+................+.",
".+................+.",
".+................+.",
".+................+.",
".+................+.",
".+................+.",
".+................+.",
".+................+.",
".+................+.",
".++++++++++++++++++.",
"...................."};
*/
/* XPM */
/*const char * check_xpm[] = {
"20 20 3 1",
" 	c None",
".	c #FFFFFF",
"+	c #333333",
"....................",
".++++++++++++++++++.",
".+................+.",
".+.++..........++.+.",
".+.+++........+++.+.",
".+..+++......+++..+.",
".+...+++....+++...+.",
".+....+++..+++....+.",
".+.....++++++.....+.",
".+......++++......+.",
".+......++++......+.",
".+.....++++++.....+.",
".+....+++..+++....+.",
".+...+++....+++...+.",
".+..+++......+++..+.",
".+.+++........+++.+.",
".+.++..........++.+.",
".+................+.",
".++++++++++++++++++.",
"...................."};

*/


enum AlarmStatus { ALARM_ENABLED, ALARM_TYPE, ALARM_STATUS };


void Set_Col_Campaign(wxListCtrl * l)
{
 
    
    l->InsertColumn(0, ("X"));
    l->InsertColumn(1, ("Geographical area"));
    l->InsertColumn(2, ("Campaign's name"));
    l->InsertColumn(3, ("Structure's name"));
    l->InsertColumn(4, ("Devices"));



    /*l->SetColumnWidth(ALARM_ENABLED, wxLIST_AUTOSIZE);
    //l->SetRowHeight(ALARM_ENABLED, wxLIST_AUTOSIZE);
    l->SetColumnWidth(ALARM_TYPE, wxLIST_AUTOSIZE);
    //l->SetColumnHeight(ALARM_TYPE, wxLIST_AUTOSIZE);
    l->SetColumnWidth(ALARM_STATUS, wxLIST_AUTOSIZE);
    //l->SetColumnHeight(ALARM_STATUS, wxLIST_AUTOSIZE);*/
    for(int i=0; i<5; i++)
    {
	l->SetColumnWidth(i, wxLIST_AUTOSIZE);
    }

}
RUPA_Campaign::RUPA_Campaign( watchdog_pi &_watchdog_pi, wxWindow* parent ):
Campaign( parent ), m_watchdog_pi(_watchdog_pi)
{

    wxFileConfig *pConf = GetOCPNConfigObject();
    pConf->SetPath ( _T( "/Settings/Watchdog" ) );
    int enabled = pConf->Read ( _T ( "Enabled" ), 1L );
    m_watchdog_pi.m_iEnableType = enabled;

    t_New_Campaign = NULL;
   // t_b_New_Campaign_Shown = false;

    Move(pConf->Read ( _T ( "DialogPosX" ), 20L ), pConf->Read ( _T ( "DialogPosY" ), 20L ));
    Set_Col_Campaign(Campaign_Current_Table);
    Set_Col_Campaign(Campaign_Finished_Table);
/*
    wxImageList *imglist = new wxImageList(20, 20, true, 1);
    imglist->Add(wxBitmap(box_xpm));
    imglist->Add(wxBitmap(check_xpm));
    m_lStatus->AssignImageList(imglist, wxIMAGE_LIST_SMALL);

    m_lStatus->InsertColumn(ALARM_ENABLED, _T("X"));*/
  
    this->GetSizer()->Fit( this );
    this->Layout();
    this->SetSizeHints( GetSize().x, GetSize().y );

}

RUPA_Campaign::~RUPA_Campaign()
{
    wxFileConfig *pConf = GetOCPNConfigObject();
    pConf->SetPath ( _T ( "/Settings/Watchdog" ) );

    wxPoint p = GetPosition();

    pConf->Write ( _T ( "DialogPosX" ), p.x );
    pConf->Write ( _T ( "DialogPosY" ), p.y );
}
void RUPA_Campaign::On_Import( wxCommandEvent& event )
{
// TODO: Implement On_Import
}

void RUPA_Campaign::On_Export( wxCommandEvent& event )
{
// TODO: Implement On_Export
}

void RUPA_Campaign::On_Display_All( wxCommandEvent& event )
{
// TODO: Implement On_Display_All
}

void RUPA_Campaign::On_Display_Current( wxCommandEvent& event )
{
// TODO: Implement On_Display_Current
}

void RUPA_Campaign::On_Display_Finished( wxCommandEvent& event )
{
// TODO: Implement On_Display_Finished
}

void RUPA_Campaign::OnDoubleClick( wxMouseEvent& event )
{
// TODO: Implement OnDoubleClick
}

void RUPA_Campaign::OnLeftDown( wxMouseEvent& event )
{
// TODO: Implement OnLeftDown
}

void RUPA_Campaign::On_New_Campaign( wxCommandEvent& event )
{
// TODO: Implement On_New_Campaign
    t_New_Campaign = new RUPA_New_Campaign(this, this);
    RUPA_Utils_Pos(t_New_Campaign);

}

void RUPA_Campaign::On_Delete_Campaign( wxCommandEvent& event )
{
// TODO: Implement On_Delete_Campaign
    t_Warning_Delete_Campaign = new RUPA_Warning_Delete_Campaign(this);
    RUPA_Utils_Pos(t_Warning_Delete_Campaign);
}

void RUPA_Campaign::On_Manage_Campaign( wxCommandEvent& event )
{
// TODO: Implement On_Manage_Campaign
this->Show(!this->IsShown());
    t_Manage_Campaign = new RUPA_Manage_Campaign(this);
    RUPA_Utils_Pos(t_Manage_Campaign);
   }


void RUPA_Campaign::On_Close( wxCommandEvent& event )
{
    this->Show(!this->IsShown());
}
