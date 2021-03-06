#ifndef __RUPA_Campaign__
#define __RUPA_Campaign__

/**
@file
Subclass of Campaign, which is generated by wxFormBuilder.
*/

#include "RUPAUI.h"
#include "RUPA_Manage_Campaign.h"
#include "RUPA_New_Campaign.h"
#include "RUPA_Warning_Delete_Campaign.h"
#include "RUPA_Utility.h"
#include "wddc.h"
#include <stdlib.h>

//// end generated include
class RUPA_New_Campaign;
class RUPA_Manage_Campaign;
/** Implementing Campaign */
//class watchdog_pi;

class RUPA_Campaign : public Campaign
{
    protected:
	// Handlers for Campaign events.
	enum Phase{CURRENT, FINISHED};
	void On_Import( wxCommandEvent& event );
	void On_Export( wxCommandEvent& event );
	void On_Display_All( wxCommandEvent& event );
	void On_Display_Current( wxCommandEvent& event );
	void On_Display_Finished( wxCommandEvent& event );
	void OnDoubleClick( wxMouseEvent& event );
	void OnLeftDown( wxMouseEvent& event );
	void On_New_Campaign( wxCommandEvent& event );
	void On_Delete_Campaign( wxCommandEvent& event );
	//void On_Manage_Campaign( wxCommandEvent& event );
	void On_Close( wxCommandEvent& event );
	void Print_Campaigns_In_Table();
	void On_Change_Campaign_State( wxCommandEvent& event );
	long int Get_Selected_ID();

	RUPA_New_Campaign *t_New_Campaign;
	RUPA_Manage_Campaign *t_Manage_Campaign;
	RUPA_Warning_Delete_Campaign *t_Warning_Delete_Campaign;
	void Print_Campaigns_In_Table(wxListCtrl* Table, Phase cof);//cof = current of finished 

    public:
	    /** Constructor */
	RUPA_Campaign( watchdog_pi &_watchdog_pi, wxWindow* parent );
	~RUPA_Campaign();
	void On_Manage_Campaign( wxCommandEvent& event );
	void Refresh_Campaigns_Tables();
	long int New_Campaign_Id = 0;
	void RenderAll(wdDC &dc, PlugIn_ViewPort &vp);
	//// end generated class members
    
    private:

	watchdog_pi &m_watchdog_pi;

	/*res = stmt->executeQuery("SELECT 'Hello World!' AS _message");

	    cout << res->getString(1) << endl;

*/
    public:
	wxWindow* parent;
};

#endif // __RUPA_Campaign__
