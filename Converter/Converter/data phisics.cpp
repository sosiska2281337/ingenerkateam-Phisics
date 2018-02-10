#include <iostream>
#include <cstdlib>
#include <clocale>
#include <windows.h>
#include <locale>


using namespace std;

int CM, M, DM, MM, KM;
int GRAMM, KG, TONN, CENTN;
int PA, kPA, MPA, MMrtS;
int YER, HOUR, MIN, SEC;

double num;
double num1;


double pressureVvod;
double massVvod;
double timeVvod;
double distanceVvod;
double strenchVvod;
double energyVvod;
double temprVvod;

//-------------------------------------
    const double CEF_MPA = 1000;
    const double CEF_PA = 1;
    const double CEF_KPA = 0.001;
    const double CEF_MM_RT_ST = 0.00750062;
//---------------------------
    const double CEF_MM = 10;
    const double CEF_CM = 1;
    const double CEF_M = 0.01;
    const double CEF_KM = 0.0001;
//--------------------------------
    const double CEF_SEC = 86400;
    const double CEF_MIN = 1440;
    const double CEF_HOUR = 24;
	const double CEF_DAY = 1;
//--------------------------------
    const double CEF_GM = 1000;
    const double CEF_KG = 1;
    const double CEF_CENT = 0.01;
    const double CEF_TON = 0.001;
//--------------------------------

//--------------------------------
    const double CEF_KDZH = 0.001;
    const double CEF_DZH = 1;
    const double CEF_KK = 0.000239006;
    const double CEF_FF = 0.7375620;

//-------------------------------------
    const double CEF_MN =0.001;
    const double CEF_N =1;

//-------------------------------------
    const double CEF_CEL = 1;
    const double CEF_FAR = 33.8;
    const double CEF_KELVN =274.15;


