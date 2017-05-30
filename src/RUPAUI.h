///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Mar 30 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __RUPAUI_H__
#define __RUPAUI_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/toolbar.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/listctrl.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/notebook.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/gauge.h>
#include <wx/statline.h>

#include "wxWTranslateCatalog.h"

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class Campaign
///////////////////////////////////////////////////////////////////////////////
class Campaign : public wxDialog 
{
	private:
	
	protected:
		wxToolBar* Campaign_Toolbar;
		wxToolBarToolBase* Campaign_Import_Tool; 
		wxToolBarToolBase* Campaign_Export_Tool; 
		wxToolBarToolBase* Campaign_Display_All_Tool; 
		wxToolBarToolBase* Campaign_Display_Current_Tool; 
		wxToolBarToolBase* Campaign_Display_Finished_Tool; 
		wxNotebook* Campaign_Tabs_Layout;
		wxPanel* Campaign_Current_Tab;
		wxListCtrl* Campaign_Current_Table;
		wxPanel* Campaign_Finished_Tab;
		wxListCtrl* Campaign_Finished_Table;
		wxButton* Campaign_New_Button;
		wxButton* Campaign_Delete_Button;
		wxButton* Campaign_Manage_Button;
		wxButton* Campaign_Close_Button;
		wxButton* Chamge_Campaign_State_Button;
		
