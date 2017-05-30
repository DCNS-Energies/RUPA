#include "RUPA_New_Campaign.h"

RUPA_New_Campaign::RUPA_New_Campaign( wxWindow* parent , RUPA_Campaign * campaign)
:New_Campaign( parent ), l_Campaign(campaign)
{
    this->parent = parent;
}

//RUPA_New_Campaign::~RUPA_New_Campaign( ){

//}
void RUPA_New_Campaign::Insert_Data()
{
    try
    {
	driver = get_driver_instance();
	con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
	con->setSchema(DB);
	stmt = con->createStatement();

	prep_stmt = con->prepareStatement("INSERT INTO Campaign(geographical_area, campaign_name) VALUES( ?, ?)");
	//prep_stmt->setString(1, (New_Campaign_Beacon_Name_Inbox->GetValue()).ToStdString());
	prep_stmt->setString(1, (New_Campaign_Geographical_Area_Inbox->GetValue()).ToStdString());
	prep_stmt->setString(2, (New_Campaign_Name_Inbox->GetValue()).ToStdString());
	prep_stmt->execute();
	prep_stmt = con->prepareStatement("SELECT LAST_INSERT_ID() AS last_id");
	res = prep_stmt->executeQuery();
	res->next();
	New_Campaign_Id = res->getInt("last_id");
	std::cout<<"NCI = "<<New_Campaign_Id<<std::endl;
	delete con;
    }catch(sql::SQLException &e)
    {
	RUPA_Utils_Print_SQL_Error(e);
    }
    l_Campaign->Refresh_Campaigns_Tables();
    this->Destroy();
}


void RUPA_New_Campaign::On_Install_Later( wxCommandEvent& event )
{
    this->Insert_Data();
}

void RUPA_New_Campaign::On_Install_Now( wxCommandEvent& event )
{
    this->Insert_Data();
    l_Campaign->New_Campaign_Id = New_Campaign_Id;
	std::cout<<"NCI = "<<New_Campaign_Id<<std::endl;
    l_Campaign->On_Manage_Campaign(event);
}

void RUPA_New_Campaign::On_Cancel( wxCommandEvent& event )
{
    //delete con;
    this->Destroy();
}
