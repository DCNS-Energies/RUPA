#include "RUPA_Semi_Automatic_Burst.h"
RUPA_Semi_Automatic_Burst::RUPA_Semi_Automatic_Burst( wxWindow* parent )
:
Semi_Automatic_Burst( parent )
{
    this->parent = parent;

}

void RUPA_Semi_Automatic_Burst::On_Range_Button( wxCommandEvent& event )
{
// TODO: Implement On_Range_Button
    try
    {
	Prepare_SQL();
	prep_stmt = con->prepareStatement("INSERT INTO Measurement(message, rs232_command) VALUES(?,?)");
	prep_stmt->setString(1, "Range");
	prep_stmt->setString(2, "$t123:4\%");
	prep_stmt->execute();
	delete con;
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }

}

void RUPA_Semi_Automatic_Burst::On_Battery_Check_Button( wxCommandEvent& event )
{
// TODO: Implement On_Battery_Check_Button
}

void RUPA_Semi_Automatic_Burst::On_Release_Nut_Button( wxCommandEvent& event )
{
// TODO: Implement On_Release_Nut_Button
}

void RUPA_Semi_Automatic_Burst::On_Finish_Burst_Button( wxCommandEvent& event )
{
// TODO: Implement On_Finish_Burst_Button
    parent->Show(!parent->IsShown());
    this->Destroy();
}

void RUPA_Semi_Automatic_Burst::Prepare_SQL()
{

    try
    {
	driver = get_driver_instance();
	con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
	con->setSchema(DB);
	stmt = con->createStatement();
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
}
