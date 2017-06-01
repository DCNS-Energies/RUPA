#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include "Trilateration.h"

bool IdealCase=0;
bool LessIdealCase=0;
bool WeirdCase=0;
bool RealCase=1;
int main (void)
{
    int n;
    if(RealCase)
    {
	n = 23;
    } else if(IdealCase)
    {
	n = 3;
    } else if(LessIdealCase)
    {
	n = 4;
    }else if(WeirdCase)
    {
	n = 3;
    }


    double lat[n];
    double lon[n];
    double r[n];
    if(RealCase)
    {

	lat[0]= 48.381676142333326;
	lon[0]= -4.487373485;
	r[0]= 24.1;

	lat[1]= 48.38167622633333;
	lon[1]= -4.487372957333333;
	r[1]= 25.4;

	lat[2]= 48.38167577383333;
	lon[2]= -4.487373189166666;
	r[2]= 23.5;
	
	lat[3]= 48.3816756685;
	lon[3]= -4.487376244333333;
	r[3]= 23.9;
	
	lat[4]= 48.3816756685;
	lon[4]= -4.487376244333333;
	r[4]= 27.2;
	
	lat[5]= 48.381308865;
	lon[5]= -4.486985653833333;
	r[5]= 51.5;
	
	lat[6]= 48.3813089955;
	lon[6]= -4.4869852285;
	r[6]= 51.7;
	
	lat[7]= 48.38130899066667;
	lon[7]= -4.4869852435;
	r[7]= 53.9;
	
	lat[8]= 48.38130899066667;
	lon[8]= -4.4869852435;
	r[8]= 51.5;
	
	lat[9]= 48.381309012;
	lon[9]= -4.486985291833333;
	r[9]= 51.7;
	
	lat[10]= 48.3811372165;
	lon[10]=-4.488110189833334;
	r[10]= 56.6;
	
	lat[11]= 48.381139512833336;
	lon[11]= -4.488110458333334;
	r[11]= 59.9;
	
	lat[12]= 48.38113957716667;
	lon[12]= -4.488110556500001;
	r[12]= 56.7;
	
	lat[13]= 48.38114090366666;
	lon[13]= -4.4881107775;	

	r[13]= 63.0;
	
	lat[14]= 48.38114084633333;
	lon[14]= -4.488111098999999;
	r[14]= 57.1;
	
	lat[15]= 48.38075473983334;
	lon[15]= -4.4875721265;
	r[15]= 88.3;
	
	lat[16]= 48.380751163166664;
	lon[16]= -4.487571456166666;
	r[16]= 89.0;
	
	lat[17]= 48.38075182233333;
	lon[17]= -4.487571187333333;
	r[17]= 88.2;
	
	lat[18]= 48.380750602333336;
	lon[18]= -4.487571304;
	r[18]= 88.7;
	
	lat[19]= 48.38074937416666;
	lon[19]= -4.487571212833333;
	r[19]= 92.1;
	
	lat[20]= 48.38074812566666;
	lon[20]= -4.4875705325;
	r[20]= 94.1;
	
	lat[21]= 48.38074793483334;
	lon[21]= -4.487570524333334;
	r[21]= 90.1;
	
	lat[22]= 48.380747619333334;
	lon[22]= -4.487570503;
	r[22]= 87.4;


    }
    else if (IdealCase)
    {
	std::cout<<"testing in an ideal case, the result should be 0,0"<<std::endl;
	lat[0]= -30;
	lon[0]= 0;
	r[0]= 30;

	lat[1]= 0;
	lon[1]= 30;
	r[1]= 30;

	lat[2]= 12;
	lon[2]= 0;
	r[2]= 12;
    }


    else if (LessIdealCase)
    {
	std::cout<<"testing in a less ideal case Circles are non joining in a single point, the result should be 0,0"<<std::endl;
	lat[0]= -30;
	lon[0]= 0;
	r[0]= 32;

	lat[1]= 0;
	lon[1]= 30;
	r[1]= 32;

	lat[2]= 30;
	lon[2]= 0;
	r[2]= 32;

	lat[3]= 0;
	lon[3]= -30;
	r[3]= 32;
    }
    else if (WeirdCase)
    {
	std::cout<<"testing in aweir case, the result SOULDN'T be 0,0 (draw entire circles if you don't understand)"<<std::endl;
	lat[0]= -30;
	lon[0]= 0;
	r[0]= 32;

	lat[1]= 0;
	lon[1]= 30;
	r[1]= 30;

	lat[2]= 30;
	lon[2]= 0;
	r[2]= 32;
    }



    PosAndDistance2dVec PAD;
    Pos2d loca;
    int re = 6371000;//radius of earth
    double dtr = 3.14159358979/180;//degree to radians
    std::cout.precision(10);//to show 1 decimals for the double values
    for (int i =0; i<n; i++)
    {
	double x,y;
	if(RealCase)
	{
	x = re*cos(lat[i]*dtr)*cos(lon[i]*dtr);
	y = re*cos(lat[i]*dtr)*sin(lon[i]*dtr);
	std::cout<<"lat = \t"<<lat[i]<<"\t lon = \t"<<lon[i]<<std::endl; 
	std::cout<<"x = \t"<<x<<"\t\t y = \t"<<y<<std::endl;

	double longitude =atan2(y,x)/dtr;
	double latitude = acos((y/(re*sin(longitude*dtr))))/dtr;
	std::cout<<"lat = \t"<<latitude<<"\t\t lon = \t"<<longitude<<"\n"<<std::endl; 
	}
	else
	{
	    x = lat[i];
	    y = lon[i];
	}i
	Pos2d pxy(x, y);//pox x y
	PosAndDistance2d pxydr(pxy, r[i]);//pos x y and distance radius
	PAD.push_back(pxydr);

    }
    Trilateration tri;
    tri.CalculateLocation2d(PAD, loca);
    std::cout<<loca<<std::endl;
    if(RealCase)
    {
    double x = loca(0,0);
    double y = loca(1,0);
    double longitude =2*atan2(y,x+sqrt(x*x+y*y));
    double latitude = (acos(y/(re*sin(longitude))));
    std::cout<<"longitude :"<<longitude/dtr<<"\t latitude :"<<latitude/dtr<<std::endl;
    }
}
