#ifndef __RUPA_Manage_Structure__
#define __RUPA_Manage_Structure__

/**
@file
Subclass of Manage_Structure, which is generated by wxFormBuilder.
*/

#include "RUPAUI.h"


//// end generated include
#include "RUPA_Automatic_Burst.h"
#include "RUPA_Semi_Automatic_Burst.h"
#include "RUPA_Burst_Editing.h"
#include "RUPA_Change_Validation_State.h"
#include "RUPA_Warning_Delete_Burst.h"
#include "RUPA_Manage_Transponder.h"
#include "RUPA_Manage_Campaign.h"
#include "RUPA_Utility.h"
#include "RUPA_Setup_Structure.h"

class RUPA_Setup_Transponder;
class RUPA_Manage_Transponder;
class RUPA_Manage_Campaign;
class RUPA_Setup_Structure;
class RUPA_Semi_Automatic_Burst;
class RUPA_Burst_Editing;
/** Implementing Manage_Structure */
class RUPA_Manage_Structure : public Manage_Structure
{
    protected:
	// Handlers for Manage_Structure events.
	enum Phase{DEPLOYMENT, RECOVERY};
	void On_Launch_Auto_Burst_Deployment( wxCommandEvent& event );
	void On_Launch_Auto_Burst_Recovery( wxCommandEvent& event );
	void On_Launch_Semi_Auto_Burst_Deployment( wxCommandEvent& event );
	void On_Launch_Semi_Auto_Burst_Recovery( wxCommandEvent& event );
	void OnDoubleClick( wxMouseEvent& event );
	void OnLeftDown( wxMouseEvent& event );
	void On_Enter_Burst_Manually( wxCommandEvent& event );
	void On_Edit_Burst_Recovery( wxCommandEvent& event );
	void On_Delete_Burst( wxCommandEvent& event );
	void On_Force_Validation( wxCommandEvent& event );
	void On_Force_Invalidation( wxCommandEvent& event );
	void On_Set_Position_Button( wxCommandEvent& event );
	void On_Edit_Burst_Deployment( wxCommandEvent& event );
	void On_Close( wxCommandEvent& event );
	void On_Add_Transponder( wxCommandEvent& event );
	void On_Edit_Transponder( wxCommandEvent& event );
	void On_Remove_Transponder( wxCommandEvent& event );
	void On_Transponder_Number_Leave_Window( wxMouseEvent& event ); 
	void On_Transponder_Number_Text_Enter( wxCommandEvent& event ); 
	void On_Structure_General_Settings_Button( wxCommandEvent& event);
	long int Get_Selected_Burst_ID();
	long int Get_Selected_Transponder_ID();

	
	void Insert_Data();
	void Print_Transponder_Data_In_Table(wxListCtrl *Table, long int id_Structure, Phase dor);
	void Print_Burst_Data_In_Table(wxListCtrl *Table, long int id_Structure, std::string dor);
	void Print_Burst_Data_In_Table();
	RUPA_Automatic_Burst * t_Automatic_Burst;
	RUPA_Semi_Automatic_Burst * t_Semi_Automatic_Burst;
	RUPA_Burst_Editing * t_Burst_Editing;
	RUPA_Warning_Delete_Burst * t_Warning_Delete_Burst;
	RUPA_Change_Validation_State * t_Change_Validation_State;
	RUPA_Manage_Transponder * t_Manage_Transponder;
	RUPA_Manage_Campaign * l_Manage_Campaign;
	RUPA_Setup_Structure * t_Setup_Structure;
	wxWindow* parent;

	/*sql::Driver *driver;
	sql::Connection *con;
	sql::Statement *stmt;
	sql::PreparedStatement *prep_stmt;
	sql::ResultSet *res;
	sql::ResultSet *res2;*/

	long int id;
    public:
	/** Constructor */
	RUPA_Manage_Structure( wxWindow* parent, RUPA_Manage_Campaign * MC, long int Structure_Id );
	void Refresh_Transponder_Tables();
	void Refresh_Burst_Tables();
	long int calling_id;
	long int get_Id(){return id;}
	//// end generated class members
	
};

#endif // __RUPA_Manage_Structure__
