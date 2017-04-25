#ifndef __RS232_H__
#define __RS232_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
//#include "../ftd2xx.h"
#include <ftd2xx.h>
#define BUF_SIZE 0x10

#define MAX_DEVICES		1


static void dumpBuffer(unsigned char *buffer, int elements);
int brouette();



#endif
