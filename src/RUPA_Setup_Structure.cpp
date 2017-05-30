#include "RUPA_Setup_Structure.h"

RUPA_Setup_Structure::RUPA_Setup_Structure( wxWindow* parent, RUPA_Manage_Structure * MS )
:
Setup_Structure( parent ), l_Manage_Structure(MS), Id_Calling_Structure(MS->get_Id())
{

    RUPA_SQL *c ;
    try
    {
	c = new RUPA_SQL();

	c->prep_stmt = c->con->prepareStatement("SELECT * FROM Structure WHERE id = ?");
	/*c->prep_stmt->setString(1, (Structure_Location_Name_Inbox->GetValue()).ToStdString());
	c->prep_stmt->setString(2, (Structure_Devices_Inbox->GetValue()).ToStdString());
	c->prep_stmt->setInt(3, wxAtoi(Structure_Depth_Inbox->GetValue()));*/
	c->prep_stmt->setInt(1, Id_Calling_Structure);
	c->res = c->prep_stmt->executeQuery();
	c->res->next();
	Structure_Location_Name_Inbox->SetValue(ToString(c->res->getString("location_name")));
	Structure_Devices_Inbox->SetValue(ToString(c->res->getString("devices")));
	Structure_Depth_Inbox->SetValue(ToString(c->res->getString("structure_depth")));
	//Semi_Auto_Message_Sent_Count->SetValue(wxString::Format(wxT("%i"),messages_sent_count));
	//delete con;
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
}

void RUPA_Setup_Structure::On_Set_Structure_Settings_Ok( wxCommandEvent& event )
{
    RUPA_SQL *c ;
    try
    {
	c = new RUPA_SQL();

	c->prep_stmt = c->con->prepareStatement("UPDATE Structure SET location_name = ?, devices = ?, structure_depth = ? WHERE id = ?");
	c->prep_stmt->setString(1, (Structure_Location_Name_Inbox->GetValue()).ToStdString());
	c->prep_stmt->setString(2, (Structure_Devices_Inbox->GetValue()).ToStdString());
	c->prep_stmt->setInt(3, wxAtoi(Structure_Depth_Inbox->GetValue()));
	c->prep_stmt->setInt(4, Id_Calling_Structure);
	c->prep_stmt->execute();
	//delete con;
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
    this->Destroy();
    delete c;
    l_Manage_Structure->Refresh_Transponder_Tables();
}

void RUPA_Setup_Structure::On_Set_Structure_Settings_Cancel( wxCommandEvent& event )
{
    this->Destroy();
}
