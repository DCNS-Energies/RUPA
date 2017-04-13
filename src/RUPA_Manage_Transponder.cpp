
#include "RUPA_Manage_Transponder.h"

RUPA_Manage_Transponder::RUPA_Manage_Transponder( wxWindow* parent, RUPA_Manage_Structure * MS)
:Manage_Transponder( parent ), l_Manage_Structure(MS), Id_Calling_Structure(MS->get_Id())
{

}

void RUPA_Manage_Transponder::On_Accept_Transponder_Edit( wxCommandEvent& event )
{
    try
    {
	driver = get_driver_instance();
	con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
	con->setSchema(DB);
	stmt = con->createStatement();

	prep_stmt = con->prepareStatement("INSERT INTO Transponder(address, frequency, serial_number, structure) VALUES(?, ?, ?, ?)");
	prep_stmt->setInt(1, wxAtoi(Transponder_Address_Inbox->GetValue()));
	prep_stmt->setInt(2, wxAtoi(Transponder_Frequency_Inbox->GetValue()));
	prep_stmt->setString(3, (Transponder_Serial_Number_Inbox->GetValue()).ToStdString());
	prep_stmt->setInt(4, Id_Calling_Structure);
	prep_stmt->execute();
	delete con;
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
    this->Destroy();
    l_Manage_Structure->Refresh_Transponder_Tables();
}

void RUPA_Manage_Transponder::On_Cancel_Transponder_Edit( wxCommandEvent& event )
{
    this->Destroy();
}
