#ifndef __RUPA_New_Campaign__
#define __RUPA_New_Campaign__

/**
@file
Subclass of New_Campaign, which is generated by wxFormBuilder.
*/

#include "RUPAUI.h"

//// end generated include

/** Implementing New_Campaign */
class RUPA_New_Campaign : public New_Campaign
{
	protected:
		// Handlers for New_Campaign events.
		void On_Install_Later( wxCommandEvent& event );
		void On_Install_Now( wxCommandEvent& event );
		void On_Cancel( wxCommandEvent& event );
	public:
		/** Constructor */
		RUPA_New_Campaign( wxWindow* parent );
		//~RUPA_New_Campaign( );
	//// end generated class members




};

#endif // __RUPA_New_Campaign__