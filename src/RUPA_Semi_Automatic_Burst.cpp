#include "RUPA_Semi_Automatic_Burst.h"
RUPA_Semi_Automatic_Burst::RUPA_Semi_Automatic_Burst( wxWindow* parent, RUPA_Manage_Structure * MS , bool Recovery)
:Semi_Automatic_Burst( parent ), l_Manage_Structure(MS), Id_Calling_Structure(MS->get_Id())

{
    this->parent = parent;
    std::string dor = Recovery < 1 ? "D" : "R";
    try
    {
	Prepare_SQL();
	prep_stmt = con->prepareStatement("SELECT * FROM Operation WHERE structure=? AND deployment_or_recovery=?");
	prep_stmt->setInt(1, Id_Calling_Structure);
	prep_stmt->setString(2, dor);
	res=prep_stmt->executeQuery();
	res->next();
	prep_stmt = con->prepareStatement("INSERT INTO Burst(operation, burst_mode) VALUES(?,?)");
	prep_stmt->setInt(1, res->getInt("id"));
	prep_stmt->setString(2, "S");
	prep_stmt->execute();
	prep_stmt = con->prepareStatement("SELECT LAST_INSERT_ID() AS last_id");
	res = prep_stmt->executeQuery();
	res->next();
	Burst_Id = res->getInt("last_id");
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }

}

void RUPA_Semi_Automatic_Burst::On_Range_Button( wxCommandEvent& event )
{
// TODO: Implement On_Range_Button
    try
    {
	Prepare_SQL();
	prep_stmt = con->prepareStatement("INSERT INTO Measurement(message, rs232_command, latitude, longitude, burst) VALUES(?,?,?,?,?)");
	prep_stmt->setString(1, "Range");
	prep_stmt->setString(2, "$t123:4\%");
	prep_stmt->setDouble(3, g_watchdog_pi->LastFix().Lat);
	prep_stmt->setDouble(4, g_watchdog_pi->LastFix().Lon);
	prep_stmt->setInt(5, Burst_Id);
	prep_stmt->execute();
	prep_stmt = con->prepareStatement("UPDATE Burst SET pings_emmited_count=pings_emmited_count+1 WHERE id=?");
	prep_stmt->setInt(1, Burst_Id);
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

void RUPA_Semi_Automatic_Burst::On_Release_Nut_Button( wxCommandEvent& event )
{
// TODO: Implement On_Release_Nut_Button
}

void RUPA_Semi_Automatic_Burst::On_Finish_Burst_Button( wxCommandEvent& event )
{
// TODO: Implement On_Finish_Burst_Button
    l_Manage_Structure->Refresh_Burst_Tables();
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
