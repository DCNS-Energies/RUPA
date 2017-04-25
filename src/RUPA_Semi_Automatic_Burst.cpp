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
    messages_sent_count = 0;
    messages_received_count = 0;
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


void RUPA_Semi_Automatic_Burst::On_Range_Button( wxCommandEvent& event )
{
// TODO: Implement On_Range_Button
	//unsigned char 	cBufWrite[BUF_SIZE];
	unsigned char 	msg[]="$t111:1%";
	printf("%s\n",msg);
	/*unsigned*/ char * pcBufRead = NULL;
	std::string *Buf_Read;
	char * 	pcBufLD[MAX_DEVICES + 1];
	char 	cBufLD[MAX_DEVICES][64];
	DWORD	dwRxSize = 0;
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

	//for(j = 0; j < BUF_SIZE; j++) {
	//	cBufWrite[j] = j;
	//}
	
	for(i = 0; ( (i <MAX_DEVICES) && (i < iNumDevs) ) ; i++) {
		/* Setup */
		if((ftStatus = FT_OpenEx(cBufLD[i], FT_OPEN_BY_SERIAL_NUMBER, &ftHandle[i])) != FT_OK){
			/* 
				This can fail if the ftdi_sio driver is loaded
		 		use lsmod to check this and rmmod ftdi_sio to remove
				also rmmod usbserial
		 	*/
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

		//printf("Calling FT_Write with this write-buffer:\n");
		
		sleep(3);
		/* Write */
		//ftStatus = FT_Write(ftHandle[i], cBufWrite, BUF_SIZE, &dwBytesWritten);
		ftStatus = FT_Write(ftHandle[i], msg, 8, &dwBytesWritten);
		if (ftStatus != FT_OK) {
			printf("Error FT_Write(%d)\n", (int)ftStatus);
			break;
		}
		//if (dwBytesWritten != (DWORD)BUF_SIZE) {
		if (dwBytesWritten != (DWORD)8) {//Tristan
			printf("FT_Write only wrote %d (of %d) bytes\n", 
			       (int)dwBytesWritten, 
			       //BUF_SIZE);
			       8);//Tristan
			break;
		}
		messages_sent_count ++;
		Semi_Auto_Message_Sent_Count->SetValue(wxString::Format(wxT("%i"),messages_sent_count));
		sleep(1);
		
		/* Read */
		dwRxSize = 0;			
		//while ((dwRxSize < BUF_SIZE) && (ftStatus == FT_OK)) {
		while ((dwRxSize < 15) && (ftStatus == FT_OK)) {
			ftStatus = FT_GetQueueStatus(ftHandle[i], &dwRxSize);
		}
		if(ftStatus == FT_OK) {
			pcBufRead = (/*unsigned*/ char*)realloc(pcBufRead, dwRxSize);
			memset(pcBufRead, 0xFF, dwRxSize);
			ftStatus = FT_Read(ftHandle[i], pcBufRead, dwRxSize, &dwBytesRead);
			//ftStatus = FT_Read(ftHandle[i], Buf_Read, dwRxSize, &dwBytesRead);
			if (ftStatus != FT_OK) 
			{
				printf("Error FT_Read(%d)\n", (int)ftStatus);
				break;
			}
			if (dwBytesRead != dwRxSize) 
			{
				printf("FT_Read only read %d (of %d) bytes\n",
				       (int)dwBytesRead, (int)dwRxSize);
				break;
			}
			//printf("FT_Read read %d bytes.  Read-buffer is now:\n",
			printf("FT_Read read %d bytes.\n",
			       (int)dwBytesRead);
			//printf("and it means %s\n", pcBufRead);
			printf("%s\n", pcBufRead);
			std::string Buf_Read(pcBufRead);
			//std::vector<std::string> Vect_Buf_Read;
			std::istringstream iss(Buf_Read);
			std::string word;
			int i = 0;
			std::string ProperMessage = "";
			std::vector<std::string> Vec_Buf_Read;
			while(iss>>word && i<5)
			{
			    ProperMessage+=word+" ";
			    Vec_Buf_Read.push_back(word);
			    //std::cout<<word<<std::endl;
			    i++;
			}
			//copy(istream_iterator<std::string>(iss), istream_iterator<std::string>(), back_inserter(Vec_Buf_Read);
			messages_received_count ++;
			Semi_Auto_Message_Received_Count->SetValue(wxString::Format(wxT("%i"),messages_received_count));
			Semi_Automatic_Last_Value_Box->SetValue(wxString(ProperMessage.c_str(), wxConvUTF8));
			try
		    {
			Prepare_SQL();
			prep_stmt = con->prepareStatement("INSERT INTO Measurement(message, rs232_command, latitude, longitude, burst, value) VALUES(?,?,?,?,?,?)");
			prep_stmt->setString(1, "Range");
			prep_stmt->setString(2, "$t123:4\%");
			prep_stmt->setDouble(3, g_watchdog_pi->LastFix().Lat);
			prep_stmt->setDouble(4, g_watchdog_pi->LastFix().Lon);
			prep_stmt->setInt(5, Burst_Id);
			std::cout<<Vec_Buf_Read.at(2)<<std::endl;
			if(Vec_Buf_Read.at(2).compare("Range") ==0)
			{
			    std::string m = Vec_Buf_Read.at(4);
			    prep_stmt->setString(6, m.substr(0,m.length()-1));
			}
			else
			{
			    prep_stmt->setString(6, "Fail");
			}
			prep_stmt->execute();
			prep_stmt = con->prepareStatement("UPDATE Burst SET pings_emmited_count=pings_emmited_count+1 WHERE id=?");
			prep_stmt->setInt(1, Burst_Id);
			prep_stmt->execute();
			delete con;
		    }catch(sql::SQLException &e)
		    {
			RUPA_Utils_Print_SQL_Error(e);
		    }
			//dumpBuffer(pcBufRead, (int)dwBytesRead);
		//	printf("%s test passed.\n", cBufLD[i]);
		}
		else {
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
