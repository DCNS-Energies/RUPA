///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Mar 30 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "WatchdogUI.h"

///////////////////////////////////////////////////////////////////////////

Campaign::Campaign( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxSize( -1,-1 ) );
	
	wxFlexGridSizer* Campaign_Layout;
	Campaign_Layout = new wxFlexGridSizer( 0, 1, 0, 0 );
	Campaign_Layout->AddGrowableCol( 0 );
	Campaign_Layout->SetFlexibleDirection( wxBOTH );
	Campaign_Layout->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_ALL );
	
	Campaign_Toolbar = new wxToolBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTB_HORIZONTAL ); 
	Campaign_Import_Tool = Campaign_Toolbar->AddTool( wxID_ANY, _("Import Campaigns"), wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, _("Import Campaigns"), _("Import Campaigns"), NULL ); 
	
	Campaign_Export_Tool = Campaign_Toolbar->AddTool( wxID_ANY, _("Export Campaigns"), wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, _("Export Campaigns"), _("Export Campaigns"), NULL ); 
	
	Campaign_Toolbar->AddSeparator(); 
	
	Campaign_Display_All_Tool = Campaign_Toolbar->AddTool( wxID_ANY, _("Display All Campaigns"), wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, _("Display All Campaigns"), _("Display All Campaigns"), NULL ); 
	
	Campaign_Display_Current_Tool = Campaign_Toolbar->AddTool( wxID_ANY, _("Display Current Campaigns Only"), wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, _("Display Current Campaigns Only"), _("Display Current Campaigns Only"), NULL ); 
	
	Campaign_Display_Finished_Tool = Campaign_Toolbar->AddTool( wxID_ANY, _("Display Finished Campaigns Only"), wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, _("Display Finished Campaigns Only"), _("Display Finished Campaigns Only"), NULL ); 
	
	Campaign_Toolbar->Realize(); 
	
	Campaign_Layout->Add( Campaign_Toolbar, 0, wxEXPAND, 5 );
	
	Campaign_Tabs_Layout = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	Campaign_Current_Tab = new wxPanel( Campaign_Tabs_Layout, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* Campaign_Current_Table_Layout;
	Campaign_Current_Table_Layout = new wxBoxSizer( wxVERTICAL );
	
	Campaign_Current_Campaign_Table = new wxListCtrl( Campaign_Current_Tab, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_HRULES|wxLC_REPORT|wxLC_SINGLE_SEL|wxLC_VRULES );
	Campaign_Current_Campaign_Table->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INFOBK ) );
	
	Campaign_Current_Table_Layout->Add( Campaign_Current_Campaign_Table, 0, wxALL|wxEXPAND, 5 );
	
	
	Campaign_Current_Tab->SetSizer( Campaign_Current_Table_Layout );
	Campaign_Current_Tab->Layout();
	Campaign_Current_Table_Layout->Fit( Campaign_Current_Tab );
	Campaign_Tabs_Layout->AddPage( Campaign_Current_Tab, _("Current Campaign"), true );
	Campaign_Finished_Tab = new wxPanel( Campaign_Tabs_Layout, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	Campaign_Finished_Tab->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_ACTIVECAPTION ) );
	
	wxBoxSizer* Campaign_Finished_Table_Layout;
	Campaign_Finished_Table_Layout = new wxBoxSizer( wxVERTICAL );
	
	Campaign_Finished_Table = new wxListCtrl( Campaign_Finished_Tab, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_HRULES|wxLC_REPORT|wxLC_SINGLE_SEL|wxLC_VRULES );
	Campaign_Finished_Table->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	Campaign_Finished_Table->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	
	Campaign_Finished_Table_Layout->Add( Campaign_Finished_Table, 1, wxALL|wxEXPAND, 5 );
	
	
	Campaign_Finished_Tab->SetSizer( Campaign_Finished_Table_Layout );
	Campaign_Finished_Tab->Layout();
	Campaign_Finished_Table_Layout->Fit( Campaign_Finished_Tab );
	Campaign_Tabs_Layout->AddPage( Campaign_Finished_Tab, _("Finished Campaign"), false );
	
	Campaign_Layout->Add( Campaign_Tabs_Layout, 1, wxEXPAND | wxALL, 5 );
	
	wxFlexGridSizer* Campaign_Buttons_Layout;
	Campaign_Buttons_Layout = new wxFlexGridSizer( 0, 5, 0, 0 );
	Campaign_Buttons_Layout->SetFlexibleDirection( wxHORIZONTAL );
	Campaign_Buttons_Layout->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	Campaign_New_Button = new wxButton( this, wxID_ANY, _("New Campaign"), wxDefaultPosition, wxDefaultSize, 0 );
	Campaign_Buttons_Layout->Add( Campaign_New_Button, 0, wxALL, 5 );
	
	Campaign_Delete_Button = new wxButton( this, wxID_ANY, _("Delete Campaign"), wxDefaultPosition, wxDefaultSize, 0 );
	Campaign_Buttons_Layout->Add( Campaign_Delete_Button, 0, wxALL, 5 );
	
	Campaign_Manage_Button = new wxButton( this, wxID_ANY, _("Manage Campaign"), wxDefaultPosition, wxDefaultSize, 0 );
	Campaign_Buttons_Layout->Add( Campaign_Manage_Button, 0, wxALL, 5 );
	
	Campaign_Close_Button = new wxButton( this, wxID_ANY, _("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	Campaign_Buttons_Layout->Add( Campaign_Close_Button, 0, wxALL, 5 );
	
	
	Campaign_Layout->Add( Campaign_Buttons_Layout, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( Campaign_Layout );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( Campaign_Import_Tool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Campaign::On_Import ) );
	this->Connect( Campaign_Export_Tool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Campaign::On_Export ) );
	this->Connect( Campaign_Display_All_Tool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Campaign::On_Display_All ) );
	this->Connect( Campaign_Display_Current_Tool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Campaign::On_Display_Current ) );
	this->Connect( Campaign_Display_Finished_Tool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Campaign::On_Display_Finished ) );
	Campaign_Current_Campaign_Table->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( Campaign::OnDoubleClick ), NULL, this );
	Campaign_Current_Campaign_Table->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( Campaign::OnLeftDown ), NULL, this );
	Campaign_Finished_Table->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( Campaign::OnDoubleClick ), NULL, this );
	Campaign_Finished_Table->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( Campaign::OnLeftDown ), NULL, this );
	Campaign_New_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Campaign::On_New_Campaign ), NULL, this );
	Campaign_Delete_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Campaign::On_Delete_Campaign ), NULL, this );
	Campaign_Manage_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Campaign::On_Manage_Campaign ), NULL, this );
	Campaign_Close_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Campaign::On_Close ), NULL, this );
}

Campaign::~Campaign()
{
	// Disconnect Events
	this->Disconnect( Campaign_Import_Tool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Campaign::On_Import ) );
	this->Disconnect( Campaign_Export_Tool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Campaign::On_Export ) );
	this->Disconnect( Campaign_Display_All_Tool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Campaign::On_Display_All ) );
	this->Disconnect( Campaign_Display_Current_Tool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Campaign::On_Display_Current ) );
	this->Disconnect( Campaign_Display_Finished_Tool->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( Campaign::On_Display_Finished ) );
	Campaign_Current_Campaign_Table->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( Campaign::OnDoubleClick ), NULL, this );
	Campaign_Current_Campaign_Table->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( Campaign::OnLeftDown ), NULL, this );
	Campaign_Finished_Table->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( Campaign::OnDoubleClick ), NULL, this );
	Campaign_Finished_Table->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( Campaign::OnLeftDown ), NULL, this );
	Campaign_New_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Campaign::On_New_Campaign ), NULL, this );
	Campaign_Delete_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Campaign::On_Delete_Campaign ), NULL, this );
	Campaign_Manage_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Campaign::On_Manage_Campaign ), NULL, this );
	Campaign_Close_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Campaign::On_Close ), NULL, this );
	
}

