#include "RUPA_Utility.h"

void RUPA_Utils_Pos(wxWindow *w)
{
    w->Show(!w->IsShown());
    wxPoint p = w->GetPosition();
    w->Move(0, 0);        // workaround for gtk autocentre dialog behavior
    w->Move(p);

}


void RUPA_Utils_Print_SQL_Error(sql::SQLException &e)
    {
	std::cout << "# ERR: SQLException in " << __FILE__;
	std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
	std::cout << "# ERR: " << e.what();
	std::cout << " (MySQL error code : " << e.getErrorCode();
	std::cout << ", SQLState: " <<e.getSQLState() << ")" << std::endl;
    }

/*void RUPA_Utils_Connet_SQL()
{	
    driver = get_driver_instance();
    con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
    con->setSchema(DB);
    stmt = con->createStatement();*/