		// Virtual event handlers, overide them in your derived class
		virtual void On_Import( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Export( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Display_All( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Display_Current( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Display_Finished( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_New_Campaign( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Delete_Campaign( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Manage_Campaign( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Close( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Change_Campaign_State( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Campaign( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Campaign"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,415 ), long style = wxCAPTION|wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxTAB_TRAVERSAL ); 
		~Campaign();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Manage_Campaign
///////////////////////////////////////////////////////////////////////////////
class Manage_Campaign : public wxDialog 
{
	private:
	
	protected:
		wxToolBar* Manage_Campaign_Toolbar;
		wxToolBarToolBase* Manage_Campaign_Import_Tool; 
		wxToolBarToolBase* Manage_Campaign_Export_Tool; 
		wxToolBarToolBase* Manage_Campaign_Display_All_Tool; 
		wxToolBarToolBase* Manage_Campaign_Display_Current_Tool; 
		wxToolBarToolBase* Manage_Campaign_Display_Finished_Tool; 
		wxNotebook* Manage_Campaign_Tabs_Layout;
		wxPanel* Manage_Campaign_Deployed_Tab;
		wxListCtrl* Manage_Campaign_Deployed_Table;
		wxPanel* Manage_Campaign_Recovered_Tab;
		wxListCtrl* Manage_Campaign_Recovered_Table;
		wxButton* Manage_Campaign_New_Button;
		wxButton* Manage_Campaign_Delete_Button;
		wxButton* Manage_Campaign_Manage_Button;
		wxButton* Manage_Campaign_Close_Button;
		wxButton* Manage_Campaign_Finish_Button;
		
		// Virtual event handlers, overide them in your derived class
		virtual void On_Import_Structure( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Export_Structure( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Display_All_Structures( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Display_Current_Structures( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Display_Recovered_Structures( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_New_Structure( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Delete_Structure( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Manage_Structure( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Close_Manage_Campaign( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Finish_Campaign( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Manage_Campaign( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Manage Campaign"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxCAPTION|wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxTAB_TRAVERSAL ); 
		~Manage_Campaign();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Warning_Delete_Campaign
///////////////////////////////////////////////////////////////////////////////
class Warning_Delete_Campaign : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText59;
		wxStaticText* m_staticText60;
		wxButton* Warning_Delete_Campaign_Delete_Button;
		wxButton* Warning_Delete_Campaign_Cancel_Button;
		
		// Virtual event handlers, overide them in your derived class
		virtual void On_Delete( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Cancel( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Warning_Delete_Campaign( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("WARNING! Delete Campaign"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~Warning_Delete_Campaign();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class New_Campaign
///////////////////////////////////////////////////////////////////////////////
class New_Campaign : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* New_Compaign_Beacon_Name_Label;
		wxTextCtrl* New_Campaign_Beacon_Name_Inbox;
		wxStaticText* New_Campaign_Name_Inbox_Label;
		wxTextCtrl* New_Campaign_Name_Inbox;
		wxStaticText* New_Compaign_Geographical_Area_Label;
		wxTextCtrl* New_Campaign_Geographical_Area_Inbox;
		wxButton* New_Compaign_Install_Later_Button;
		wxButton* New_Compaign_Install_Now_Button;
		wxButton* New_Campaign_Cancel_Button;
		
		// Virtual event handlers, overide them in your derived class
		virtual void On_Install_Later( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Install_Now( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Cancel( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		New_Campaign( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("New Campaign"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 260,264 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER ); 
		~New_Campaign();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Manage_Structure
///////////////////////////////////////////////////////////////////////////////
class Manage_Structure : public wxDialog 
{
	private:
	
	protected:
		wxNotebook* Manage_Structure_Tabs_Layout;
		wxPanel* Manage_Structure_Deployment_Tab;
		wxButton* Deployment_General_Settings_Button;
		wxListCtrl* Deployment_Transponder_Caracteristics;
		wxButton* Add_Transponder_Button;
		wxButton* Edit_Transponder_Button;
		wxButton* Remove_Transponder_Button;
		wxButton* Manage_Structure_Deployment_Launch_Auto_Burst_Button;
		wxButton* Manage_Structure_Deployment_Launch_Semi_Auto_Burst_Button;
		wxListCtrl* Manage_Structure_Deployment_Table;
		wxButton* Manage_Structure_Deployment_Enter_Burst_Manually_Button1;
		wxButton* Manage_Structure_Deployment_Edit_Burst_Button1;
		wxButton* Manage_Structure_Deployment_Delete_Burst_Button1;
		wxGauge* Manage_Structure_Deployment_Gauge_LED_Validation;
		wxStaticText* Manage_Structure_Deployment_Validation_Text;
		wxButton* Manage_Structure_Deployment_Validation_Force_Validation_Buttons;
		wxButton* Manage_Structure_Deployment_Validation_Force_Invalidation_Buttons;
		wxStaticText* m_staticText761;
		wxStaticText* m_staticText791;
		wxTextCtrl* Deployment_Lat_Box;
		wxStaticText* m_staticText781;
		wxTextCtrl* Deployment_Lon_Box;
		wxStaticText* m_staticText771;
		wxTextCtrl* Deployment_Approximation_Radius_Box;
		wxStaticText* m_staticText801;
		wxButton* Manage_Structure_Deployment_Set_Position_Manually_Button;
		wxPanel* Manage_Structure_Recovery_Tab;
		wxButton* Recovery_General_Settings_Button;
		wxListCtrl* Recovery_Transponder_Caracteristics;
		wxButton* Manage_Structure_Recovery_Launch_Auto_Burst_Button1;
		wxButton* Manage_Structure_Recovery_Launch_Semi_Auto_Burst_Button1;
		wxListCtrl* Manage_Structure_Recovery_Table;
		wxButton* Manage_Structure_Recovery_Enter_Burst_Manually_Button;
		wxButton* Manage_Structure_Recovery_Edit_Burst_Button;
		wxButton* Manage_Structure_Recovery_Delete_Burst_Button;
		wxGauge* Manage_Structure_Recovery_Gauge_LED_Validation;
		wxStaticText* m_staticText70;
		wxButton* Manage_Structure_Recovery_Validation_Force_Validation_Buttons;
		wxButton* Manage_Structure_Recovery_Invalidation_Force_Validation_Buttons;
		wxStaticText* m_staticText76;
		wxStaticText* m_staticText79;
		wxTextCtrl* Recovery_Lat_Box;
		wxStaticText* m_staticText78;
		wxTextCtrl* Recovery_Lon_Box;
		wxStaticText* m_staticText77;
		wxTextCtrl* Recovery_Approximation_Radius_Box;
		wxStaticText* m_staticText80;
		wxButton* Manage_Structure_Recovery_Set_Position_Manually_Button;
		wxButton* Close_Button;
		
		// Virtual event handlers, overide them in your derived class
		virtual void On_Structure_General_Settings_Button( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Add_Transponder( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Edit_Transponder( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Remove_Transponder( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Launch_Auto_Burst_Deployment( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Launch_Semi_Auto_Burst_Deployment( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Enter_Burst_Manually( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Edit_Burst_Deployment( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Delete_Burst( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Force_Validation( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Force_Invalidation( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Set_Position_Button( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Structure_General_Settings( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Launch_Auto_Burst_Recovery( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Launch_Semi_Auto_Burst_Recovery( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Edit_Burst_Recovery( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Close( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Manage_Structure( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Manage Structure"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 560,674 ), long style = wxCAPTION|wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxTAB_TRAVERSAL ); 
		~Manage_Structure();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Setup_Structure
///////////////////////////////////////////////////////////////////////////////
class Setup_Structure : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText40;
		wxTextCtrl* Structure_Location_Name_Inbox;
		wxStaticText* m_staticText401;
		wxTextCtrl* Structure_Depth_Inbox;
		wxStaticText* m_staticText4011;
		wxTextCtrl* Structure_Devices_Inbox;
		wxButton* Ok_Change_Settings_Button;
		wxButton* Cancel_Change_Settings_Button;
		
		// Virtual event handlers, overide them in your derived class
		virtual void On_Set_Structure_Settings_Ok( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Set_Structure_Settings_Cancel( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Setup_Structure( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Set up Structure"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~Setup_Structure();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Manage_Transponder
///////////////////////////////////////////////////////////////////////////////
class Manage_Transponder : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText33;
		wxTextCtrl* Transponder_Address_Inbox;
		wxStaticText* m_staticText331;
		wxTextCtrl* Transponder_Frequency_Inbox;
		wxStaticText* m_staticText332;
		wxTextCtrl* Transponder_Serial_Number_Inbox;
		wxStaticText* m_staticText3321;
		wxTextCtrl* Transponder_Voltage_Inbox;
		wxStaticText* m_staticText39;
		wxButton* Auto_Battery_Check;
		wxButton* Ok_Transponder_Edition;
		wxButton* m_button56;
		
		// Virtual event handlers, overide them in your derived class
		virtual void On_Auto_Battery_Check( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Accept_Transponder_Edit( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Cancel_Transponder_Edit( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Manage_Transponder( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Manage Transponder"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~Manage_Transponder();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Automatic_Burst
///////////////////////////////////////////////////////////////////////////////
class Automatic_Burst : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText69;
		wxTextCtrl* Box_Message_Sent_Count;
		wxStaticText* m_staticText70;
		wxTextCtrl* Box_Message_Received_Count;
		wxStaticText* m_staticText71;
		wxButton* Stop_Automatic_Burst_Button;
		
		// Virtual event handlers, overide them in your derived class
		virtual void On_Stop_Automatic_Burst( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Automatic_Burst( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Automatic Burst"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~Automatic_Burst();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Semi_Automatic_Burst
///////////////////////////////////////////////////////////////////////////////
class Semi_Automatic_Burst : public wxDialog 
{
	private:
	
	protected:
		wxTextCtrl* Semi_Auto_Message_Sent_Count;
		wxStaticText* m_staticText70;
		wxTextCtrl* Semi_Auto_Message_Received_Count;
		wxStaticText* m_staticText71;
		wxStaticText* m_staticText72;
		wxTextCtrl* Semi_Automatic_Last_Value_Box;
		wxStaticLine* m_staticline2;
		wxStaticText* m_staticText73;
		wxButton* Semi_Automatic_Range_Button;
		wxButton* Semi_Automatic_Next_Transponder_Button;
		wxButton* Semi_Automatic_Previous_Transponder_Button;
		wxButton* Semi_Automatic_Finish_Burst_Button;
		
		// Virtual event handlers, overide them in your derived class
		virtual void On_Range_Button( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Next_Transponder_Button( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Previous_Transponder_Button( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Finish_Burst_Button( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Semi_Automatic_Burst( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Semi Automatic Burst"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~Semi_Automatic_Burst();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Change_Validation_State
///////////////////////////////////////////////////////////////////////////////
class Change_Validation_State : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText67;
		wxButton* m_button45;
		wxButton* m_button46;
		
		// Virtual event handlers, overide them in your derived class
		virtual void On_Yes( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_No( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Change_Validation_State( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Change Validation State"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~Change_Validation_State();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Warning_Delete_Burst
///////////////////////////////////////////////////////////////////////////////
class Warning_Delete_Burst : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText59;
		wxStaticText* m_staticText60;
		wxButton* Warning_Delete_Burst_Delete_Button;
		wxButton* Warning_Delete_Burst_Cancel_Button;
		
		// Virtual event handlers, overide them in your derived class
		virtual void On_Delete( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Cancel( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Warning_Delete_Burst( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("WARNING! Delete Burst"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~Warning_Delete_Burst();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Burst_Editing
///////////////////////////////////////////////////////////////////////////////
class Burst_Editing : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText79;
		wxListCtrl* Burst_Editing_Table;
		wxButton* Burst_Editing_Add;
		wxButton* Burst_Editing_Delete;
		wxButton* Close_Button;
		
		// Virtual event handlers, overide them in your derived class
		virtual void On_Add_Measure( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Delete_Measure( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Close( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Burst_Editing( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Burst Editing"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 433,294 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~Burst_Editing();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class Warning_Delete_Measurement
///////////////////////////////////////////////////////////////////////////////
class Warning_Delete_Measurement : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText59;
		wxStaticText* m_staticText60;
		wxButton* m_button37;
		wxButton* m_button38;
		
		// Virtual event handlers, overide them in your derived class
		virtual void On_Delete( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Cancel( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Warning_Delete_Measurement( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("WARNING! Delete Measurement"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~Warning_Delete_Measurement();
	
};

#endif //__RUPAUI_H__
