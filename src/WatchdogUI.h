///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Mar 30 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __WATCHDOGUI_H__
#define __WATCHDOGUI_H__

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
#include <wx/radiobut.h>
#include <wx/statbox.h>
#include <wx/checkbox.h>
#include <wx/filepicker.h>
#include <wx/spinctrl.h>
#include <wx/radiobox.h>
#include <wx/slider.h>
#include <wx/choice.h>

#include "wxWTranslateCatalog.h"

///////////////////////////////////////////////////////////////////////////

#define GPSCOURSE 1000
#define GPSFIX 1001
#define AISGUARDZONE 1002
#define ANCHORALARM 1003

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
		wxListCtrl* Campaign_Current_Campaign_Table;
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
		wxButton* m_button37;
		wxButton* m_button38;
		
		// Virtual event handlers, overide them in your derived class
		virtual void On_Delete( wxCommandEvent& event ) { event.Skip(); }
		
	
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
		wxStaticText* New_Campaign_Name_Inbox;
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
		wxListCtrl* m_listCtrl9;
		wxButton* Manage_Campaign_Launch_Auto_Burst_Button1;
		wxButton* Manage_Campaign_Launch_Semi_Auto_Burst_Button1;
		wxListCtrl* Campaign_Recovery_Table;
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
		wxButton* m_button37;
		wxButton* m_button38;
		
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