Warning_Delete_Campaign::Warning_Delete_Campaign( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText59 = new wxStaticText( this, wxID_ANY, _("Delete a campaign is definitive."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText59->Wrap( -1 );
	bSizer15->Add( m_staticText59, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	m_staticText60 = new wxStaticText( this, wxID_ANY, _("ARE YOU REALLY SURE ?"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText60->Wrap( -1 );
	bSizer15->Add( m_staticText60, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	wxFlexGridSizer* fgSizer51;
	fgSizer51 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer51->SetFlexibleDirection( wxBOTH );
	fgSizer51->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_button37 = new wxButton( this, wxID_ANY, _("Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer51->Add( m_button37, 0, wxALL, 5 );
	
	m_button38 = new wxButton( this, wxID_ANY, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer51->Add( m_button38, 0, wxALL, 5 );
	
	
	bSizer15->Add( fgSizer51, 1, wxALIGN_CENTER_HORIZONTAL|wxSHAPED, 5 );
	
	
	this->SetSizer( bSizer15 );
	this->Layout();
	bSizer15->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_button37->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Warning_Delete_Campaign::On_Delete ), NULL, this );
}

Warning_Delete_Campaign::~Warning_Delete_Campaign()
{
	// Disconnect Events
	m_button37->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Warning_Delete_Campaign::On_Delete ), NULL, this );
	
}

New_Campaign::New_Campaign( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* New_Campaign_Layout;
	New_Campaign_Layout = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* New_Campaign_Input_Layout;
	New_Campaign_Input_Layout = new wxFlexGridSizer( 0, 2, 0, 0 );
	New_Campaign_Input_Layout->SetFlexibleDirection( wxBOTH );
	New_Campaign_Input_Layout->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	New_Compaign_Beacon_Name_Label = new wxStaticText( this, wxID_ANY, _("Location Name  :"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	New_Compaign_Beacon_Name_Label->Wrap( -1 );
	New_Campaign_Input_Layout->Add( New_Compaign_Beacon_Name_Label, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );
	
	New_Compaign_Beacon_Name_Inbox = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_RIGHT );
	New_Campaign_Input_Layout->Add( New_Compaign_Beacon_Name_Inbox, 0, wxALL, 5 );
	
	New_Campaign_Name_Inbox = new wxStaticText( this, wxID_ANY, _("Campaign's Name :"), wxDefaultPosition, wxDefaultSize, 0 );
	New_Campaign_Name_Inbox->Wrap( -1 );
	New_Campaign_Input_Layout->Add( New_Campaign_Name_Inbox, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );
	
	New_Campaign_Name_Inbox = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_RIGHT );
	New_Campaign_Input_Layout->Add( New_Campaign_Name_Inbox, 0, wxALL, 5 );
	
	New_Compaign_Geographical_Area_Label = new wxStaticText( this, wxID_ANY, _("Geographical Area :"), wxDefaultPosition, wxDefaultSize, 0 );
	New_Compaign_Geographical_Area_Label->Wrap( -1 );
	New_Campaign_Input_Layout->Add( New_Compaign_Geographical_Area_Label, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );
	
	New_Compaign_Geographical_Area_Inbox = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	New_Campaign_Input_Layout->Add( New_Compaign_Geographical_Area_Inbox, 0, wxALL, 5 );
	
	
	New_Campaign_Layout->Add( New_Campaign_Input_Layout, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* New_Campaign_Button_Layout;
	New_Campaign_Button_Layout = new wxFlexGridSizer( 0, 3, 0, 0 );
	New_Campaign_Button_Layout->SetFlexibleDirection( wxBOTH );
	New_Campaign_Button_Layout->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	New_Compaign_Install_Later_Button = new wxButton( this, wxID_ANY, _("Install Later"), wxDefaultPosition, wxDefaultSize, 0 );
	New_Campaign_Button_Layout->Add( New_Compaign_Install_Later_Button, 0, wxALL, 5 );
	
	New_Compaign_Install_Now_Button = new wxButton( this, wxID_ANY, _("Install Now"), wxDefaultPosition, wxDefaultSize, 0 );
	New_Campaign_Button_Layout->Add( New_Compaign_Install_Now_Button, 0, wxALIGN_RIGHT|wxALL, 5 );
	
	
	New_Campaign_Layout->Add( New_Campaign_Button_Layout, 1, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	New_Campaign_Cancel_Button = new wxButton( this, wxID_ANY, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	New_Campaign_Layout->Add( New_Campaign_Cancel_Button, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	
	this->SetSizer( New_Campaign_Layout );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	New_Compaign_Install_Later_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( New_Campaign::On_Install_Later ), NULL, this );
	New_Compaign_Install_Now_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( New_Campaign::On_Install_Now ), NULL, this );
	New_Campaign_Cancel_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( New_Campaign::On_Cancel ), NULL, this );
}

New_Campaign::~New_Campaign()
{
	// Disconnect Events
	New_Compaign_Install_Later_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( New_Campaign::On_Install_Later ), NULL, this );
	New_Compaign_Install_Now_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( New_Campaign::On_Install_Now ), NULL, this );
	New_Campaign_Cancel_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( New_Campaign::On_Cancel ), NULL, this );
	
}

Manage_Campaign::Manage_Campaign( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxSize( -1,-1 ) );
	
	wxFlexGridSizer* Manage_Campaign_Layout;
	Manage_Campaign_Layout = new wxFlexGridSizer( 0, 1, 0, 0 );
	Manage_Campaign_Layout->AddGrowableCol( 0 );
	Manage_Campaign_Layout->SetFlexibleDirection( wxBOTH );
	Manage_Campaign_Layout->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_ALL );
	
	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxVERTICAL );
	
	Manage_Campaign_Tabs_Layout = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Installation_Tab = new wxPanel( Manage_Campaign_Tabs_Layout, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* Manage_Campaign_Installation_Layout;
	Manage_Campaign_Installation_Layout = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer251;
	bSizer251 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer621;
	fgSizer621 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer621->SetFlexibleDirection( wxBOTH );
	fgSizer621->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	Installation_Transponder_Count = new wxTextCtrl( Manage_Campaign_Installation_Tab, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer621->Add( Installation_Transponder_Count, 0, wxALL, 5 );
	
	m_staticText7621 = new wxStaticText( Manage_Campaign_Installation_Tab, wxID_ANY, _("Transponders"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7621->Wrap( -1 );
	fgSizer621->Add( m_staticText7621, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	
	bSizer251->Add( fgSizer621, 1, wxEXPAND, 5 );
	
	Installation_Transponder_Caracteristics = new wxListCtrl( Manage_Campaign_Installation_Tab, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_EDIT_LABELS|wxLC_REPORT );
	bSizer251->Add( Installation_Transponder_Caracteristics, 0, wxALL, 5 );
	
	
	Manage_Campaign_Installation_Layout->Add( bSizer251, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* Manage_Campaign_Installation_Launch_Buttons_Layout;
	Manage_Campaign_Installation_Launch_Buttons_Layout = new wxFlexGridSizer( 0, 2, 0, 0 );
	Manage_Campaign_Installation_Launch_Buttons_Layout->SetFlexibleDirection( wxBOTH );
	Manage_Campaign_Installation_Launch_Buttons_Layout->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	Manage_Campaign_Launch_Auto_Burst_Button = new wxButton( Manage_Campaign_Installation_Tab, wxID_ANY, _("Laucnh Auto Burst"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Installation_Launch_Buttons_Layout->Add( Manage_Campaign_Launch_Auto_Burst_Button, 0, wxALL, 5 );
	
	Manage_Campaign_Launch_Semi_Auto_Burst_Button = new wxButton( Manage_Campaign_Installation_Tab, wxID_ANY, _("Launch Semi Auto Burst"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Installation_Launch_Buttons_Layout->Add( Manage_Campaign_Launch_Semi_Auto_Burst_Button, 0, wxALL, 5 );
	
	
	Manage_Campaign_Installation_Layout->Add( Manage_Campaign_Installation_Launch_Buttons_Layout, 1, wxALL|wxSHAPED, 5 );
	
	wxFlexGridSizer* Manage_Campaign_Installation_Table_Layout;
	Manage_Campaign_Installation_Table_Layout = new wxFlexGridSizer( 0, 2, 0, 0 );
	Manage_Campaign_Installation_Table_Layout->SetFlexibleDirection( wxBOTH );
	Manage_Campaign_Installation_Table_Layout->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	Manage_Campaign_Installation_Table = new wxListCtrl( Manage_Campaign_Installation_Tab, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_HRULES|wxLC_REPORT|wxLC_SINGLE_SEL|wxLC_VRULES );
	Manage_Campaign_Installation_Table->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INFOBK ) );
	
	Manage_Campaign_Installation_Table_Layout->Add( Manage_Campaign_Installation_Table, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* Manage_Campaign_Installation_Buttons;
	Manage_Campaign_Installation_Buttons = new wxBoxSizer( wxVERTICAL );
	
	Manage_Campaign_Installation_Enter_Burst_Manually_Button1 = new wxButton( Manage_Campaign_Installation_Tab, wxID_ANY, _("Enter a burst manually"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Installation_Buttons->Add( Manage_Campaign_Installation_Enter_Burst_Manually_Button1, 0, wxALL|wxEXPAND, 5 );
	
	Manage_Campaign_Installation_Edit_Burst_Button1 = new wxButton( Manage_Campaign_Installation_Tab, wxID_ANY, _("Edit Burst"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Installation_Buttons->Add( Manage_Campaign_Installation_Edit_Burst_Button1, 0, wxALL|wxEXPAND, 5 );
	
	Manage_Campaign_Installation_Delete_Burst_Button1 = new wxButton( Manage_Campaign_Installation_Tab, wxID_ANY, _("Delete Burst"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Installation_Buttons->Add( Manage_Campaign_Installation_Delete_Burst_Button1, 0, wxALL|wxEXPAND, 5 );
	
	
	Manage_Campaign_Installation_Table_Layout->Add( Manage_Campaign_Installation_Buttons, 1, wxEXPAND, 5 );
	
	
	Manage_Campaign_Installation_Layout->Add( Manage_Campaign_Installation_Table_Layout, 1, wxALL|wxSHAPED, 5 );
	
	wxFlexGridSizer* Manage_Campaign_Installation_Validation_Layout;
	Manage_Campaign_Installation_Validation_Layout = new wxFlexGridSizer( 0, 3, 0, 0 );
	Manage_Campaign_Installation_Validation_Layout->SetFlexibleDirection( wxBOTH );
	Manage_Campaign_Installation_Validation_Layout->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	Manage_Campaign_Installation_Gauge_LED_Validation = new wxGauge( Manage_Campaign_Installation_Tab, wxID_ANY, 1, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL );
	Manage_Campaign_Installation_Gauge_LED_Validation->SetValue( 1 ); 
	Manage_Campaign_Installation_Gauge_LED_Validation->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	Manage_Campaign_Installation_Gauge_LED_Validation->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	
	Manage_Campaign_Installation_Validation_Layout->Add( Manage_Campaign_Installation_Gauge_LED_Validation, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	Manage_Campaign_Installation_Validation_Text = new wxStaticText( Manage_Campaign_Installation_Tab, wxID_ANY, _("Software Validation"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Installation_Validation_Text->Wrap( -1 );
	Manage_Campaign_Installation_Validation_Layout->Add( Manage_Campaign_Installation_Validation_Text, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	wxBoxSizer* Manage_Campaign_Installation_Validation_Buttons_Layout;
	Manage_Campaign_Installation_Validation_Buttons_Layout = new wxBoxSizer( wxVERTICAL );
	
	Manage_Campaign_Installation_Validation_Force_Validation_Buttons = new wxButton( Manage_Campaign_Installation_Tab, wxID_ANY, _("Force Validation"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Installation_Validation_Buttons_Layout->Add( Manage_Campaign_Installation_Validation_Force_Validation_Buttons, 0, wxALL|wxEXPAND, 5 );
	
	Manage_Campaign_Installation_Validation_Force_Invalidation_Buttons = new wxButton( Manage_Campaign_Installation_Tab, wxID_ANY, _("Force Invalidation"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Installation_Validation_Buttons_Layout->Add( Manage_Campaign_Installation_Validation_Force_Invalidation_Buttons, 0, wxALL|wxEXPAND, 5 );
	
	
	Manage_Campaign_Installation_Validation_Layout->Add( Manage_Campaign_Installation_Validation_Buttons_Layout, 1, wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 5 );
	
	
	Manage_Campaign_Installation_Layout->Add( Manage_Campaign_Installation_Validation_Layout, 1, wxALL|wxEXPAND, 5 );
	
	wxFlexGridSizer* Manage_Campaign_Installation_Position_Layout;
	Manage_Campaign_Installation_Position_Layout = new wxFlexGridSizer( 0, 5, 0, 0 );
	Manage_Campaign_Installation_Position_Layout->SetFlexibleDirection( wxHORIZONTAL );
	Manage_Campaign_Installation_Position_Layout->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxBoxSizer* Manage_Campaign_Installation_Position_Print_Or_Input_Layout;
	Manage_Campaign_Installation_Position_Print_Or_Input_Layout = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* Manage_Campaign_Installation_Position_Print_Or_Input_Lon_Lat_Layout;
	Manage_Campaign_Installation_Position_Print_Or_Input_Lon_Lat_Layout = new wxFlexGridSizer( 0, 5, 0, 0 );
	Manage_Campaign_Installation_Position_Print_Or_Input_Lon_Lat_Layout->SetFlexibleDirection( wxBOTH );
	Manage_Campaign_Installation_Position_Print_Or_Input_Lon_Lat_Layout->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText761 = new wxStaticText( Manage_Campaign_Installation_Tab, wxID_ANY, _("Real location :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText761->Wrap( -1 );
	Manage_Campaign_Installation_Position_Print_Or_Input_Lon_Lat_Layout->Add( m_staticText761, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText791 = new wxStaticText( Manage_Campaign_Installation_Tab, wxID_ANY, _("Lon :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText791->Wrap( -1 );
	Manage_Campaign_Installation_Position_Print_Or_Input_Lon_Lat_Layout->Add( m_staticText791, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	Installation_Lon_Box = new wxTextCtrl( Manage_Campaign_Installation_Tab, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Installation_Position_Print_Or_Input_Lon_Lat_Layout->Add( Installation_Lon_Box, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText781 = new wxStaticText( Manage_Campaign_Installation_Tab, wxID_ANY, _("Lat :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText781->Wrap( -1 );
	Manage_Campaign_Installation_Position_Print_Or_Input_Lon_Lat_Layout->Add( m_staticText781, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	Installation_Lat_Box = new wxTextCtrl( Manage_Campaign_Installation_Tab, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Installation_Position_Print_Or_Input_Lon_Lat_Layout->Add( Installation_Lat_Box, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	
	Manage_Campaign_Installation_Position_Print_Or_Input_Layout->Add( Manage_Campaign_Installation_Position_Print_Or_Input_Lon_Lat_Layout, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* Manage_Campaign_Installation_Position_Print_Or_Input_Approximation_Layout;
	Manage_Campaign_Installation_Position_Print_Or_Input_Approximation_Layout = new wxFlexGridSizer( 0, 3, 0, 0 );
	Manage_Campaign_Installation_Position_Print_Or_Input_Approximation_Layout->SetFlexibleDirection( wxBOTH );
	Manage_Campaign_Installation_Position_Print_Or_Input_Approximation_Layout->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText771 = new wxStaticText( Manage_Campaign_Installation_Tab, wxID_ANY, _("Measurement approximation (circle with a radius of"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText771->Wrap( -1 );
	Manage_Campaign_Installation_Position_Print_Or_Input_Approximation_Layout->Add( m_staticText771, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	Installation_Approximation_Radius_Box = new wxTextCtrl( Manage_Campaign_Installation_Tab, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Installation_Position_Print_Or_Input_Approximation_Layout->Add( Installation_Approximation_Radius_Box, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText801 = new wxStaticText( Manage_Campaign_Installation_Tab, wxID_ANY, _("m)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText801->Wrap( -1 );
	Manage_Campaign_Installation_Position_Print_Or_Input_Approximation_Layout->Add( m_staticText801, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	
	Manage_Campaign_Installation_Position_Print_Or_Input_Layout->Add( Manage_Campaign_Installation_Position_Print_Or_Input_Approximation_Layout, 1, wxEXPAND, 5 );
	
	
	Manage_Campaign_Installation_Position_Layout->Add( Manage_Campaign_Installation_Position_Print_Or_Input_Layout, 1, wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );
	
	Manage_Campaign_Installation_Set_Position_Manually_Button = new wxButton( Manage_Campaign_Installation_Tab, wxID_ANY, _("Set the location\nmanually"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Installation_Position_Layout->Add( Manage_Campaign_Installation_Set_Position_Manually_Button, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	
	Manage_Campaign_Installation_Layout->Add( Manage_Campaign_Installation_Position_Layout, 1, wxALL|wxEXPAND, 5 );
	
	
	Manage_Campaign_Installation_Tab->SetSizer( Manage_Campaign_Installation_Layout );
	Manage_Campaign_Installation_Tab->Layout();
	Manage_Campaign_Installation_Layout->Fit( Manage_Campaign_Installation_Tab );
	Manage_Campaign_Tabs_Layout->AddPage( Manage_Campaign_Installation_Tab, _("Installation"), false );
	Manage_Campaign_Recovery_Tab = new wxPanel( Manage_Campaign_Tabs_Layout, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	Manage_Campaign_Recovery_Tab->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	
	wxBoxSizer* Manage_Campaign_Recovery_Layout;
	Manage_Campaign_Recovery_Layout = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer62;
	fgSizer62 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer62->SetFlexibleDirection( wxBOTH );
	fgSizer62->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	Recovery_Transponder_Count = new wxTextCtrl( Manage_Campaign_Recovery_Tab, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	fgSizer62->Add( Recovery_Transponder_Count, 0, wxALL, 5 );
	
	m_staticText762 = new wxStaticText( Manage_Campaign_Recovery_Tab, wxID_ANY, _("Transponders"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText762->Wrap( -1 );
	fgSizer62->Add( m_staticText762, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	
	bSizer25->Add( fgSizer62, 1, wxEXPAND, 5 );
	
	m_listCtrl9 = new wxListCtrl( Manage_Campaign_Recovery_Tab, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_EDIT_LABELS|wxLC_REPORT );
	bSizer25->Add( m_listCtrl9, 0, wxALL, 5 );
	
	
	Manage_Campaign_Recovery_Layout->Add( bSizer25, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* Manage_Campaign_Recovery_Launch_Buttons_Layout;
	Manage_Campaign_Recovery_Launch_Buttons_Layout = new wxFlexGridSizer( 0, 2, 0, 0 );
	Manage_Campaign_Recovery_Launch_Buttons_Layout->SetFlexibleDirection( wxBOTH );
	Manage_Campaign_Recovery_Launch_Buttons_Layout->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	Manage_Campaign_Launch_Auto_Burst_Button1 = new wxButton( Manage_Campaign_Recovery_Tab, wxID_ANY, _("Laucnh Auto Burst"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Recovery_Launch_Buttons_Layout->Add( Manage_Campaign_Launch_Auto_Burst_Button1, 0, wxALL, 5 );
	
	Manage_Campaign_Launch_Semi_Auto_Burst_Button1 = new wxButton( Manage_Campaign_Recovery_Tab, wxID_ANY, _("Launch Semi Auto Burst"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Recovery_Launch_Buttons_Layout->Add( Manage_Campaign_Launch_Semi_Auto_Burst_Button1, 0, wxALL, 5 );
	
	
	Manage_Campaign_Recovery_Layout->Add( Manage_Campaign_Recovery_Launch_Buttons_Layout, 1, wxALL|wxSHAPED, 5 );
	
	wxFlexGridSizer* Manage_Campaign_Recovery_Table_Layout;
	Manage_Campaign_Recovery_Table_Layout = new wxFlexGridSizer( 0, 2, 0, 0 );
	Manage_Campaign_Recovery_Table_Layout->SetFlexibleDirection( wxBOTH );
	Manage_Campaign_Recovery_Table_Layout->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	Campaign_Recovery_Table = new wxListCtrl( Manage_Campaign_Recovery_Tab, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_HRULES|wxLC_REPORT|wxLC_SINGLE_SEL|wxLC_VRULES );
	Campaign_Recovery_Table->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	Campaign_Recovery_Table->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	
	Manage_Campaign_Recovery_Table_Layout->Add( Campaign_Recovery_Table, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* Manage_Campaign_Recovery_Buttons;
	Manage_Campaign_Recovery_Buttons = new wxBoxSizer( wxVERTICAL );
	
	Manage_Campaign_Recovery_Enter_Burst_Manually_Button = new wxButton( Manage_Campaign_Recovery_Tab, wxID_ANY, _("Enter a burst manually"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Recovery_Buttons->Add( Manage_Campaign_Recovery_Enter_Burst_Manually_Button, 0, wxALL|wxEXPAND, 5 );
	
	Manage_Campaign_Recovery_Edit_Burst_Button = new wxButton( Manage_Campaign_Recovery_Tab, wxID_ANY, _("Edit Burst"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Recovery_Buttons->Add( Manage_Campaign_Recovery_Edit_Burst_Button, 0, wxALL|wxEXPAND, 5 );
	
	Manage_Campaign_Recovery_Delete_Burst_Button = new wxButton( Manage_Campaign_Recovery_Tab, wxID_ANY, _("Delete Burst"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Recovery_Buttons->Add( Manage_Campaign_Recovery_Delete_Burst_Button, 0, wxALL|wxEXPAND, 5 );
	
	
	Manage_Campaign_Recovery_Table_Layout->Add( Manage_Campaign_Recovery_Buttons, 1, wxEXPAND, 5 );
	
	
	Manage_Campaign_Recovery_Layout->Add( Manage_Campaign_Recovery_Table_Layout, 1, wxALL|wxSHAPED, 5 );
	
	wxFlexGridSizer* Manage_Campaign_Recovery_Validation_Layout;
	Manage_Campaign_Recovery_Validation_Layout = new wxFlexGridSizer( 0, 3, 0, 0 );
	Manage_Campaign_Recovery_Validation_Layout->SetFlexibleDirection( wxBOTH );
	Manage_Campaign_Recovery_Validation_Layout->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	Manage_Campaign_Recovery_Gauge_LED_Validation = new wxGauge( Manage_Campaign_Recovery_Tab, wxID_ANY, 1, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL );
	Manage_Campaign_Recovery_Gauge_LED_Validation->SetValue( 1 ); 
	Manage_Campaign_Recovery_Gauge_LED_Validation->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	Manage_Campaign_Recovery_Gauge_LED_Validation->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	
	Manage_Campaign_Recovery_Validation_Layout->Add( Manage_Campaign_Recovery_Gauge_LED_Validation, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText70 = new wxStaticText( Manage_Campaign_Recovery_Tab, wxID_ANY, _("Software Validation"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	Manage_Campaign_Recovery_Validation_Layout->Add( m_staticText70, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	wxBoxSizer* Manage_Campaign_Recovery_Validation_Buttons_Layout;
	Manage_Campaign_Recovery_Validation_Buttons_Layout = new wxBoxSizer( wxVERTICAL );
	
	Manage_Campaign_Recovery_Validation_Force_Validation_Buttons = new wxButton( Manage_Campaign_Recovery_Tab, wxID_ANY, _("Force Validation"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Recovery_Validation_Buttons_Layout->Add( Manage_Campaign_Recovery_Validation_Force_Validation_Buttons, 0, wxALL|wxEXPAND, 5 );
	
	Manage_Campaign_Recovery_Invalidation_Force_Validation_Buttons = new wxButton( Manage_Campaign_Recovery_Tab, wxID_ANY, _("Force Invalidation"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Recovery_Validation_Buttons_Layout->Add( Manage_Campaign_Recovery_Invalidation_Force_Validation_Buttons, 0, wxALL|wxEXPAND, 5 );
	
	
	Manage_Campaign_Recovery_Validation_Layout->Add( Manage_Campaign_Recovery_Validation_Buttons_Layout, 1, wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 5 );
	
	
	Manage_Campaign_Recovery_Layout->Add( Manage_Campaign_Recovery_Validation_Layout, 1, wxALL|wxEXPAND, 5 );
	
	wxFlexGridSizer* Manage_Campaign_Recovery_Position_Layout;
	Manage_Campaign_Recovery_Position_Layout = new wxFlexGridSizer( 0, 5, 0, 0 );
	Manage_Campaign_Recovery_Position_Layout->SetFlexibleDirection( wxHORIZONTAL );
	Manage_Campaign_Recovery_Position_Layout->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxBoxSizer* Manage_Campaign_Recovery_Position_Print_Or_Input_Layout;
	Manage_Campaign_Recovery_Position_Print_Or_Input_Layout = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* Manage_Campaign_Recovery_Position_Print_Or_Input_Lon_Lat_Layout;
	Manage_Campaign_Recovery_Position_Print_Or_Input_Lon_Lat_Layout = new wxFlexGridSizer( 0, 5, 0, 0 );
	Manage_Campaign_Recovery_Position_Print_Or_Input_Lon_Lat_Layout->SetFlexibleDirection( wxBOTH );
	Manage_Campaign_Recovery_Position_Print_Or_Input_Lon_Lat_Layout->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText76 = new wxStaticText( Manage_Campaign_Recovery_Tab, wxID_ANY, _("Real location :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText76->Wrap( -1 );
	Manage_Campaign_Recovery_Position_Print_Or_Input_Lon_Lat_Layout->Add( m_staticText76, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText79 = new wxStaticText( Manage_Campaign_Recovery_Tab, wxID_ANY, _("Lon :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText79->Wrap( -1 );
	Manage_Campaign_Recovery_Position_Print_Or_Input_Lon_Lat_Layout->Add( m_staticText79, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	Recover_Lon_Box = new wxTextCtrl( Manage_Campaign_Recovery_Tab, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Recovery_Position_Print_Or_Input_Lon_Lat_Layout->Add( Recover_Lon_Box, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText78 = new wxStaticText( Manage_Campaign_Recovery_Tab, wxID_ANY, _("Lat :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText78->Wrap( -1 );
	Manage_Campaign_Recovery_Position_Print_Or_Input_Lon_Lat_Layout->Add( m_staticText78, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	Recovery_Lat_Box = new wxTextCtrl( Manage_Campaign_Recovery_Tab, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Recovery_Position_Print_Or_Input_Lon_Lat_Layout->Add( Recovery_Lat_Box, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	
	Manage_Campaign_Recovery_Position_Print_Or_Input_Layout->Add( Manage_Campaign_Recovery_Position_Print_Or_Input_Lon_Lat_Layout, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* Manage_Campaign_Recovery_Position_Print_Or_Input_Approximation_Layout;
	Manage_Campaign_Recovery_Position_Print_Or_Input_Approximation_Layout = new wxFlexGridSizer( 0, 3, 0, 0 );
	Manage_Campaign_Recovery_Position_Print_Or_Input_Approximation_Layout->SetFlexibleDirection( wxBOTH );
	Manage_Campaign_Recovery_Position_Print_Or_Input_Approximation_Layout->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText77 = new wxStaticText( Manage_Campaign_Recovery_Tab, wxID_ANY, _("Measurement approximation (circle with a radius of"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText77->Wrap( -1 );
	Manage_Campaign_Recovery_Position_Print_Or_Input_Approximation_Layout->Add( m_staticText77, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	Recovery_Approximation_Radius_Box = new wxTextCtrl( Manage_Campaign_Recovery_Tab, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Recovery_Position_Print_Or_Input_Approximation_Layout->Add( Recovery_Approximation_Radius_Box, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText80 = new wxStaticText( Manage_Campaign_Recovery_Tab, wxID_ANY, _("m)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText80->Wrap( -1 );
	Manage_Campaign_Recovery_Position_Print_Or_Input_Approximation_Layout->Add( m_staticText80, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	
	Manage_Campaign_Recovery_Position_Print_Or_Input_Layout->Add( Manage_Campaign_Recovery_Position_Print_Or_Input_Approximation_Layout, 1, wxEXPAND, 5 );
	
	
	Manage_Campaign_Recovery_Position_Layout->Add( Manage_Campaign_Recovery_Position_Print_Or_Input_Layout, 1, wxALIGN_CENTER_VERTICAL|wxSHAPED, 5 );
	
	Manage_Campaign_Recovery_Set_Position_Manually_Button = new wxButton( Manage_Campaign_Recovery_Tab, wxID_ANY, _("Set the location\nmanually"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Recovery_Position_Layout->Add( Manage_Campaign_Recovery_Set_Position_Manually_Button, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	
	Manage_Campaign_Recovery_Layout->Add( Manage_Campaign_Recovery_Position_Layout, 0, wxALL|wxEXPAND, 5 );
	
	
	Manage_Campaign_Recovery_Tab->SetSizer( Manage_Campaign_Recovery_Layout );
	Manage_Campaign_Recovery_Tab->Layout();
	Manage_Campaign_Recovery_Layout->Fit( Manage_Campaign_Recovery_Tab );
	Manage_Campaign_Tabs_Layout->AddPage( Manage_Campaign_Recovery_Tab, _("Recovery"), true );
	
	bSizer21->Add( Manage_Campaign_Tabs_Layout, 1, wxALL|wxEXPAND, 5 );
	
	Close_Button = new wxButton( this, wxID_ANY, _("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( Close_Button, 0, wxALIGN_RIGHT|wxALL, 5 );
	
	
	Manage_Campaign_Layout->Add( bSizer21, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( Manage_Campaign_Layout );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	Manage_Campaign_Launch_Auto_Burst_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Launch_Auto_Burst ), NULL, this );
	Manage_Campaign_Launch_Semi_Auto_Burst_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Launch_Semi_Auto_Burst ), NULL, this );
	Manage_Campaign_Installation_Table->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( Manage_Campaign::OnDoubleClick ), NULL, this );
	Manage_Campaign_Installation_Table->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( Manage_Campaign::OnLeftDown ), NULL, this );
	Manage_Campaign_Installation_Enter_Burst_Manually_Button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Enter_Burst_Manually ), NULL, this );
	Manage_Campaign_Installation_Edit_Burst_Button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Edit_burst ), NULL, this );
	Manage_Campaign_Installation_Delete_Burst_Button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Delete_Burst ), NULL, this );
	Manage_Campaign_Installation_Validation_Force_Validation_Buttons->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Force_Validation ), NULL, this );
	Manage_Campaign_Installation_Validation_Force_Invalidation_Buttons->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Force_Invalidation ), NULL, this );
	Manage_Campaign_Installation_Set_Position_Manually_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Set_Position_Button ), NULL, this );
	Manage_Campaign_Launch_Auto_Burst_Button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Launch_Auto_Burst ), NULL, this );
	Manage_Campaign_Launch_Semi_Auto_Burst_Button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Launch_Semin_Auto_Burst ), NULL, this );
	Campaign_Recovery_Table->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( Manage_Campaign::OnDoubleClick ), NULL, this );
	Campaign_Recovery_Table->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( Manage_Campaign::OnLeftDown ), NULL, this );
	Manage_Campaign_Recovery_Enter_Burst_Manually_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Enter_Burst_Manually ), NULL, this );
	Manage_Campaign_Recovery_Edit_Burst_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Edit_Burst ), NULL, this );
	Manage_Campaign_Recovery_Delete_Burst_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Delete_Burst ), NULL, this );
	Manage_Campaign_Recovery_Validation_Force_Validation_Buttons->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Force_Validation ), NULL, this );
	Manage_Campaign_Recovery_Invalidation_Force_Validation_Buttons->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Force_Invalidation ), NULL, this );
	Manage_Campaign_Recovery_Set_Position_Manually_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Set_Position_Button ), NULL, this );
	Close_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Close ), NULL, this );
}

Manage_Campaign::~Manage_Campaign()
{
	// Disconnect Events
	Manage_Campaign_Launch_Auto_Burst_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Launch_Auto_Burst ), NULL, this );
	Manage_Campaign_Launch_Semi_Auto_Burst_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Launch_Semi_Auto_Burst ), NULL, this );
	Manage_Campaign_Installation_Table->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( Manage_Campaign::OnDoubleClick ), NULL, this );
	Manage_Campaign_Installation_Table->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( Manage_Campaign::OnLeftDown ), NULL, this );
	Manage_Campaign_Installation_Enter_Burst_Manually_Button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Enter_Burst_Manually ), NULL, this );
	Manage_Campaign_Installation_Edit_Burst_Button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Edit_burst ), NULL, this );
	Manage_Campaign_Installation_Delete_Burst_Button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Delete_Burst ), NULL, this );
	Manage_Campaign_Installation_Validation_Force_Validation_Buttons->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Force_Validation ), NULL, this );
	Manage_Campaign_Installation_Validation_Force_Invalidation_Buttons->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Force_Invalidation ), NULL, this );
	Manage_Campaign_Installation_Set_Position_Manually_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Set_Position_Button ), NULL, this );
	Manage_Campaign_Launch_Auto_Burst_Button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Launch_Auto_Burst ), NULL, this );
	Manage_Campaign_Launch_Semi_Auto_Burst_Button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Launch_Semin_Auto_Burst ), NULL, this );
	Campaign_Recovery_Table->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( Manage_Campaign::OnDoubleClick ), NULL, this );
	Campaign_Recovery_Table->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( Manage_Campaign::OnLeftDown ), NULL, this );
	Manage_Campaign_Recovery_Enter_Burst_Manually_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Enter_Burst_Manually ), NULL, this );
	Manage_Campaign_Recovery_Edit_Burst_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Edit_Burst ), NULL, this );
	Manage_Campaign_Recovery_Delete_Burst_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Delete_Burst ), NULL, this );
	Manage_Campaign_Recovery_Validation_Force_Validation_Buttons->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Force_Validation ), NULL, this );
	Manage_Campaign_Recovery_Invalidation_Force_Validation_Buttons->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Force_Invalidation ), NULL, this );
	Manage_Campaign_Recovery_Set_Position_Manually_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Set_Position_Button ), NULL, this );
	Close_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Manage_Campaign::On_Close ), NULL, this );
	
}

Automatic_Burst::Automatic_Burst( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText69 = new wxStaticText( this, wxID_ANY, _("An automatic Burst is currently running"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText69->Wrap( -1 );
	bSizer23->Add( m_staticText69, 0, wxALL, 5 );
	
	wxFlexGridSizer* fgSizer58;
	fgSizer58 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer58->SetFlexibleDirection( wxBOTH );
	fgSizer58->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	Box_Message_Sent_Count = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	fgSizer58->Add( Box_Message_Sent_Count, 0, wxALL, 5 );
	
	m_staticText70 = new wxStaticText( this, wxID_ANY, _("Messages Sent"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	fgSizer58->Add( m_staticText70, 0, wxALL, 5 );
	
	
	bSizer23->Add( fgSizer58, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer59;
	fgSizer59 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer59->SetFlexibleDirection( wxBOTH );
	fgSizer59->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	Box_Message_Received_Count = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	fgSizer59->Add( Box_Message_Received_Count, 0, wxALL, 5 );
	
	m_staticText71 = new wxStaticText( this, wxID_ANY, _("Messages Received"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	fgSizer59->Add( m_staticText71, 0, wxALL, 5 );
	
	
	bSizer23->Add( fgSizer59, 1, wxEXPAND, 5 );
	
	Stop_Automatic_Burst_Button = new wxButton( this, wxID_ANY, _("Stop Burst"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer23->Add( Stop_Automatic_Burst_Button, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	
	this->SetSizer( bSizer23 );
	this->Layout();
	bSizer23->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	Stop_Automatic_Burst_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Automatic_Burst::On_Stop_Automatic_Burst ), NULL, this );
}

Automatic_Burst::~Automatic_Burst()
{
	// Disconnect Events
	Stop_Automatic_Burst_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Automatic_Burst::On_Stop_Automatic_Burst ), NULL, this );
	
}

Semi_Automatic_Burst::Semi_Automatic_Burst( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer58;
	fgSizer58 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer58->SetFlexibleDirection( wxBOTH );
	fgSizer58->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	Semi_Auto_Message_Sent_Count = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	fgSizer58->Add( Semi_Auto_Message_Sent_Count, 0, wxALL, 5 );
	
	m_staticText70 = new wxStaticText( this, wxID_ANY, _("Messages Sent"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	fgSizer58->Add( m_staticText70, 0, wxALL, 5 );
	
	
	bSizer20->Add( fgSizer58, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer59;
	fgSizer59 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer59->SetFlexibleDirection( wxBOTH );
	fgSizer59->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	Semi_Auto_Message_Received_Count = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	fgSizer59->Add( Semi_Auto_Message_Received_Count, 0, wxALL, 5 );
	
	m_staticText71 = new wxStaticText( this, wxID_ANY, _("Messages Received"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	fgSizer59->Add( m_staticText71, 0, wxALL, 5 );
	
	
	bSizer20->Add( fgSizer59, 1, wxEXPAND, 5 );
	
	m_staticText72 = new wxStaticText( this, wxID_ANY, _("Last value of received message"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText72->Wrap( -1 );
	bSizer20->Add( m_staticText72, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	Semi_Automatic_Last_Value_Box = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	bSizer20->Add( Semi_Automatic_Last_Value_Box, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	m_staticline2 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer20->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );
	
	m_staticText73 = new wxStaticText( this, wxID_ANY, _("Send command :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText73->Wrap( -1 );
	bSizer20->Add( m_staticText73, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	Semi_Automatic_Range_Button = new wxButton( this, wxID_ANY, _("Range"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( Semi_Automatic_Range_Button, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	Semi_Automatic_Battery_Check_Button = new wxButton( this, wxID_ANY, _("Battery Check"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( Semi_Automatic_Battery_Check_Button, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	Semi_Automatic_Release_Button = new wxButton( this, wxID_ANY, _("Release Nut"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( Semi_Automatic_Release_Button, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	Semi_Automatic_Finish_Burst_Button = new wxButton( this, wxID_ANY, _("Finish Burst"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( Semi_Automatic_Finish_Burst_Button, 0, wxALIGN_CENTER_HORIZONTAL|wxALL|wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer20 );
	this->Layout();
	bSizer20->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	Semi_Automatic_Range_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Semi_Automatic_Burst::On_Range_Button ), NULL, this );
	Semi_Automatic_Battery_Check_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Semi_Automatic_Burst::On_Battery_Check_Button ), NULL, this );
	Semi_Automatic_Release_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Semi_Automatic_Burst::On_Release_Nut_Button ), NULL, this );
	Semi_Automatic_Finish_Burst_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Semi_Automatic_Burst::On_Finish_Burst_Button ), NULL, this );
}

Semi_Automatic_Burst::~Semi_Automatic_Burst()
{
	// Disconnect Events
	Semi_Automatic_Range_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Semi_Automatic_Burst::On_Range_Button ), NULL, this );
	Semi_Automatic_Battery_Check_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Semi_Automatic_Burst::On_Battery_Check_Button ), NULL, this );
	Semi_Automatic_Release_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Semi_Automatic_Burst::On_Release_Nut_Button ), NULL, this );
	Semi_Automatic_Finish_Burst_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Semi_Automatic_Burst::On_Finish_Burst_Button ), NULL, this );
	
}

Change_Validation_State::Change_Validation_State( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText67 = new wxStaticText( this, wxID_ANY, _("Are you sure you want to change\nthe state of the validation?"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText67->Wrap( -1 );
	bSizer19->Add( m_staticText67, 0, wxALL, 5 );
	
	wxFlexGridSizer* fgSizer55;
	fgSizer55 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer55->SetFlexibleDirection( wxBOTH );
	fgSizer55->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_button45 = new wxButton( this, wxID_ANY, _("Yes"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer55->Add( m_button45, 0, wxALL, 5 );
	
	m_button46 = new wxButton( this, wxID_ANY, _("No"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer55->Add( m_button46, 0, wxALL, 5 );
	
	
	bSizer19->Add( fgSizer55, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer19 );
	this->Layout();
	bSizer19->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_button45->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Change_Validation_State::On_Yes ), NULL, this );
	m_button46->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Change_Validation_State::On_No ), NULL, this );
}

Change_Validation_State::~Change_Validation_State()
{
	// Disconnect Events
	m_button45->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Change_Validation_State::On_Yes ), NULL, this );
	m_button46->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Change_Validation_State::On_No ), NULL, this );
	
}

Warning_Delete_Burst::Warning_Delete_Burst( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText59 = new wxStaticText( this, wxID_ANY, _("Delete a burst is definitive."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText59->Wrap( -1 );
	bSizer15->Add( m_staticText59, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	m_staticText60 = new wxStaticText( this, wxID_ANY, _("ARE YOU REALLY SURE ?"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText60->Wrap( -1 );
	bSizer15->Add( m_staticText60, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	wxFlexGridSizer* fgSizer51;
	fgSizer51 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer51->SetFlexibleDirection( wxBOTH );
	fgSizer51->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_button37 = new wxButton( this, wxID_ANY, _("Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer51->Add( m_button37, 0, wxALL, 5 );
	
	m_button38 = new wxButton( this, wxID_ANY, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer51->Add( m_button38, 0, wxALL, 5 );
	
	
	bSizer15->Add( fgSizer51, 1, wxALIGN_CENTER_HORIZONTAL|wxSHAPED, 5 );
	
	
	this->SetSizer( bSizer15 );
	this->Layout();
	bSizer15->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_button37->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Warning_Delete_Burst::On_Delete ), NULL, this );
	m_button38->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Warning_Delete_Burst::On_Cancel ), NULL, this );
}

Warning_Delete_Burst::~Warning_Delete_Burst()
{
	// Disconnect Events
	m_button37->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Warning_Delete_Burst::On_Delete ), NULL, this );
	m_button38->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Warning_Delete_Burst::On_Cancel ), NULL, this );
	
}

Burst_Editing::Burst_Editing( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* Burst_Editing_Layout;
	Burst_Editing_Layout = new wxBoxSizer( wxVERTICAL );
	
	m_staticText79 = new wxStaticText( this, wxID_ANY, _("If you are here, you are as a super user, so be careful of what you are doing, there will be no confirmation message."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText79->Wrap( 400 );
	Burst_Editing_Layout->Add( m_staticText79, 0, wxALL, 5 );
	
	Burst_Editing_Table = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_EDIT_LABELS|wxLC_REPORT );
	Burst_Editing_Layout->Add( Burst_Editing_Table, 0, wxALL|wxEXPAND, 5 );
	
	wxFlexGridSizer* Burst_Editing_Buttons;
	Burst_Editing_Buttons = new wxFlexGridSizer( 0, 3, 0, 0 );
	Burst_Editing_Buttons->SetFlexibleDirection( wxBOTH );
	Burst_Editing_Buttons->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	Burst_Editing_Add = new wxButton( this, wxID_ANY, _("Add Measurement"), wxDefaultPosition, wxDefaultSize, 0 );
	Burst_Editing_Buttons->Add( Burst_Editing_Add, 0, wxALL, 5 );
	
	Burst_Editing_Delete = new wxButton( this, wxID_ANY, _("Delete Measurement"), wxDefaultPosition, wxDefaultSize, 0 );
	Burst_Editing_Buttons->Add( Burst_Editing_Delete, 0, wxALL, 5 );
	
	Close_Button = new wxButton( this, wxID_ANY, _("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	Burst_Editing_Buttons->Add( Close_Button, 0, wxALL, 5 );
	
	
	Burst_Editing_Layout->Add( Burst_Editing_Buttons, 1, wxALIGN_CENTER_HORIZONTAL|wxSHAPED, 5 );
	
	
	this->SetSizer( Burst_Editing_Layout );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	Burst_Editing_Add->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Burst_Editing::On_Add_Measure ), NULL, this );
	Burst_Editing_Delete->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Burst_Editing::On_Delete_Measure ), NULL, this );
	Close_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Burst_Editing::On_Close ), NULL, this );
}

Burst_Editing::~Burst_Editing()
{
	// Disconnect Events
	Burst_Editing_Add->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Burst_Editing::On_Add_Measure ), NULL, this );
	Burst_Editing_Delete->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Burst_Editing::On_Delete_Measure ), NULL, this );
	Close_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Burst_Editing::On_Close ), NULL, this );
	
}

Warning_Delete_Measurement::Warning_Delete_Measurement( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText59 = new wxStaticText( this, wxID_ANY, _("Delete a measurement is definitive."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText59->Wrap( -1 );
	bSizer15->Add( m_staticText59, 0, wxALL, 5 );
	
	m_staticText60 = new wxStaticText( this, wxID_ANY, _("ARE YOU REALLY SURE ?"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText60->Wrap( -1 );
	bSizer15->Add( m_staticText60, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	wxFlexGridSizer* fgSizer51;
	fgSizer51 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer51->SetFlexibleDirection( wxBOTH );
	fgSizer51->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_button37 = new wxButton( this, wxID_ANY, _("Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer51->Add( m_button37, 0, wxALL, 5 );
	
	m_button38 = new wxButton( this, wxID_ANY, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer51->Add( m_button38, 0, wxALL, 5 );
	
	
	bSizer15->Add( fgSizer51, 1, wxALIGN_CENTER_HORIZONTAL|wxSHAPED, 5 );
	
	
	this->SetSizer( bSizer15 );
	this->Layout();
	bSizer15->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_button37->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Warning_Delete_Measurement::On_Delete ), NULL, this );
	m_button38->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Warning_Delete_Measurement::On_Cancel ), NULL, this );
}

Warning_Delete_Measurement::~Warning_Delete_Measurement()
{
	// Disconnect Events
	m_button37->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Warning_Delete_Measurement::On_Delete ), NULL, this );
	m_button38->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Warning_Delete_Measurement::On_Cancel ), NULL, this );
	
}

WatchdogPropertiesDialogBase::WatchdogPropertiesDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	m_fgSizerProperties = new wxFlexGridSizer( 0, 2, 0, 0 );
	m_fgSizerProperties->SetFlexibleDirection( wxBOTH );
	m_fgSizerProperties->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticTextName = new wxStaticText( this, wxID_ANY, _("Name:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextName->Wrap( -1 );
	m_fgSizerProperties->Add( m_staticTextName, 0, wxALL, 5 );
	
	m_staticTextNameVal = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextNameVal->Wrap( -1 );
	m_fgSizerProperties->Add( m_staticTextNameVal, 0, wxALL, 5 );
	
	m_staticTextVersion = new wxStaticText( this, wxID_ANY, _("Version:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextVersion->Wrap( -1 );
	m_fgSizerProperties->Add( m_staticTextVersion, 0, wxALL, 5 );
	
	wxFlexGridSizer* fgSizer34;
	fgSizer34 = new wxFlexGridSizer( 0, 6, 0, 0 );
	fgSizer34->SetFlexibleDirection( wxBOTH );
	fgSizer34->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticTextMajor = new wxStaticText( this, wxID_ANY, _("Major:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextMajor->Wrap( -1 );
	fgSizer34->Add( m_staticTextMajor, 0, wxALL, 5 );
	
	m_staticTextMajorVal = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextMajorVal->Wrap( -1 );
	fgSizer34->Add( m_staticTextMajorVal, 0, wxALL, 5 );
	
	m_staticTextMinor = new wxStaticText( this, wxID_ANY, _("Minor:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextMinor->Wrap( -1 );
	fgSizer34->Add( m_staticTextMinor, 0, wxALL, 5 );
	
	m_staticTextMinorVal = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextMinorVal->Wrap( -1 );
	fgSizer34->Add( m_staticTextMinorVal, 0, wxALL, 5 );
	
	m_staticTextPatch = new wxStaticText( this, wxID_ANY, _("Patch:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPatch->Wrap( -1 );
	fgSizer34->Add( m_staticTextPatch, 0, wxALL, 5 );
	
	m_staticTextPatchVal = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPatchVal->Wrap( -1 );
	fgSizer34->Add( m_staticTextPatchVal, 0, wxALL, 5 );
	
	
	m_fgSizerProperties->Add( fgSizer34, 1, wxEXPAND, 5 );
	
	m_staticTextDate = new wxStaticText( this, wxID_ANY, _("Date:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDate->Wrap( -1 );
	m_fgSizerProperties->Add( m_staticTextDate, 0, wxALL, 5 );
	
	m_staticTextDateVal = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDateVal->Wrap( -1 );
	m_fgSizerProperties->Add( m_staticTextDateVal, 0, wxALL, 5 );
	
	m_staticTextOther = new wxStaticText( this, wxID_ANY, _("Other:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextOther->Wrap( -1 );
	m_fgSizerProperties->Add( m_staticTextOther, 0, wxALL, 5 );
	
	m_staticTextOtherVal = new wxStaticText( this, wxID_ANY, _("Please report problems using FlySpray at:\nhttp://willkamp.com/opencpn/flyspray/index.php?project=0&do=index&switch=1\n\nor\n\nat the OpenCPN forum:\nhttp://www.cruisersforum.com/forums/f134\n\nor\n\nRaise an issue in GIT at:\nhttps://github.com/seandepagnier/watchdog_pi/issues\n"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextOtherVal->Wrap( -1 );
	m_fgSizerProperties->Add( m_staticTextOtherVal, 0, wxALL, 5 );
	
	wxBoxSizer* bSizerOK;
	bSizerOK = new wxBoxSizer( wxVERTICAL );
	
	m_buttonOK = new wxButton( this, wxID_ANY, _("&OK"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerOK->Add( m_buttonOK, 0, wxALL, 5 );
	
	
	m_fgSizerProperties->Add( bSizerOK, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( m_fgSizerProperties );
	this->Layout();
	m_fgSizerProperties->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_buttonOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( WatchdogPropertiesDialogBase::OnWatchdogPropertiesOKClick ), NULL, this );
}

WatchdogPropertiesDialogBase::~WatchdogPropertiesDialogBase()
{
	// Disconnect Events
	m_buttonOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( WatchdogPropertiesDialogBase::OnWatchdogPropertiesOKClick ), NULL, this );
	
}

ConfigurationDialogBase::ConfigurationDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxFlexGridSizer* fgSizer4;
	fgSizer4 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer4->SetFlexibleDirection( wxBOTH );
	fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxStaticBoxSizer* sbSizer41;
	sbSizer41 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("itio") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer241;
	fgSizer241 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer241->SetFlexibleDirection( wxBOTH );
	fgSizer241->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_rbAlways = new wxRadioButton( sbSizer41->GetStaticBox(), wxID_ANY, _("Enable All Alarms"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer241->Add( m_rbAlways, 0, wxALL, 5 );
	
	m_rbOnce = new wxRadioButton( sbSizer41->GetStaticBox(), wxID_ANY, _("Enabled after first time Watchdog Dialog is visible"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer241->Add( m_rbOnce, 0, wxALL, 5 );
	
	m_rbVisible = new wxRadioButton( sbSizer41->GetStaticBox(), wxID_ANY, _("Enabled only if Watchdog Dialog is visible"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer241->Add( m_rbVisible, 0, wxALL, 5 );
	
	m_rbNever = new wxRadioButton( sbSizer41->GetStaticBox(), wxID_ANY, _("Disable All Alarms"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer241->Add( m_rbNever, 0, wxALL, 5 );
	
	
	sbSizer41->Add( fgSizer241, 1, wxEXPAND, 5 );
	
	
	fgSizer4->Add( sbSizer41, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer43;
	fgSizer43 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer43->AddGrowableCol( 0 );
	fgSizer43->AddGrowableRow( 0 );
	fgSizer43->SetFlexibleDirection( wxBOTH );
	fgSizer43->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxStaticBoxSizer* sbSizer7;
	sbSizer7 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Alarms") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer29;
	fgSizer29 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer29->AddGrowableCol( 1 );
	fgSizer29->AddGrowableRow( 0 );
	fgSizer29->SetFlexibleDirection( wxBOTH );
	fgSizer29->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxFlexGridSizer* fgSizer31;
	fgSizer31 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer31->SetFlexibleDirection( wxBOTH );
	fgSizer31->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_bNew = new wxButton( sbSizer7->GetStaticBox(), wxID_ANY, _("New"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer31->Add( m_bNew, 0, wxALL, 5 );
	
	m_bEdit = new wxButton( sbSizer7->GetStaticBox(), wxID_ANY, _("Edit"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer31->Add( m_bEdit, 0, wxALL, 5 );
	
	m_bDelete = new wxButton( sbSizer7->GetStaticBox(), wxID_ANY, _("Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer31->Add( m_bDelete, 0, wxALL, 5 );
	
	m_bDeleteAll = new wxButton( sbSizer7->GetStaticBox(), wxID_ANY, _("Delete All"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer31->Add( m_bDeleteAll, 0, wxALL, 5 );
	
	
	fgSizer29->Add( fgSizer31, 1, wxEXPAND, 5 );
	
	m_lAlarms = new wxListCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT|wxLC_SINGLE_SEL );
	fgSizer29->Add( m_lAlarms, 1, wxALL|wxEXPAND, 5 );
	
	
	sbSizer7->Add( fgSizer29, 1, wxEXPAND, 5 );
	
	
	fgSizer43->Add( sbSizer7, 1, wxEXPAND, 5 );
	
	
	fgSizer4->Add( fgSizer43, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer11;
	fgSizer11 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer11->AddGrowableCol( 1 );
	fgSizer11->SetFlexibleDirection( wxBOTH );
	fgSizer11->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_button7 = new wxButton( this, wxID_ANY, _("About Author"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer11->Add( m_button7, 0, wxALL, 5 );
	
	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( this, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1->Realize();
	
	fgSizer11->Add( m_sdbSizer1, 0, wxALIGN_RIGHT|wxBOTTOM|wxEXPAND|wxTOP, 5 );
	
	
	fgSizer4->Add( fgSizer11, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( fgSizer4 );
	this->Layout();
	fgSizer4->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_rbAlways->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ConfigurationDialogBase::OnEnabled ), NULL, this );
	m_rbOnce->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ConfigurationDialogBase::OnEnabled ), NULL, this );
	m_rbVisible->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ConfigurationDialogBase::OnEnabled ), NULL, this );
	m_rbNever->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ConfigurationDialogBase::OnEnabled ), NULL, this );
	m_bNew->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnNewAlarm ), NULL, this );
	m_bEdit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnEditAlarm ), NULL, this );
	m_bDelete->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnDeleteAlarm ), NULL, this );
	m_bDeleteAll->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnDeleteAllAlarms ), NULL, this );
	m_lAlarms->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::OnDoubleClick ), NULL, this );
	m_lAlarms->Connect( wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler( ConfigurationDialogBase::AlarmSelected ), NULL, this );
	m_lAlarms->Connect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( ConfigurationDialogBase::AlarmSelected ), NULL, this );
	m_button7->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnAboutAuthor ), NULL, this );
}

ConfigurationDialogBase::~ConfigurationDialogBase()
{
	// Disconnect Events
	m_rbAlways->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ConfigurationDialogBase::OnEnabled ), NULL, this );
	m_rbOnce->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ConfigurationDialogBase::OnEnabled ), NULL, this );
	m_rbVisible->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ConfigurationDialogBase::OnEnabled ), NULL, this );
	m_rbNever->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( ConfigurationDialogBase::OnEnabled ), NULL, this );
	m_bNew->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnNewAlarm ), NULL, this );
	m_bEdit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnEditAlarm ), NULL, this );
	m_bDelete->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnDeleteAlarm ), NULL, this );
	m_bDeleteAll->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnDeleteAllAlarms ), NULL, this );
	m_lAlarms->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::OnDoubleClick ), NULL, this );
	m_lAlarms->Disconnect( wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler( ConfigurationDialogBase::AlarmSelected ), NULL, this );
	m_lAlarms->Disconnect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( ConfigurationDialogBase::AlarmSelected ), NULL, this );
	m_button7->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnAboutAuthor ), NULL, this );
	
}

NewAlarmDialogBase::NewAlarmDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxFlexGridSizer* fgSizer40;
	fgSizer40 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer40->AddGrowableCol( 0 );
	fgSizer40->AddGrowableRow( 0 );
	fgSizer40->SetFlexibleDirection( wxBOTH );
	fgSizer40->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_lAlarmType = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_NO_HEADER|wxLC_REPORT|wxLC_SINGLE_SEL );
	fgSizer40->Add( m_lAlarmType, 0, wxALL|wxEXPAND, 5 );
	
	m_sdbSizer3 = new wxStdDialogButtonSizer();
	m_sdbSizer3OK = new wxButton( this, wxID_OK );
	m_sdbSizer3->AddButton( m_sdbSizer3OK );
	m_sdbSizer3Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer3->AddButton( m_sdbSizer3Cancel );
	m_sdbSizer3->Realize();
	
	fgSizer40->Add( m_sdbSizer3, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( fgSizer40 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_lAlarmType->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( NewAlarmDialogBase::OnDoubleClick ), NULL, this );
}

NewAlarmDialogBase::~NewAlarmDialogBase()
{
	// Disconnect Events
	m_lAlarmType->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( NewAlarmDialogBase::OnDoubleClick ), NULL, this );
	
}

EditAlarmDialogBase::EditAlarmDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	m_fgSizer = new wxFlexGridSizer( 0, 1, 0, 0 );
	m_fgSizer->AddGrowableRow( 0 );
	m_fgSizer->SetFlexibleDirection( wxBOTH );
	m_fgSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Alarm Action") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer6;
	fgSizer6 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer6->AddGrowableCol( 1 );
	fgSizer6->SetFlexibleDirection( wxBOTH );
	fgSizer6->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_cbSound = new wxCheckBox( sbSizer4->GetStaticBox(), wxID_ANY, _("Sound"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_cbSound, 0, wxALL, 5 );
	
	m_fpSound = new wxFilePickerCtrl( sbSizer4->GetStaticBox(), wxID_ANY, wxT("/initrd.img"), _("Select a file"), wxT("Wav Files (*.wav)|*.WAV;*.wav|All Files (*.*)|*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE );
	fgSizer6->Add( m_fpSound, 0, wxALL|wxEXPAND, 5 );
	
	m_cbCommand = new wxCheckBox( sbSizer4->GetStaticBox(), wxID_ANY, _("Command"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_cbCommand, 0, wxALL, 5 );
	
	m_tCommand = new wxTextCtrl( sbSizer4->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !m_tCommand->HasFlag( wxTE_MULTILINE ) )
	{
	m_tCommand->SetMaxLength( 255 );
	}
	#else
	m_tCommand->SetMaxLength( 255 );
	#endif
	fgSizer6->Add( m_tCommand, 0, wxALL|wxEXPAND, 5 );
	
	m_cbMessageBox = new wxCheckBox( sbSizer4->GetStaticBox(), wxID_ANY, _("Message Box"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_cbMessageBox, 0, wxALL, 5 );
	
	
	fgSizer6->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_cbRepeat = new wxCheckBox( sbSizer4->GetStaticBox(), wxID_ANY, _("Repeat Alarm after seconds"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_cbRepeat, 0, wxALL, 5 );
	
	m_sRepeatSeconds = new wxSpinCtrl( sbSizer4->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 10000, 60 );
	fgSizer6->Add( m_sRepeatSeconds, 0, wxALL, 5 );
	
	m_cbAutoReset = new wxCheckBox( sbSizer4->GetStaticBox(), wxID_ANY, _("Automatically Reset"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_cbAutoReset, 0, wxALL, 5 );
	
	m_cbgfxEnabled = new wxCheckBox( sbSizer4->GetStaticBox(), wxID_ANY, _("Graphics Enabled"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_cbgfxEnabled, 0, wxALL, 5 );
	
	m_bTest = new wxButton( sbSizer4->GetStaticBox(), wxID_ANY, _("Test"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer6->Add( m_bTest, 0, wxALL, 5 );
	
	
	sbSizer4->Add( fgSizer6, 1, wxEXPAND, 5 );
	
	
	m_fgSizer->Add( sbSizer4, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer15;
	fgSizer15 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer15->AddGrowableCol( 0 );
	fgSizer15->SetFlexibleDirection( wxBOTH );
	fgSizer15->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_button6 = new wxButton( this, wxID_ANY, _("Information"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer15->Add( m_button6, 0, wxALL, 5 );
	
	m_sdbSizer4 = new wxStdDialogButtonSizer();
	m_sdbSizer4OK = new wxButton( this, wxID_OK );
	m_sdbSizer4->AddButton( m_sdbSizer4OK );
	m_sdbSizer4Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer4->AddButton( m_sdbSizer4Cancel );
	m_sdbSizer4->Realize();
	
	fgSizer15->Add( m_sdbSizer4, 1, wxEXPAND, 5 );
	
	
	m_fgSizer->Add( fgSizer15, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( m_fgSizer );
	this->Layout();
	m_fgSizer->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_bTest->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditAlarmDialogBase::OnTestAlarm ), NULL, this );
	m_button6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditAlarmDialogBase::OnInformation ), NULL, this );
}

EditAlarmDialogBase::~EditAlarmDialogBase()
{
	// Disconnect Events
	m_bTest->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditAlarmDialogBase::OnTestAlarm ), NULL, this );
	m_button6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditAlarmDialogBase::OnInformation ), NULL, this );
	
}

LandFallPanel::LandFallPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxFlexGridSizer* fgSizer17;
	fgSizer17 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer17->SetFlexibleDirection( wxBOTH );
	fgSizer17->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxFlexGridSizer* fgSizer16;
	fgSizer16 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer16->SetFlexibleDirection( wxBOTH );
	fgSizer16->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_rbTime = new wxRadioButton( this, wxID_ANY, _("GPS course crosses land in <"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer16->Add( m_rbTime, 0, wxALL, 5 );
	
	m_sTimeMinutes = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 1000, 20 );
	fgSizer16->Add( m_sTimeMinutes, 0, wxALL, 5 );
	
	m_staticText30 = new wxStaticText( this, wxID_ANY, _("minutes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	fgSizer16->Add( m_staticText30, 0, wxALL, 5 );
	
	
	fgSizer17->Add( fgSizer16, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer10;
	fgSizer10 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer10->SetFlexibleDirection( wxBOTH );
	fgSizer10->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_rbDistance = new wxRadioButton( this, wxID_ANY, _("GPS fix is <"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer10->Add( m_rbDistance, 0, wxALL, 5 );
	
	m_tDistance = new wxTextCtrl( this, wxID_ANY, _("3"), wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !m_tDistance->HasFlag( wxTE_MULTILINE ) )
	{
	m_tDistance->SetMaxLength( 10 );
	}
	#else
	m_tDistance->SetMaxLength( 10 );
	#endif
	fgSizer10->Add( m_tDistance, 0, wxALL, 5 );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, _("nm from coastline\n(any direction)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	fgSizer10->Add( m_staticText7, 0, wxALL, 5 );
	
	
	fgSizer17->Add( fgSizer10, 1, wxEXPAND, 5 );
	
	m_staticText39122 = new wxStaticText( this, wxID_ANY, _("Graphical overlay for time displays line from boat to location of land crossing"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText39122->Wrap( 400 );
	fgSizer17->Add( m_staticText39122, 0, wxALL, 5 );
	
	m_staticText45 = new wxStaticText( this, wxID_ANY, _("Landfall detection uses gshhs (global heirarchical high-resolution shoreline data.)\nConsider installing the highest resolution database for best accuracy."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45->Wrap( 350 );
	fgSizer17->Add( m_staticText45, 0, wxALL, 5 );
	
	
	this->SetSizer( fgSizer17 );
	this->Layout();
	fgSizer17->Fit( this );
}

LandFallPanel::~LandFallPanel()
{
}

BoundaryPanel::BoundaryPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxFlexGridSizer* fgSizer17;
	fgSizer17 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer17->SetFlexibleDirection( wxBOTH );
	fgSizer17->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxFlexGridSizer* fgSizer16;
	fgSizer16 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer16->SetFlexibleDirection( wxBOTH );
	fgSizer16->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_rbTime = new wxRadioButton( this, GPSCOURSE, _("GPS course crosses boundary in <"), wxDefaultPosition, wxDefaultSize, wxRB_GROUP );
	fgSizer16->Add( m_rbTime, 0, wxALL, 5 );
	
	m_sTimeMinutes = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 1000, 20 );
	fgSizer16->Add( m_sTimeMinutes, 0, wxALL, 5 );
	
	m_staticText30 = new wxStaticText( this, wxID_ANY, _("minutes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	fgSizer16->Add( m_staticText30, 0, wxALL, 5 );
	
	
	fgSizer17->Add( fgSizer16, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer10;
	fgSizer10 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer10->SetFlexibleDirection( wxBOTH );
	fgSizer10->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_rbDistance = new wxRadioButton( this, GPSFIX, _("GPS fix is <"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer10->Add( m_rbDistance, 0, wxALL, 5 );
	
	m_tDistance = new wxTextCtrl( this, wxID_ANY, _("3"), wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !m_tDistance->HasFlag( wxTE_MULTILINE ) )
	{
	m_tDistance->SetMaxLength( 10 );
	}
	#else
	m_tDistance->SetMaxLength( 10 );
	#endif
	fgSizer10->Add( m_tDistance, 0, wxALL, 5 );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, _("nm from boundary\n(any direction)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	fgSizer10->Add( m_staticText7, 0, wxALL, 5 );
	
	
	fgSizer17->Add( fgSizer10, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer30;
	fgSizer30 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer30->SetFlexibleDirection( wxBOTH );
	fgSizer30->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_rbGuard = new wxRadioButton( this, AISGUARDZONE, _("AIS Guard Zone"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer30->Add( m_rbGuard, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText321 = new wxStaticText( this, wxID_ANY, _("Guard Zone GUID"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText321->Wrap( -1 );
	fgSizer30->Add( m_staticText321, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_tGuardZoneGUID = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !m_tGuardZoneGUID->HasFlag( wxTE_MULTILINE ) )
	{
	m_tGuardZoneGUID->SetMaxLength( 40 );
	}
	#else
	m_tGuardZoneGUID->SetMaxLength( 40 );
	#endif
	fgSizer30->Add( m_tGuardZoneGUID, 0, wxALL, 5 );
	
	
	fgSizer17->Add( fgSizer30, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer28;
	fgSizer28 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer28->SetFlexibleDirection( wxBOTH );
	fgSizer28->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_rbAnchor = new wxRadioButton( this, ANCHORALARM, _("Inclusion Alarm"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer28->Add( m_rbAnchor, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText32 = new wxStaticText( this, wxID_ANY, _("Boundary GUID"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32->Wrap( -1 );
	fgSizer28->Add( m_staticText32, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_tBoundaryGUID = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !m_tBoundaryGUID->HasFlag( wxTE_MULTILINE ) )
	{
	m_tBoundaryGUID->SetMaxLength( 40 );
	}
	#else
	m_tBoundaryGUID->SetMaxLength( 40 );
	#endif
	fgSizer28->Add( m_tBoundaryGUID, 0, wxALL, 5 );
	
	m_button12 = new wxButton( this, wxID_ANY, _("Get Boundary GUID"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer28->Add( m_button12, 0, wxALL, 5 );
	
	
	fgSizer17->Add( fgSizer28, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer29;
	fgSizer29 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer29->SetFlexibleDirection( wxBOTH );
	fgSizer29->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxString m_radioBoxBoundaryTypeChoices[] = { _("Any"), _("Exclusion"), _("Inclusion"), _("Neither") };
	int m_radioBoxBoundaryTypeNChoices = sizeof( m_radioBoxBoundaryTypeChoices ) / sizeof( wxString );
	m_radioBoxBoundaryType = new wxRadioBox( this, wxID_ANY, _("Boundary Type"), wxDefaultPosition, wxDefaultSize, m_radioBoxBoundaryTypeNChoices, m_radioBoxBoundaryTypeChoices, 1, wxRA_SPECIFY_ROWS );
	m_radioBoxBoundaryType->SetSelection( 0 );
	fgSizer29->Add( m_radioBoxBoundaryType, 0, wxALL, 5 );
	
	wxString m_radioBoxBoundaryStateChoices[] = { _("Any"), _("Active"), _("Inactive") };
	int m_radioBoxBoundaryStateNChoices = sizeof( m_radioBoxBoundaryStateChoices ) / sizeof( wxString );
	m_radioBoxBoundaryState = new wxRadioBox( this, wxID_ANY, _("Boundary State"), wxDefaultPosition, wxDefaultSize, m_radioBoxBoundaryStateNChoices, m_radioBoxBoundaryStateChoices, 1, wxRA_SPECIFY_ROWS );
	m_radioBoxBoundaryState->SetSelection( 1 );
	fgSizer29->Add( m_radioBoxBoundaryState, 0, wxALL, 5 );
	
	
	fgSizer17->Add( fgSizer29, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer32;
	fgSizer32 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer32->AddGrowableCol( 1 );
	fgSizer32->SetFlexibleDirection( wxBOTH );
	fgSizer32->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticTextCheckFrequency = new wxStaticText( this, wxID_ANY, _("Check Frequency  (Secs)\n(Note: not Guard Zone)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextCheckFrequency->Wrap( -1 );
	fgSizer32->Add( m_staticTextCheckFrequency, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_sliderCheckFrequency = new wxSlider( this, wxID_ANY, 10, 1, 120, wxDefaultPosition, wxDefaultSize, wxSL_AUTOTICKS|wxSL_BOTTOM|wxSL_HORIZONTAL|wxSL_LABELS );
	fgSizer32->Add( m_sliderCheckFrequency, 1, wxALL|wxEXPAND, 5 );
	
	
	fgSizer17->Add( fgSizer32, 1, wxEXPAND, 5 );
	
	m_staticText39122 = new wxStaticText( this, wxID_ANY, _("Graphical overlay for GPS fix displays line from boat to location of the point in the found boundary"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText39122->Wrap( 400 );
	fgSizer17->Add( m_staticText39122, 0, wxALL, 5 );
	
	m_staticline1 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer17->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( fgSizer17 );
	this->Layout();
	fgSizer17->Fit( this );
	
	// Connect Events
	m_rbTime->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( BoundaryPanel::OnRadioButton ), NULL, this );
	m_rbDistance->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( BoundaryPanel::OnRadioButton ), NULL, this );
	m_rbGuard->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( BoundaryPanel::OnRadioButton ), NULL, this );
	m_tGuardZoneGUID->Connect( wxEVT_KILL_FOCUS, wxFocusEventHandler( BoundaryPanel::OnGuardZoneGUIDKillFocus ), NULL, this );
	m_rbAnchor->Connect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( BoundaryPanel::OnRadioButton ), NULL, this );
	m_tBoundaryGUID->Connect( wxEVT_KILL_FOCUS, wxFocusEventHandler( BoundaryPanel::OnBoundaryGUIDKillFocus ), NULL, this );
	m_button12->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BoundaryPanel::OnGetBoundaryGUID ), NULL, this );
}

BoundaryPanel::~BoundaryPanel()
{
	// Disconnect Events
	m_rbTime->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( BoundaryPanel::OnRadioButton ), NULL, this );
	m_rbDistance->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( BoundaryPanel::OnRadioButton ), NULL, this );
	m_rbGuard->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( BoundaryPanel::OnRadioButton ), NULL, this );
	m_tGuardZoneGUID->Disconnect( wxEVT_KILL_FOCUS, wxFocusEventHandler( BoundaryPanel::OnGuardZoneGUIDKillFocus ), NULL, this );
	m_rbAnchor->Disconnect( wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler( BoundaryPanel::OnRadioButton ), NULL, this );
	m_tBoundaryGUID->Disconnect( wxEVT_KILL_FOCUS, wxFocusEventHandler( BoundaryPanel::OnBoundaryGUIDKillFocus ), NULL, this );
	m_button12->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BoundaryPanel::OnGetBoundaryGUID ), NULL, this );
	
}

NMEADataPanel::NMEADataPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxFlexGridSizer* fgSizer91;
	fgSizer91 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer91->AddGrowableCol( 0 );
	fgSizer91->SetFlexibleDirection( wxBOTH );
	fgSizer91->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText34 = new wxStaticText( this, wxID_ANY, _("Require following NMEA sentences:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText34->Wrap( -1 );
	fgSizer91->Add( m_staticText34, 0, wxALL, 5 );
	
	m_tSentences = new wxTextCtrl( this, wxID_ANY, _("$GPGGA"), wxDefaultPosition, wxSize( -1,60 ), wxTE_MULTILINE );
	#ifdef __WXGTK__
	if ( !m_tSentences->HasFlag( wxTE_MULTILINE ) )
	{
	m_tSentences->SetMaxLength( 255 );
	}
	#else
	m_tSentences->SetMaxLength( 255 );
	#endif
	fgSizer91->Add( m_tSentences, 0, wxALL|wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer19;
	fgSizer19 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer19->SetFlexibleDirection( wxBOTH );
	fgSizer19->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText35 = new wxStaticText( this, wxID_ANY, _("at least every"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	fgSizer19->Add( m_staticText35, 0, wxALL, 5 );
	
	m_sSeconds = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 1, 10000, 10 );
	fgSizer19->Add( m_sSeconds, 0, wxALL, 5 );
	
	m_staticText13 = new wxStaticText( this, wxID_ANY, _("seconds"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	fgSizer19->Add( m_staticText13, 0, wxALL, 5 );
	
	
	fgSizer91->Add( fgSizer19, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( fgSizer91 );
	this->Layout();
	fgSizer91->Fit( this );
}

NMEADataPanel::~NMEADataPanel()
{
}

DeadmanPanel::DeadmanPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxFlexGridSizer* fgSizer25;
	fgSizer25 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer25->SetFlexibleDirection( wxBOTH );
	fgSizer25->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxFlexGridSizer* fgSizer5;
	fgSizer5 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer5->SetFlexibleDirection( wxBOTH );
	fgSizer5->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText33 = new wxStaticText( this, wxID_ANY, _("No User Activity for"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33->Wrap( -1 );
	fgSizer5->Add( m_staticText33, 0, wxALL, 5 );
	
	m_sMinutes = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 1000, 20 );
	fgSizer5->Add( m_sMinutes, 0, wxALL, 5 );
	
	m_staticText6 = new wxStaticText( this, wxID_ANY, _("minute(s)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	fgSizer5->Add( m_staticText6, 0, wxALL, 5 );
	
	
	fgSizer25->Add( fgSizer5, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( fgSizer25 );
	this->Layout();
	fgSizer25->Fit( this );
}

DeadmanPanel::~DeadmanPanel()
{
}

AnchorPanel::AnchorPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxFlexGridSizer* fgSizer24;
	fgSizer24 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer24->SetFlexibleDirection( wxBOTH );
	fgSizer24->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxFlexGridSizer* fgSizer9;
	fgSizer9 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer9->SetFlexibleDirection( wxBOTH );
	fgSizer9->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText71 = new wxStaticText( this, wxID_ANY, _("Latitude"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	fgSizer9->Add( m_staticText71, 0, wxALL, 5 );
	
	m_tLatitude = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !m_tLatitude->HasFlag( wxTE_MULTILINE ) )
	{
	m_tLatitude->SetMaxLength( 20 );
	}
	#else
	m_tLatitude->SetMaxLength( 20 );
	#endif
	fgSizer9->Add( m_tLatitude, 0, wxALL, 5 );
	
	
	fgSizer9->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText8 = new wxStaticText( this, wxID_ANY, _("Longitude"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	fgSizer9->Add( m_staticText8, 0, wxALL, 5 );
	
	m_tLongitude = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !m_tLongitude->HasFlag( wxTE_MULTILINE ) )
	{
	m_tLongitude->SetMaxLength( 20 );
	}
	#else
	m_tLongitude->SetMaxLength( 20 );
	#endif
	fgSizer9->Add( m_tLongitude, 0, wxALL, 5 );
	
	m_bSyncToBoat = new wxButton( this, wxID_ANY, _("Sync to Boat"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer9->Add( m_bSyncToBoat, 0, wxALL, 5 );
	
	m_staticText9 = new wxStaticText( this, wxID_ANY, _("Radius"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	fgSizer9->Add( m_staticText9, 0, wxALL, 5 );
	
	m_sRadius = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 100000, 40 );
	fgSizer9->Add( m_sRadius, 0, wxALL, 5 );
	
	m_staticText39 = new wxStaticText( this, wxID_ANY, _("meters"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText39->Wrap( -1 );
	fgSizer9->Add( m_staticText39, 0, wxALL, 5 );
	
	
	fgSizer24->Add( fgSizer9, 1, wxEXPAND, 5 );
	
	m_cbAutoSync = new wxCheckBox( this, wxID_ANY, _("Automatically syncronize to the boat whenever enabled"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer24->Add( m_cbAutoSync, 0, wxALL, 5 );
	
	m_staticText39121 = new wxStaticText( this, wxID_ANY, _("Graphical overlay displays bounding anchor area"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText39121->Wrap( -1 );
	fgSizer24->Add( m_staticText39121, 0, wxALL, 5 );
	
	
	this->SetSizer( fgSizer24 );
	this->Layout();
	fgSizer24->Fit( this );
	
	// Connect Events
	m_bSyncToBoat->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AnchorPanel::OnSyncToBoat ), NULL, this );
}

AnchorPanel::~AnchorPanel()
{
	// Disconnect Events
	m_bSyncToBoat->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AnchorPanel::OnSyncToBoat ), NULL, this );
	
}

CoursePanel::CoursePanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxFlexGridSizer* fgSizer22;
	fgSizer22 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer22->SetFlexibleDirection( wxBOTH );
	fgSizer22->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxFlexGridSizer* fgSizer101;
	fgSizer101 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer101->SetFlexibleDirection( wxBOTH );
	fgSizer101->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText50 = new wxStaticText( this, wxID_ANY, _("Type"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText50->Wrap( -1 );
	fgSizer101->Add( m_staticText50, 0, wxALL, 5 );
	
	wxString m_cModeChoices[] = { _("Port"), _("Starboard"), _("Port or Starboard") };
	int m_cModeNChoices = sizeof( m_cModeChoices ) / sizeof( wxString );
	m_cMode = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_cModeNChoices, m_cModeChoices, 0 );
	m_cMode->SetSelection( 0 );
	fgSizer101->Add( m_cMode, 0, wxALL, 5 );
	
	
	fgSizer101->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText32 = new wxStaticText( this, wxID_ANY, _("Off Course By >"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32->Wrap( -1 );
	fgSizer101->Add( m_staticText32, 0, wxALL, 5 );
	
	m_sTolerance = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 180, 20 );
	fgSizer101->Add( m_sTolerance, 0, wxALL, 5 );
	
	m_staticText18 = new wxStaticText( this, wxID_ANY, _("Degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	fgSizer101->Add( m_staticText18, 0, wxALL, 5 );
	
	m_staticText21 = new wxStaticText( this, wxID_ANY, _("With Course Of"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	fgSizer101->Add( m_staticText21, 0, wxALL, 5 );
	
	m_sCourse = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 359, 0 );
	fgSizer101->Add( m_sCourse, 0, wxALL, 5 );
	
	m_bCurrentCourse = new wxButton( this, wxID_ANY, _("Current Course"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer101->Add( m_bCurrentCourse, 0, wxALL, 5 );
	
	
	fgSizer22->Add( fgSizer101, 1, wxEXPAND, 5 );
	
	m_staticText3912 = new wxStaticText( this, wxID_ANY, _("Graphical overlay displays lines bounding valid courses"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3912->Wrap( -1 );
	fgSizer22->Add( m_staticText3912, 0, wxALL, 5 );
	
	
	this->SetSizer( fgSizer22 );
	this->Layout();
	fgSizer22->Fit( this );
	
	// Connect Events
	m_bCurrentCourse->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CoursePanel::OnCurrentCourse ), NULL, this );
}

CoursePanel::~CoursePanel()
{
	// Disconnect Events
	m_bCurrentCourse->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CoursePanel::OnCurrentCourse ), NULL, this );
	
}

SpeedPanel::SpeedPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style ) : wxPanel( parent, id, pos, size, style )
{
	wxStaticBoxSizer* sbSizer7;
	sbSizer7 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Speed Alarm") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer14;
	fgSizer14 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer14->SetFlexibleDirection( wxBOTH );
	fgSizer14->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText51 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, _("Type"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText51->Wrap( -1 );
	fgSizer14->Add( m_staticText51, 0, wxALL, 5 );
	
	wxString m_cModeChoices[] = { _("Under Speed"), _("Over Speed") };
	int m_cModeNChoices = sizeof( m_cModeChoices ) / sizeof( wxString );
	m_cMode = new wxChoice( sbSizer7->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_cModeNChoices, m_cModeChoices, 0 );
	m_cMode->SetSelection( 0 );
	fgSizer14->Add( m_cMode, 0, wxALL, 5 );
	
	
	fgSizer14->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText44 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, _("Speed over ground"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText44->Wrap( -1 );
	fgSizer14->Add( m_staticText44, 0, wxALL, 5 );
	
	m_tSpeed = new wxTextCtrl( sbSizer7->GetStaticBox(), wxID_ANY, _("1"), wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !m_tSpeed->HasFlag( wxTE_MULTILINE ) )
	{
	m_tSpeed->SetMaxLength( 10 );
	}
	#else
	m_tSpeed->SetMaxLength( 10 );
	#endif
	fgSizer14->Add( m_tSpeed, 0, wxALL, 5 );
	
	m_staticText24 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, _("knots"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	fgSizer14->Add( m_staticText24, 0, wxALL, 5 );
	
	
	sbSizer7->Add( fgSizer14, 1, wxEXPAND, 5 );
	
	wxFlexGridSizer* fgSizer31;
	fgSizer31 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer31->AddGrowableCol( 1 );
	fgSizer31->SetFlexibleDirection( wxBOTH );
	fgSizer31->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText28 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, _("Seconds to Average\nSOG over"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	fgSizer31->Add( m_staticText28, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_sliderSOGAverageNumber = new wxSlider( sbSizer7->GetStaticBox(), wxID_ANY, 10, 1, 120, wxDefaultPosition, wxDefaultSize, wxSL_AUTOTICKS|wxSL_HORIZONTAL|wxSL_LABELS );
	fgSizer31->Add( m_sliderSOGAverageNumber, 0, wxALL|wxEXPAND, 5 );
	
	
	sbSizer7->Add( fgSizer31, 1, wxEXPAND, 5 );
	
	m_staticText391 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, _("Graphical overlay displays circle with radius of this speed"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText391->Wrap( -1 );
	sbSizer7->Add( m_staticText391, 0, wxALL, 5 );
	
	
	this->SetSizer( sbSizer7 );
	this->Layout();
	sbSizer7->Fit( this );
}

SpeedPanel::~SpeedPanel()
{
}
