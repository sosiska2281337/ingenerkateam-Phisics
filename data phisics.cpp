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


const double SECinMIN = 1/60;
const double SECinHOUR = 1/3600;
const double SECinYER = 3.805178478e-7;

const double MINinSEC = 60;
const double MINinHOUR = 1/60;
const double MINinYER = 1.902;

const double HOURinSEC = 3600;
const double HOURinMIN = 60;
const double HOURinYER = 0.000114;

const double YERinSEC = 1/3.805178478e-7;
const double YERSnMIN = 1/1.9025913240292998e-6;
const double YERSinHOUR  = 1/0.00011415547944175798969;
//-----------------------------------
const double PAinkPA = 0.001;
const double PAinMPA = 1000;
const double PAinMMrtS = 0.00750062;

const double kPAinPA = 1000;
const double kPAinMPA = 1000000;
const double kPAinMMrtS = 7.50062;

const double MPAinkPA = 1e-6;
const double MPAinPA = 0.001;
const double MPAinMMrtS = 7.50062e-6;

const double MMrtSinkPA = 0.133322;
const double MMrtSnMPA = 133322;
const double MMrtSinPA  = 133.322;
//----------------------------------------
const double GRAMMinKG = 1/1000;
const double GRAMMinCENTN = 1/100000;
const double GRAMMinTONN = 1/100000000;

const double KGinGRAMM = 1000;
const double KGinCENTN = 1/100;
const double KGinTONN = 1/1000;

const double CENTNinGRAMM = 100000;
const double CENTNinKG = 100;
const double CENTNinTONN = 1/100000;

const double TONNinKG = 1000;
const double TONNinCENTN = 100000;
const double TONNinGRAMM = 100000000;
//----------------------------------------
const double MMinCM = 1/10;
const double MMinM = 1/1000;
const double MMinKM = 1/1000000;

const double CMinMM = 10;
const double CMinM = 1/100;
const double CMinKM = 1/100000;

const double MinMM = 1000;
const double MinCM = 100;
const double MinKM = 1/1000;

const double KMinMM = 1000000;
const double KMinCM = 100000;
const double KMinM = 1000;
//----------------------------------------