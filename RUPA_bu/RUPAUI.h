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

#include "RUPA_Utility.h"
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
		
		// Virtual event handlers, overide them in your derived class
		virtual void On_Import( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Export( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Display_All( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Display_Current( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Display_Finished( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDoubleClick( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnLeftDown( wxMouseEvent& event ) { event.Skip(); }
		virtual void On_New_Campaign( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Delete_Campaign( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Manage_Campaign( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Close( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Campaign( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Campaign"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 800,415 ), long style = wxCAPTION|wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxTAB_TRAVERSAL ); 
		~Campaign();
	
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
		wxTextCtrl* New_Compaign_Beacon_Name_Inbox;
		wxStaticText* New_Campaign_Name_Inbox_Label;
		wxTextCtrl* New_Campaign_Name_Inbox;
		wxStaticText* New_Compaign_Geographical_Area_Label;
		wxTextCtrl* New_Compaign_Geographical_Area_Inbox;
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
/// Class Manage_Campaign
///////////////////////////////////////////////////////////////////////////////
class Manage_Campaign : public wxDialog 
{
	private:
	
	protected:
		wxNotebook* Manage_Campaign_Tabs_Layout;
		wxPanel* Manage_Campaign_Installation_Tab;
		wxTextCtrl* Installation_Transponder_Count;
		wxStaticText* m_staticText7621;
		wxListCtrl* Installation_Transponder_Caracteristics;
		wxButton* Manage_Campaign_Launch_Auto_Burst_Button;
		wxButton* Manage_Campaign_Launch_Semi_Auto_Burst_Button;
		wxListCtrl* Manage_Campaign_Installation_Table;
		wxButton* Manage_Campaign_Installation_Enter_Burst_Manually_Button1;
		wxButton* Manage_Campaign_Installation_Edit_Burst_Button1;
		wxButton* Manage_Campaign_Installation_Delete_Burst_Button1;
		wxGauge* Manage_Campaign_Installation_Gauge_LED_Validation;
		wxStaticText* Manage_Campaign_Installation_Validation_Text;
		wxButton* Manage_Campaign_Installation_Validation_Force_Validation_Buttons;
		wxButton* Manage_Campaign_Installation_Validation_Force_Invalidation_Buttons;
		wxStaticText* m_staticText761;
		wxStaticText* m_staticText791;
		wxTextCtrl* Installation_Lon_Box;
		wxStaticText* m_staticText781;
		wxTextCtrl* Installation_Lat_Box;
		wxStaticText* m_staticText771;
		wxTextCtrl* Installation_Approximation_Radius_Box;
		wxStaticText* m_staticText801;
		wxButton* Manage_Campaign_Installation_Set_Position_Manually_Button;
		wxPanel* Manage_Campaign_Recovery_Tab;
		wxTextCtrl* Recovery_Transponder_Count;
		wxStaticText* m_staticText762;
		wxListCtrl* Recovery_Transponder_Caracteristics;
		wxButton* Manage_Campaign_Launch_Auto_Burst_Button1;
		wxButton* Manage_Campaign_Launch_Semi_Auto_Burst_Button1;
		wxListCtrl* Manage_Campaign_Recovery_Table;
		wxButton* Manage_Campaign_Recovery_Enter_Burst_Manually_Button;
		wxButton* Manage_Campaign_Recovery_Edit_Burst_Button;
		wxButton* Manage_Campaign_Recovery_Delete_Burst_Button;
		wxGauge* Manage_Campaign_Recovery_Gauge_LED_Validation;
		wxStaticText* m_staticText70;
		wxButton* Manage_Campaign_Recovery_Validation_Force_Validation_Buttons;
		wxButton* Manage_Campaign_Recovery_Invalidation_Force_Validation_Buttons;
		wxStaticText* m_staticText76;
		wxStaticText* m_staticText79;
		wxTextCtrl* Recover_Lon_Box;
		wxStaticText* m_staticText78;
		wxTextCtrl* Recovery_Lat_Box;
		wxStaticText* m_staticText77;
		wxTextCtrl* Recovery_Approximation_Radius_Box;
		wxStaticText* m_staticText80;
		wxButton* Manage_Campaign_Recovery_Set_Position_Manually_Button;
		wxButton* Close_Button;
		
		// Virtual event handlers, overide them in your derived class
		virtual void On_Launch_Auto_Burst( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Launch_Semi_Auto_Burst( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDoubleClick( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnLeftDown( wxMouseEvent& event ) { event.Skip(); }
		virtual void On_Enter_Burst_Manually( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Edit_burst( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Delete_Burst( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Force_Validation( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Force_Invalidation( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Set_Position_Button( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Launch_Semin_Auto_Burst( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Edit_Burst( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Close( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		Manage_Campaign( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Manage Campaign"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 560,772 ), long style = wxCAPTION|wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxTAB_TRAVERSAL ); 
		~Manage_Campaign();
	
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
		wxButton* Semi_Automatic_Battery_Check_Button;
		wxButton* Semi_Automatic_Release_Button;
		wxButton* Semi_Automatic_Finish_Burst_Button;
		
		// Virtual event handlers, overide them in your derived class
		virtual void On_Range_Button( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Battery_Check_Button( wxCommandEvent& event ) { event.Skip(); }
		virtual void On_Release_Nut_Button( wxCommandEvent& event ) { event.Skip(); }
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
