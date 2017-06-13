





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

    this->parent=parent;
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
    t_New_Campaign = new RUPA_New_Campaign(this->parent, this);
    RUPA_Utils_Pos(t_New_Campaign);

}

void RUPA_Campaign::On_Delete_Campaign( wxCommandEvent& event )
{
// TODO: Implement On_Delete_Campaign
    long int Object_ID = Get_Selected_ID();
    /*RUPA_SQL *c ;
    if (Object_ID>=0)
    {
	t_Warning_Delete_Campaign = new RUPA_Warning_Delete_Campaign(this);
	RUPA_Utils_Pos(t_Warning_Delete_Campaign);
	try
	{
	    c = new RUPA_SQL();
	    c->prep_stmt = c->con->prepareStatement("DELETE FROM Campaign WHERE id = ?");
	    c->prep_stmt->setInt(1, Object_ID);
	    c->prep_stmt->execute();
	}catch(sql::SQLException &e)
	{
	    RUPA_Utils_Print_SQL_Error(e);
	}
    }*/
    RUPA_Utils_Delete_Item("Campaign", Object_ID);
    Refresh_Campaigns_Tables();
}


void RUPA_Campaign::On_Manage_Campaign( wxCommandEvent& event  )
{
    if(New_Campaign_Id==0)
    {
	long int Object_ID = Get_Selected_ID();
	if (Object_ID>=0)
	{
	    this->Show(!this->IsShown());
	    t_Manage_Campaign = new RUPA_Manage_Campaign(this->parent, this, Object_ID);
	    RUPA_Utils_Pos(t_Manage_Campaign);
	}
    }else
    {
	this->Show(!this->IsShown());
	t_Manage_Campaign = new RUPA_Manage_Campaign(this->parent, this, New_Campaign_Id);
	New_Campaign_Id = 0;
	RUPA_Utils_Pos(t_Manage_Campaign);
    }
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

    RUPA_SQL *c ;
    RUPA_SQL *c2 ;
    Table->DeleteAllItems();
    try
    {
	c = new RUPA_SQL();
	c2 = new RUPA_SQL();
	c->prep_stmt = c->con->prepareStatement("SELECT * FROM Campaign WHERE finished = ?"); 
	c->prep_stmt->setInt(1, cof);
	c->res = c->prep_stmt->executeQuery();
	while(c->res->next())
	{
	    long Item_Index = Table->InsertItem(c->res->getInt("id"), wxString::Format(wxT("%i"),c->res->getInt("viewable")));
	    wxString geographical_area(c->res->getString("geographical_area").c_str(), wxConvUTF8);
	    Table->SetItem(Item_Index, 1, geographical_area);
	    wxString campaign_name(c->res->getString("campaign_name").c_str(), wxConvUTF8);
	    Table->SetItem(Item_Index, 2, campaign_name);
	    c2->prep_stmt = c2->con->prepareStatement("SELECT * FROM Structure WHERE campaign = ?"); 
	    c2->prep_stmt->setInt(1, c->res->getInt("id"));
	    c2->res = c2->prep_stmt->executeQuery();
	    /*c2->prep_stmt = c2->con->prepareStatement("SELECT * FROM Structure WHERE campaign = ?"); 
	    c2->prep_stmt->setInt(1, c->res->getInt("id"));
	    c2->res = c2->prep_stmt->executeQuery();*/
	    std::string Structures="";
	    while(c2->res->next())
	    {
		Structures += c2->res->getString("location_name") + " ";
	    }
	    Table->SetItem(Item_Index, 3, Structures);

	}
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
    delete c;
}




void RUPA_Campaign::Refresh_Campaigns_Tables()
{

    this->Print_Campaigns_In_Table(Campaign_Current_Table, CURRENT);
    this->Print_Campaigns_In_Table(Campaign_Finished_Table, FINISHED);
}

void RUPA_Campaign::RenderAll(wdDC &dc, PlugIn_ViewPort &vp)
{
    PlugIn_Position_Fix_Ex lastfix = g_watchdog_pi->LastFix();
    RUPA_SQL *c  = NULL;
    try
    {
	c = new RUPA_SQL();
	c->prep_stmt = c->con->prepareStatement("SELECT * FROM Measurement WHERE message='Range' AND NOT value='Fail'");
	c->res = c->prep_stmt->executeQuery();
	wxPoint center;
	dc.SetBrush(*wxTRANSPARENT_BRUSH);
	while(c->res->next())
	{
	    c->prep_stmt = c->con->prepareStatement("SELECT deployment_or_recovery, structure_depth FROM Structure JOIN Operation JOIN Burst JOIN Measurement ON(Structure.id = Operation.structure AND Burst.id=Measurement.Burst AND Operation.id=Burst.operation AND Measurement.id=?)");
	    c->prep_stmt->setInt(1, c->res->getInt("id"));
	    c->res2 = c->prep_stmt->executeQuery();
	    c->res2->next();
	    std::string dor = c->res2->getString("deployment_or_recovery");
	    dc.SetPen(wxPen(dor.compare("D")==0? *wxRED:wxColour(58,2,13), 1));
	    GetCanvasPixLL(&vp, &center, c->res->getDouble("latitude"), c->res->getDouble("longitude"));
	    double circle_radius = std::sqrt(std::pow(c->res->getDouble("value"), 2) - std::pow(c->res2->getDouble("structure_depth"),2))//Pythagoras's theorem
		*vp.view_scale_ppm//zoom value
		/cos(c->res->getDouble("latitude")//apply simple mercator coefficient if you need more precision search for "Simpson rule"
			*3.1415/180);//convert degrees to radians

	    dc.DrawCircle( center.x, center.y, circle_radius);
	}
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
    delete c;

}

void RUPA_Campaign::On_Change_Campaign_State( wxCommandEvent& event )
{
    RUPA_SQL *c ;

    long int Object_ID = Get_Selected_ID();
    if (Object_ID>=0)
    {
	try
	{
	    c = new RUPA_SQL();
	    c->prep_stmt = c->con->prepareStatement("UPDATE Campaign SET finished = 1-finished WHERE id =?");
	    c->prep_stmt->setInt(1, Object_ID);
	    c->prep_stmt->execute();
	}catch(sql::SQLException &e)
	{
	    RUPA_Utils_Print_SQL_Error(e);
	}
	Refresh_Campaigns_Tables();
    }
    delete c;
}




long int RUPA_Campaign::Get_Selected_ID()
{
    int sel = Campaign_Tabs_Layout->GetSelection();//to get what tab is selected
    wxListCtrl* Table;
    Table = sel == 0 ? Campaign_Current_Table : Campaign_Finished_Table;
    std::stringstream Cond;
    Cond<< "WHERE finished = " << sel;
    return RUPA_Utils_Get_Selected_ID("Campaign", Table, Cond.str());
}


