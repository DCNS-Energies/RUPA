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

RUPA_SQL::RUPA_SQL()
{
	    this->driver = get_driver_instance();
	    this->con = driver->connect(HOST, USER, PASS);//HOST, USER and PASS are defined in RUPA_Utility.h
	    this->con->setSchema(DB);
	    this->stmt = con->createStatement();
}

RUPA_SQL::~RUPA_SQL()
{
	    //delete this->driver;
	    delete this->con;
	    delete this->stmt;
	    delete this->res;
	    delete this->res2;
}


long int RUPA_Utils_Get_Selected_ID( std::string DB_Table,  wxListCtrl* Table, std::string Additional_Condition)
{
    long Item_Index = -1;
    RUPA_SQL *c ;
    long int Returned_Value = -1;
    while((Item_Index = Table->GetNextItem(Item_Index,
		    wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED)) != wxNOT_FOUND)
    {
	if(Item_Index>=0)
	{
	    try
	    {
		c = new RUPA_SQL();
		c->prep_stmt = c->con->prepareStatement("SELECT * FROM " + DB_Table + " " + Additional_Condition + " LIMIT ?,1");
		//c->prep_stmt->setInt(1, finished);
		c->prep_stmt->setInt(1, Item_Index);
		c->res = c->prep_stmt->executeQuery();
		c->res->next();
		Returned_Value = c->res->getInt("id");
	    }catch(sql::SQLException &e)
	    {
		RUPA_Utils_Print_SQL_Error(e);
	    }
	}
    }
    return Returned_Value;
}

void RUPA_Utils_Delete_Item(std::string DB_Table, long int Item_ID)
{
    RUPA_SQL *c ;
    if (Item_ID>=0)
    {
	try
	{
	    c = new RUPA_SQL();
	    c->prep_stmt = c->con->prepareStatement("DELETE FROM " + DB_Table + " WHERE id = ?");//Here is a security weakness to SQL injections, I have to create a whitelist
	    c->prep_stmt->setInt(1, Item_ID);
	    c->prep_stmt->execute();
	}catch(sql::SQLException &e)
	{
	    RUPA_Utils_Print_SQL_Error(e);
	}
    }
}
