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

//// end generated include
class RUPA_New_Campaign;
/** Implementing Campaign */
//class watchdog_pi;

class RUPA_Campaign : public Campaign
{
    protected:
	// Handlers for Campaign events.
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

	RUPA_New_Campaign *t_New_Campaign;
	RUPA_Manage_Campaign *t_Manage_Campaign;
	RUPA_Warning_Delete_Campaign *t_Warning_Delete_Campaign;
	//bool t_b_New_Campaign_Shown;
    public:
	    /** Constructor */
	RUPA_Campaign( watchdog_pi &_watchdog_pi, wxWindow* parent );
	~RUPA_Campaign();
	void On_Manage_Campaign( wxCommandEvent& event );
	//// end generated class members
    
    private:

	watchdog_pi &m_watchdog_pi;




};

#endif // __RUPA_Campaign__
