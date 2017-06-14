#ifndef __RUPA_Manage_Campaign__
#define __RUPA_Manage_Campaign__

/**
@file
Subclass of Manage_Campaign, which is generated by wxFormBuilder.
*/

#include "RUPAUI.h"
#include "RUPA_Manage_Structure.h"
#include "RUPA_Campaign.h"
//// end generated include
class RUPA_Manage_Structure;
class RUPA_Campaign;
class RUPA_Setup_Structure;
/** Implementing Manage_Campaign */
class RUPA_Manage_Campaign : public Manage_Campaign
{
    protected:
	enum Phase{DEPLOYMENT, RECOVERY};
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
	void On_Un_Recover( wxCommandEvent& event );


	void Print_Structure_Data_In_Table( wxListCtrl* Structure_Table_r,//deployment
					    wxListCtrl* Structure_Table_d,//recovery
					    long int id_Structure);
	long int Get_Selected_ID();


	RUPA_Campaign *l_Campaign;//local reference to calling campaign
	RUPA_Setup_Structure * t_Setup_Structure;
	long int id;

	//wxWindow* parent;
	RUPA_Manage_Structure * t_Manage_Structure;
    public:
	/** Constructor */
	RUPA_Manage_Campaign( wxWindow* parent, RUPA_Campaign * C, long int Campaign_Id );
	void Refresh_Structure_Tables();
	long int get_Id(){return id;}
	wxWindow* parent;
    //// end generated class members





};

#endif // __RUPA_Manage_Campaign__
