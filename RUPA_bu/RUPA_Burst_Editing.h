#ifndef __RUPA_Burst_Editing__
#define __RUPA_Burst_Editing__

/**
@file
Subclass of Burst_Editing, which is generated by wxFormBuilder.
*/

#include "RUPAUI.h"

//// end generated include

/** Implementing Burst_Editing */
class RUPA_Burst_Editing : public Burst_Editing
{
	protected:
		// Handlers for Burst_Editing events.
		void On_Add_Measure( wxCommandEvent& event );
		void On_Delete_Measure( wxCommandEvent& event );
		void On_Close( wxCommandEvent& event );
	public:
		/** Constructor */
		RUPA_Burst_Editing( wxWindow* parent );
	//// end generated class members




};

#endif // __RUPA_Burst_Editing__