///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Mar 30 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "RUPAUI.h"

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
	
	Campaign_Current_Table = new wxListCtrl( Campaign_Current_Tab, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_HRULES|wxLC_REPORT|wxLC_SINGLE_SEL|wxLC_VRULES );
	Campaign_Current_Table->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INFOBK ) );
	
	Campaign_Current_Table_Layout->Add( Campaign_Current_Table, 0, wxALL|wxEXPAND, 5 );
	
	
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
	Campaign_Current_Table->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( Campaign::OnDoubleClick ), NULL, this );
	Campaign_Current_Table->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( Campaign::OnLeftDown ), NULL, this );
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
	Campaign_Current_Table->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( Campaign::OnDoubleClick ), NULL, this );
	Campaign_Current_Table->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( Campaign::OnLeftDown ), NULL, this );
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
	
	Warning_Delete_Campaign_Delete_Button = new wxButton( this, wxID_ANY, _("Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer51->Add( Warning_Delete_Campaign_Delete_Button, 0, wxALL, 5 );
	
	Warning_Delete_Campaign_Cancel_Button = new wxButton( this, wxID_ANY, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer51->Add( Warning_Delete_Campaign_Cancel_Button, 0, wxALL, 5 );
	
	
	bSizer15->Add( fgSizer51, 1, wxALIGN_CENTER_HORIZONTAL|wxSHAPED, 5 );
	
	
	this->SetSizer( bSizer15 );
	this->Layout();
	bSizer15->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	Warning_Delete_Campaign_Delete_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Warning_Delete_Campaign::On_Delete ), NULL, this );
	Warning_Delete_Campaign_Cancel_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Warning_Delete_Campaign::On_Cancel ), NULL, this );
}

Warning_Delete_Campaign::~Warning_Delete_Campaign()
{
	// Disconnect Events
	Warning_Delete_Campaign_Delete_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Warning_Delete_Campaign::On_Delete ), NULL, this );
	Warning_Delete_Campaign_Cancel_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Warning_Delete_Campaign::On_Cancel ), NULL, this );
	
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
	
	New_Campaign_Name_Inbox_Label = new wxStaticText( this, wxID_ANY, _("Campaign's Name :"), wxDefaultPosition, wxDefaultSize, 0 );
	New_Campaign_Name_Inbox_Label->Wrap( -1 );
	New_Campaign_Input_Layout->Add( New_Campaign_Name_Inbox_Label, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT|wxALL, 5 );
	
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
	
	Installation_Transponder_Caracteristics = new wxListCtrl( Manage_Campaign_Installation_Tab, wxID_ANY, wxDefaultPosition, wxSize( -1,100 ), wxLC_EDIT_LABELS|wxLC_REPORT );
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
	
	
	Manage_Campaign_Installation_Table_Layout->Add( Manage_Campaign_Installation_Buttons, 1, wxALL|wxEXPAND, 5 );
	
	
	Manage_Campaign_Installation_Layout->Add( Manage_Campaign_Installation_Table_Layout, 1, wxALL|wxEXPAND, 5 );
	
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
	Manage_Campaign_Tabs_Layout->AddPage( Manage_Campaign_Installation_Tab, _("Installation"), true );
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
	
	Recovery_Transponder_Caracteristics = new wxListCtrl( Manage_Campaign_Recovery_Tab, wxID_ANY, wxDefaultPosition, wxSize( -1,100 ), wxLC_EDIT_LABELS|wxLC_REPORT );
	bSizer25->Add( Recovery_Transponder_Caracteristics, 0, wxALL, 5 );
	
	
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
	
	Manage_Campaign_Recovery_Table = new wxListCtrl( Manage_Campaign_Recovery_Tab, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_HRULES|wxLC_REPORT|wxLC_SINGLE_SEL|wxLC_VRULES );
	Manage_Campaign_Recovery_Table->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOWTEXT ) );
	Manage_Campaign_Recovery_Table->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	
	Manage_Campaign_Recovery_Table_Layout->Add( Manage_Campaign_Recovery_Table, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* Manage_Campaign_Recovery_Buttons;
	Manage_Campaign_Recovery_Buttons = new wxBoxSizer( wxVERTICAL );
	
	Manage_Campaign_Recovery_Enter_Burst_Manually_Button = new wxButton( Manage_Campaign_Recovery_Tab, wxID_ANY, _("Enter a burst manually"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Recovery_Buttons->Add( Manage_Campaign_Recovery_Enter_Burst_Manually_Button, 0, wxALL|wxEXPAND, 5 );
	
	Manage_Campaign_Recovery_Edit_Burst_Button = new wxButton( Manage_Campaign_Recovery_Tab, wxID_ANY, _("Edit Burst"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Recovery_Buttons->Add( Manage_Campaign_Recovery_Edit_Burst_Button, 0, wxALL|wxEXPAND, 5 );
	
	Manage_Campaign_Recovery_Delete_Burst_Button = new wxButton( Manage_Campaign_Recovery_Tab, wxID_ANY, _("Delete Burst"), wxDefaultPosition, wxDefaultSize, 0 );
	Manage_Campaign_Recovery_Buttons->Add( Manage_Campaign_Recovery_Delete_Burst_Button, 0, wxALL|wxEXPAND, 5 );
	
	
	Manage_Campaign_Recovery_Table_Layout->Add( Manage_Campaign_Recovery_Buttons, 1, wxALL|wxEXPAND, 5 );
	
	
	Manage_Campaign_Recovery_Layout->Add( Manage_Campaign_Recovery_Table_Layout, 1, wxALL|wxEXPAND, 5 );
	
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
	Manage_Campaign_Tabs_Layout->AddPage( Manage_Campaign_Recovery_Tab, _("Recovery"), false );
	
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
	Manage_Campaign_Recovery_Table->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( Manage_Campaign::OnDoubleClick ), NULL, this );
	Manage_Campaign_Recovery_Table->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( Manage_Campaign::OnLeftDown ), NULL, this );
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
	Manage_Campaign_Recovery_Table->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( Manage_Campaign::OnDoubleClick ), NULL, this );
	Manage_Campaign_Recovery_Table->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( Manage_Campaign::OnLeftDown ), NULL, this );
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
	
	Warning_Delete_Burst_Delete_Button = new wxButton( this, wxID_ANY, _("Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer51->Add( Warning_Delete_Burst_Delete_Button, 0, wxALL, 5 );
	
	Warning_Delete_Burst_Cancel_Button = new wxButton( this, wxID_ANY, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer51->Add( Warning_Delete_Burst_Cancel_Button, 0, wxALL, 5 );
	
	
	bSizer15->Add( fgSizer51, 1, wxALIGN_CENTER_HORIZONTAL|wxSHAPED, 5 );
	
	
	this->SetSizer( bSizer15 );
	this->Layout();
	bSizer15->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	Warning_Delete_Burst_Delete_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Warning_Delete_Burst::On_Delete ), NULL, this );
	Warning_Delete_Burst_Cancel_Button->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Warning_Delete_Burst::On_Cancel ), NULL, this );
}

Warning_Delete_Burst::~Warning_Delete_Burst()
{
	// Disconnect Events
	Warning_Delete_Burst_Delete_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Warning_Delete_Burst::On_Delete ), NULL, this );
	Warning_Delete_Burst_Cancel_Button->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( Warning_Delete_Burst::On_Cancel ), NULL, this );
	
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
