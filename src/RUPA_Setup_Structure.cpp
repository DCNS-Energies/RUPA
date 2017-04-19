#include "RUPA_Setup_Structure.h"

RUPA_Setup_Structure::RUPA_Setup_Structure( wxWindow* parent, RUPA_Manage_Structure * MS )
:
Setup_Structure( parent ), l_Manage_Structure(MS), Id_Calling_Structure(MS->get_Id())
{

}

void RUPA_Setup_Structure::On_Set_Structure_Settings_Ok( wxCommandEvent& event )
{
    try
    {
	driver = get_driver_instance();
	con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
	con->setSchema(DB);
	stmt = con->createStatement();

	prep_stmt = con->prepareStatement("UPDATE Structure SET location_name = ?, devices = ?, structure_depth = ? WHERE id = ?");
	prep_stmt->setString(1, (Structure_Location_Name_Inbox->GetValue()).ToStdString());
	prep_stmt->setString(2, (Structure_Devices_Inbox->GetValue()).ToStdString());
	prep_stmt->setInt(3, wxAtoi(Structure_Depth_Inbox->GetValue()));
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

void RUPA_Setup_Structure::On_Set_Structure_Settings_Cancel( wxCommandEvent& event )
{
    this->Destroy();
}
