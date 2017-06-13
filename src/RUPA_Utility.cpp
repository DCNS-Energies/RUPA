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

#define BUF_SIZE 0x10

#define MAX_DEVICES 1

static void dumpBuffer(unsigned char *buffer, int elements)
{
	int j;

	printf(" [");
	for (j = 0; j < elements; j++)
	{
		if (j > 0)
			printf(", ");
		printf("0x%02X", (unsigned int)buffer[j]);
	}
	printf("]\n");
}

std::string RUPA_RS232(unsigned char msg[], int command)
{
	//unsigned char 	msg[]="$t111:1%";
	printf("%s\n",msg);
	unsigned char * pcBufRead = NULL;
	std::string Buf_Read;
	char * 	pcBufLD[MAX_DEVICES + 1];
	char 	cBufLD[MAX_DEVICES][64];
	DWORD	dwRxSize = 0;
	DWORD	EventDWord;
	DWORD	RxBytes;
	DWORD	TxBytes;
	DWORD	BytesReceived;
	char	RxBuffer[256];
	DWORD 	dwBytesWritten, dwBytesRead;
	FT_STATUS	ftStatus;
	FT_HANDLE	ftHandle[MAX_DEVICES];
	int	iNumDevs = 0;
	int	i;//, j;
	int	iDevicesOpen;	
	
	for(i = 0; i < MAX_DEVICES; i++) {
		pcBufLD[i] = cBufLD[i];
	}
	pcBufLD[MAX_DEVICES] = NULL;
	
	ftStatus = FT_ListDevices(pcBufLD, &iNumDevs, FT_LIST_ALL | FT_OPEN_BY_SERIAL_NUMBER);
	
	if(ftStatus != FT_OK) {
		printf("Error: FT_ListDevices(%d)\n", (int)ftStatus);
	}

	for(i = 0; ( (i <MAX_DEVICES) && (i < iNumDevs) ); i++) {
		printf("Device %d Serial Number - %s\n", i, cBufLD[i]);
	}

	for(i = 0; ( (i <MAX_DEVICES) && (i < iNumDevs) ) ; i++) 
	{

	    /* Setup */
	    if((ftStatus = FT_OpenEx(cBufLD[i], FT_OPEN_BY_SERIAL_NUMBER, &ftHandle[i])) != FT_OK){
		    printf("Error FT_OpenEx(%d), device %d\n", (int)ftStatus, i);
		    printf("Use lsmod to check if ftdi_sio (and usbserial) are present.\n");
		    printf("If so, unload them using rmmod, as they conflict with ftd2xx.\n");
		    printf("Or check if 99-RUPA.rules is in /etc/udev/rules.d. \n");
	    }
    
	    printf("Opened device %s\n", cBufLD[i]);

	    iDevicesOpen++;
	    if((ftStatus = FT_SetBaudRate(ftHandle[i], 4800)) != FT_OK) {//Tristan
		    printf("Error FT_SetBaudRate(%d), cBufLD[i] = %s\n", (int)ftStatus, cBufLD[i]);
		    break;
	    }

	    if (command == BATTERY)
	    {
		sleep(1);
	    }else if (command == RANGE)
	    {
		sleep(1);
	    }
	    /* Write */
	    ftStatus = FT_Write(ftHandle[i], msg, 8, &dwBytesWritten);
	    if (ftStatus != FT_OK) {
		    printf("Error FT_Write(%d)\n", (int)ftStatus);
		    break;
	    }
	    if (dwBytesWritten != (DWORD)8) {
		    printf("FT_Write only wrote %d (of %d) bytes\n", 
			   (int)dwBytesWritten, 
			   8);
		    break;
	    }
	    if (command == BATTERY)
	    {
		sleep(2);
	    }else if (command == RANGE)
	    {
		sleep(1);
	    }
	    
	    /* Read */
	    dwRxSize = 0;			
	    DWORD Previous_Size;
	    FT_GetStatus(ftHandle[i], &RxBytes, &TxBytes, &EventDWord);
	    if (command == BATTERY)
	    {
		sleep(1);
	    }else if (command == RANGE)
	    {
		sleep(1);
	    }
	    std::cout<<"RxBytes = "<<RxBytes<<"\n";
	    if(RxBytes > 0)
	    {
		ftStatus = FT_Read(ftHandle[i], RxBuffer, RxBytes, &BytesReceived);
		std::cout<<"FT_Status = "<<ftStatus<<"\n";

		if(ftStatus == FT_OK) 
		{
		    pcBufRead = (unsigned char*)realloc(pcBufRead, dwRxSize);
		    memset(pcBufRead, 0xFF, dwRxSize);
		    if (ftStatus != FT_OK) 
		    {
			    printf("Error FT_Read(%d)\n", (int)ftStatus);
			    break;
		    }
		    if (RxBytes != BytesReceived) 
		    {
			    printf("FT_Read only read %d (of %d) bytes\n",
				   (int)dwBytesRead, (int)dwRxSize);
			    break;
		    }
		    if (command == BATTERY)
		    {
			sleep(1);
		    }else if (command == RANGE)
		    {
			sleep(1);
		    }
		    printf("FT_Read read %d bytes.\n",(int)BytesReceived);
		     //*Buf_Read = ((char *)RxBuffer);
		    std::string s(RxBuffer);
		    Buf_Read=s;
		}
	    }
	    else 
	    {
		printf("Error FT_GetQueueStatus(%d)\n", (int)ftStatus);	
	    }
	}
	iDevicesOpen = i;
	/* Cleanup */
	for(i = 0; i < iDevicesOpen; i++) {
		FT_Close(ftHandle[i]);
		printf("Closed device %s\n", cBufLD[i]);
	}

	if(pcBufRead)
		free(pcBufRead);

	return Buf_Read;
}


