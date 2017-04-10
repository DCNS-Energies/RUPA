#ifndef __RUPA_Manage_Campaign__
#define __RUPA_Manage_Campaign__

/**
@file
Subclass of Manage_Campaign, which is generated by wxFormBuilder.
*/

#include "RUPAUI.h"
#include "RUPA_Manage_Structure.h"
//// end generated include

/** Implementing Manage_Campaign */
class RUPA_Manage_Campaign : public Manage_Campaign
{
	protected:
		// Handlers for Manage_Campaign events.
		void On_Import_Structure( wxCommandEvent& event );
		void On_Export_Structure( wxCommandEvent& event );
		void On_Display_All_Structures( wxCommandEvent& event );
		void On_Display_Current_Structures( wxCommandEvent& event );
		void On_Display_Recovered_Structures( wxCommandEvent& event );
		void OnDoubleClick( wxMouseEvent& event );
		void OnLeftDown( wxMouseEvent& event );
		void On_New_Structure( wxCommandEvent& event );
		void On_Delete_Structure( wxCommandEvent& event );
		void On_Manage_Structure( wxCommandEvent& event );
		void On_Close_Manage_Campaign( wxCommandEvent& event );



		wxWindow* parent;
		RUPA_Manage_Structure * t_Manage_Structure;
	public:
		/** Constructor */
		RUPA_Manage_Campaign( wxWindow* parent );
	//// end generated class members





};

#endif // __RUPA_Manage_Campaign__