///////////////////////////////////////////////////////////////////////////////
/// Class WatchdogPropertiesDialogBase
///////////////////////////////////////////////////////////////////////////////
class WatchdogPropertiesDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxFlexGridSizer* m_fgSizerProperties;
		wxStaticText* m_staticTextName;
		wxStaticText* m_staticTextNameVal;
		wxStaticText* m_staticTextVersion;
		wxStaticText* m_staticTextMajor;
		wxStaticText* m_staticTextMajorVal;
		wxStaticText* m_staticTextMinor;
		wxStaticText* m_staticTextMinorVal;
		wxStaticText* m_staticTextPatch;
		wxStaticText* m_staticTextPatchVal;
		wxStaticText* m_staticTextDate;
		wxStaticText* m_staticTextDateVal;
		wxStaticText* m_staticTextOther;
		wxStaticText* m_staticTextOtherVal;
		wxButton* m_buttonOK;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnWatchdogPropertiesOKClick( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		WatchdogPropertiesDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("About Watchdog Properties"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCLOSE_BOX|wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP ); 
		~WatchdogPropertiesDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ConfigurationDialogBase
///////////////////////////////////////////////////////////////////////////////
class ConfigurationDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxRadioButton* m_rbAlways;
		wxRadioButton* m_rbOnce;
		wxRadioButton* m_rbVisible;
		wxRadioButton* m_rbNever;
		wxButton* m_bNew;
		wxButton* m_bEdit;
		wxButton* m_bDelete;
		wxButton* m_bDeleteAll;
		wxListCtrl* m_lAlarms;
		wxButton* m_button7;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnEnabled( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnNewAlarm( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnEditAlarm( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDeleteAlarm( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDeleteAllAlarms( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDoubleClick( wxMouseEvent& event ) { event.Skip(); }
		virtual void AlarmSelected( wxListEvent& event ) { event.Skip(); }
		virtual void OnAboutAuthor( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ConfigurationDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Watchdog Configuration"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxCAPTION|wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER ); 
		~ConfigurationDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class NewAlarmDialogBase
///////////////////////////////////////////////////////////////////////////////
class NewAlarmDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxStdDialogButtonSizer* m_sdbSizer3;
		wxButton* m_sdbSizer3OK;
		wxButton* m_sdbSizer3Cancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnDoubleClick( wxMouseEvent& event ) { event.Skip(); }
		
	
	public:
		wxListCtrl* m_lAlarmType;
		
		NewAlarmDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("New Alarm"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 400,300 ), long style = wxDEFAULT_DIALOG_STYLE ); 
		~NewAlarmDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class EditAlarmDialogBase
///////////////////////////////////////////////////////////////////////////////
class EditAlarmDialogBase : public wxDialog 
{
	private:
	
	protected:
		wxFlexGridSizer* m_fgSizer;
		wxCheckBox* m_cbAutoReset;
		wxCheckBox* m_cbgfxEnabled;
		wxButton* m_bTest;
		wxButton* m_button6;
		wxStdDialogButtonSizer* m_sdbSizer4;
		wxButton* m_sdbSizer4OK;
		wxButton* m_sdbSizer4Cancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnTestAlarm( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnInformation( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		wxCheckBox* m_cbSound;
		wxFilePickerCtrl* m_fpSound;
		wxCheckBox* m_cbCommand;
		wxTextCtrl* m_tCommand;
		wxCheckBox* m_cbMessageBox;
		wxCheckBox* m_cbRepeat;
		wxSpinCtrl* m_sRepeatSeconds;
		
		EditAlarmDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Edit Alarm"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~EditAlarmDialogBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class LandFallPanel
///////////////////////////////////////////////////////////////////////////////
class LandFallPanel : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText30;
		wxStaticText* m_staticText7;
		wxStaticText* m_staticText39122;
		wxStaticText* m_staticText45;
	
	public:
		wxRadioButton* m_rbTime;
		wxSpinCtrl* m_sTimeMinutes;
		wxRadioButton* m_rbDistance;
		wxTextCtrl* m_tDistance;
		
		LandFallPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL ); 
		~LandFallPanel();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class BoundaryPanel
///////////////////////////////////////////////////////////////////////////////
class BoundaryPanel : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText30;
		wxStaticText* m_staticText7;
		wxStaticText* m_staticText321;
		wxStaticText* m_staticText32;
		wxButton* m_button12;
		wxStaticText* m_staticTextCheckFrequency;
		wxStaticText* m_staticText39122;
		wxStaticLine* m_staticline1;
		
		// Virtual event handlers, overide them in your derived class
		void OnRadioButton( wxCommandEvent& event );
		void OnGuardZoneGUIDKillFocus( wxFocusEvent& event );
		void OnBoundaryGUIDKillFocus( wxFocusEvent& event );
		void OnGetBoundaryGUID( wxCommandEvent& event );
		
	
	public:
		wxRadioButton* m_rbTime;
		wxSpinCtrl* m_sTimeMinutes;
		wxRadioButton* m_rbDistance;
		wxTextCtrl* m_tDistance;
		wxRadioButton* m_rbGuard;
		wxTextCtrl* m_tGuardZoneGUID;
		wxRadioButton* m_rbAnchor;
		wxTextCtrl* m_tBoundaryGUID;
		wxRadioBox* m_radioBoxBoundaryType;
		wxRadioBox* m_radioBoxBoundaryState;
		wxSlider* m_sliderCheckFrequency;
		
		BoundaryPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL ); 
		~BoundaryPanel();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class NMEADataPanel
///////////////////////////////////////////////////////////////////////////////
class NMEADataPanel : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText34;
		wxStaticText* m_staticText35;
		wxStaticText* m_staticText13;
	
	public:
		wxTextCtrl* m_tSentences;
		wxSpinCtrl* m_sSeconds;
		
		NMEADataPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL ); 
		~NMEADataPanel();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DeadmanPanel
///////////////////////////////////////////////////////////////////////////////
class DeadmanPanel : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText33;
		wxStaticText* m_staticText6;
	
	public:
		wxSpinCtrl* m_sMinutes;
		
		DeadmanPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL ); 
		~DeadmanPanel();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class AnchorPanel
///////////////////////////////////////////////////////////////////////////////
class AnchorPanel : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText71;
		wxStaticText* m_staticText8;
		wxButton* m_bSyncToBoat;
		wxStaticText* m_staticText9;
		wxStaticText* m_staticText39;
		wxStaticText* m_staticText39121;
		
		// Virtual event handlers, overide them in your derived class
		void OnSyncToBoat( wxCommandEvent& event );
		
	
	public:
		wxTextCtrl* m_tLatitude;
		wxTextCtrl* m_tLongitude;
		wxSpinCtrl* m_sRadius;
		wxCheckBox* m_cbAutoSync;
		
		AnchorPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL ); 
		~AnchorPanel();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class CoursePanel
///////////////////////////////////////////////////////////////////////////////
class CoursePanel : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText50;
		wxStaticText* m_staticText32;
		wxStaticText* m_staticText18;
		wxStaticText* m_staticText21;
		wxButton* m_bCurrentCourse;
		wxStaticText* m_staticText3912;
		
		// Virtual event handlers, overide them in your derived class
		void OnCurrentCourse( wxCommandEvent& event );
		
	
	public:
		wxChoice* m_cMode;
		wxSpinCtrl* m_sTolerance;
		wxSpinCtrl* m_sCourse;
		
		CoursePanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL ); 
		~CoursePanel();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class SpeedPanel
///////////////////////////////////////////////////////////////////////////////
class SpeedPanel : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText51;
		wxStaticText* m_staticText44;
		wxStaticText* m_staticText24;
		wxStaticText* m_staticText28;
		wxStaticText* m_staticText391;
	
	public:
		wxChoice* m_cMode;
		wxTextCtrl* m_tSpeed;
		wxSlider* m_sliderSOGAverageNumber;
		
		SpeedPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL ); 
		~SpeedPanel();
	
};

#endif //__WATCHDOGUI_H__
