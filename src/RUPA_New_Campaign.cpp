#include "RUPA_New_Campaign.h"

RUPA_New_Campaign::RUPA_New_Campaign( wxWindow* parent , RUPA_Campaign * campaign)
:New_Campaign( parent ), l_Campaign(campaign)
{
    driver = get_driver_instance();
    con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
    //con = driver->connect("tcp://127.0.0.1:3306","jack", "SPARROW");//HOST, USER and PASS are defined in RUPA_Utility.h
    this->parent = parent;
}

//RUPA_New_Campaign::~RUPA_New_Campaign( ){

//}
void RUPA_New_Campaign::Insert_Data()
{
    try
    {
	con->setSchema(DB);
	std::cout<<"USE DB done"<<std::endl;
	stmt = con->createStatement();
	std::cout<<"createStatement done"<<std::endl;
	//std::string loc=std::string((New_Compaign_Beacon_Name_Inbox->GetValue()).mb_str());
	std::string loc=(New_Compaign_Beacon_Name_Inbox->GetValue()).ToStdString();
	//stmt->execute("INSERT INTO Campaign(location, geographical_area, campaign_name) VALUES(\'"<<loc<<"\','pouet', 'cacahuete')");
	prep_stmt = con->prepareStatement("INSERT INTO Campaign(location, geographical_area, campaign_name) VALUES(?, ?, ?)");
	prep_stmt->setString(1, (New_Compaign_Beacon_Name_Inbox->GetValue()).ToStdString());
	prep_stmt->setString(2, (New_Campaign_Name_Inbox->GetValue()).ToStdString());
	prep_stmt->setString(3, (New_Compaign_Geographical_Area_Inbox->GetValue()).ToStdString());
	prep_stmt->execute();
	std::cout<<"INSERT done"<<std::endl;
	delete con;
    }catch(sql::SQLException &e)
    {
	std::cout << "# ERR: SQLException in " << __FILE__;
	std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
	std::cout << "# ERR: " << e.what();
	std::cout << " (MySQL error code : " << e.getErrorCode();
	std::cout << ", SQLState: " <<e.getSQLState() << ")" << std::endl;
    }
    this->Destroy();
}


void RUPA_New_Campaign::On_Install_Later( wxCommandEvent& event )
{
    this->Insert_Data();
}

void RUPA_New_Campaign::On_Install_Now( wxCommandEvent& event )
{
    l_Campaign->On_Manage_Campaign(event);
    this->Insert_Data();
}

void RUPA_New_Campaign::On_Cancel( wxCommandEvent& event )
{
    delete con;
    this->Destroy();
}
