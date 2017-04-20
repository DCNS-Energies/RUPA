





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
    Refresh_Campaigns_Tables();

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
    long Item_Index = -1;
    long item_index = -1;
    int modif = 0;
    bool finished = 0;
    while((Item_Index = Campaign_Current_Table->GetNextItem(Item_Index,
		    wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED)) != wxNOT_FOUND)
    {
	modif =1;
	finished =0;
	item_index = Item_Index;
    }
    if( !modif)
    {
	Item_Index = -1;
	while((Item_Index = Campaign_Finished_Table->GetNextItem(Item_Index,
			wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED)) != wxNOT_FOUND)
	{
	    modif =2;
	    finished =1;
	    item_index = Item_Index;
	}
    }
    if(modif)
    {
	t_Warning_Delete_Campaign = new RUPA_Warning_Delete_Campaign(this);
	RUPA_Utils_Pos(t_Warning_Delete_Campaign);
	try
	{
	    driver = get_driver_instance();
	    con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
	    con->setSchema(DB);
	    stmt = con->createStatement();
	    prep_stmt = con->prepareStatement("SELECT * FROM Campaign WHERE finished = ? LIMIT ?,1");
	    prep_stmt->setInt(1, finished);
	    prep_stmt->setInt(2, item_index);
	    res = prep_stmt->executeQuery();
	    res->next();
	    prep_stmt = con->prepareStatement("DELETE FROM Campaign WHERE id = ?");
	    prep_stmt->setInt(1, res->getInt("id"));
	    prep_stmt->execute();
	}catch(sql::SQLException &e)
	{
	    RUPA_Utils_Print_SQL_Error(e);
	}
    }
    Refresh_Campaigns_Tables();

}

void RUPA_Campaign::On_Manage_Campaign( wxCommandEvent& event  )
{
// TODO: Implement On_Manage_Campaign
    this->Show(!this->IsShown());
    long Item_Index = -1;
    //New_Campaign_Id = 0;
    if(New_Campaign_Id==0)
    {
	while((Item_Index = Campaign_Current_Table->GetNextItem(Item_Index,
			wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED)) != wxNOT_FOUND)
	{
	    try
	    {
		driver = get_driver_instance();
		con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
		con->setSchema(DB);
		stmt = con->createStatement();
		prep_stmt = con->prepareStatement("SELECT * FROM Campaign LIMIT ?,1");
		prep_stmt->setInt(1, Item_Index);
		res = prep_stmt->executeQuery();
		res->next();
	    }catch(sql::SQLException &e)
	    {
		RUPA_Utils_Print_SQL_Error(e);
	    }

	}
	t_Manage_Campaign = new RUPA_Manage_Campaign(this, this, res->getInt("id"));
    delete prep_stmt;
    delete res;
    }else
    {
	t_Manage_Campaign = new RUPA_Manage_Campaign(this, this, New_Campaign_Id);
	New_Campaign_Id = 0;
    }
    RUPA_Utils_Pos(t_Manage_Campaign);
}


void RUPA_Campaign::On_Close( wxCommandEvent& event )
{

    this->Show(!this->IsShown());
}

void RUPA_Campaign::Print_Campaigns_In_Table()
{
}

void RUPA_Campaign::Print_Campaigns_In_Table(wxListCtrl* Table, Phase cof)//cof = current of finished 
{
    //Inspired by https://wiki.wxwidgets.org/WxListCtrl 
    //-> Adding items in a multiple column list

    Table->DeleteAllItems();
    try
    {
	driver = get_driver_instance();
	con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
	con->setSchema(DB);
	stmt = con->createStatement();
	prep_stmt = con->prepareStatement("SELECT * FROM Campaign WHERE finished = ?"); //AND fished=?
	prep_stmt->setInt(1, cof);
	res = prep_stmt->executeQuery();
	while(res->next())
	{
	    //res->next();
	    long Item_Index = Table->InsertItem(res->getInt("id"), wxString::Format(wxT("%i"),res->getInt("viewable")));
	    wxString geographical_area(res->getString("geographical_area").c_str(), wxConvUTF8);
	    Table->SetItem(Item_Index, 1, geographical_area);
	    wxString campaign_name(res->getString("campaign_name").c_str(), wxConvUTF8);
	    Table->SetItem(Item_Index, 2, campaign_name);
	    //wxString serial_number(res->getString("serial_number").c_str(), wxConvUTF8);
	    //Table->SetItem(Item_Index, 3, serial_number);
	}
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }

	delete prep_stmt;
	delete res;
}




void RUPA_Campaign::Refresh_Campaigns_Tables()
{

    this->Print_Campaigns_In_Table(Campaign_Current_Table, CURRENT);
    this->Print_Campaigns_In_Table(Campaign_Finished_Table, FINISHED);
}

void RUPA_Campaign::RenderAll(wdDC &dc, PlugIn_ViewPort &vp)
{
    PlugIn_Position_Fix_Ex lastfix = g_watchdog_pi->LastFix();
 /*   for(unsigned int i=0; i<s_Alarms.size(); i++)
        if(s_Alarms[i]->m_bgfxEnabled)
            s_Alarms[i]->Render(dc, vp);*/
    try
    {
	driver = get_driver_instance();
	con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
	con->setSchema(DB);
	stmt = con->createStatement();
	prep_stmt = con->prepareStatement("SELECT * FROM Measurement WHERE message='Range' AND NOT value='FAIL'");
	res = prep_stmt->executeQuery();
	wxPoint center;
	dc.SetPen(wxPen(*wxRED, 1));
	dc.SetBrush(*wxTRANSPARENT_BRUSH);
	//res->next();
	while(res->next())
	{
	    GetCanvasPixLL(&vp, &center, res->getDouble("latitude"), res->getDouble("longitude"));
	    dc.DrawCircle( center.x, center.y, /*atoi(res->getString("value")*/res->getInt("value")*vp.view_scale_ppm*1060/704);//hard values come from testing and using OpenCPN measurement tool

	}
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
    delete con;
    delete stmt;
    delete res;

}

/*void RUPA_Campaign::Render(wdDC &dc, PlugIn_ViewPort &vp) {
        PlugIn_Position_Fix_Ex lastfix = g_watchdog_pi->LastFix();
        if(isnan(m_crossinglat1))
            return;

        wxPoint r1, r2, r3, r4;
        GetCanvasPixLL(&vp, &r1, lastfix.Lat, lastfix.Lon);
        GetCanvasPixLL(&vp, &r2, m_crossinglat1, m_crossinglon1);
        GetCanvasPixLL(&vp, &r3, m_crossinglat2, m_crossinglon2);
        r4.x = (r2.x+r3.x)/2, r4.y = (r2.y+r3.y)/2;
        
        dc.SetPen(wxPen(wxColour(255, 255, 0), 2));
        dc.DrawLine( r1.x, r1.y, r4.x, r4.y );
        
        if(m_bFired)
            dc.SetPen(wxPen(*wxRED, 3));
        else
            dc.SetPen(wxPen(*wxGREEN, 3));

        dc.DrawCircle( r4.x, r4.y, hypot(r2.x-r3.x, r2.y-r3.y) / 2 );
    }*/




