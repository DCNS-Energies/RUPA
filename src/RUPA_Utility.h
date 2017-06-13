

//Here are some usefull little snippets, just
//to avoid typind or reading boring code


#ifndef __RUPA_UTILS_H__
#define __RUPA_UTILS_H__

#include "RUPAUI.h"
#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/toolbar.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/listctrl.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/notebook.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/gauge.h>
#include <wx/statline.h>

#include "wxWTranslateCatalog.h"

#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <cmath>

#include <unistd.h>
#include <ftd2xx.h>
#include <vector>

class watchdog_pi;
//#include "RUPA_Campaign.h"

#define BATTERY 1
#define RANGE 0

#define HOST "localhost"
#define USER ""
#define PASS ""
#define DB "rupa"
void RUPA_Utils_Pos(wxWindow *w);
void RUPA_Utils_Print_SQL_Error(sql::SQLException &e);

long int RUPA_Utils_Get_Selected_ID(std::string DB_Table, wxListCtrl* Table, std::string Additional_Condition="");
void RUPA_Utils_Delete_Item(std::string DB_Table, long int Item_ID);
template <typename T>
std::string ToString(T val)
{
    std::stringstream stream;
    stream << val;
    return stream.str();
}

class RUPA_SQL
{
    public:
	RUPA_SQL();
	~RUPA_SQL();
	sql::Driver * driver;
	sql::Connection * con;
	sql::Statement * stmt;
	sql::ResultSet * res = NULL;
	sql::ResultSet * res2 = NULL;
	sql::PreparedStatement *prep_stmt;
};

std::string RUPA_RS232(unsigned char msg[], int command);

#endif

