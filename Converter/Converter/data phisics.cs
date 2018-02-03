using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Converter
{
    public class data_phisics
    {        

public int CM, M, DM, MM, KM;
public int GRAMM, KG, TONN, CENTN;
public int PA, kPA, MPA, MMrtS;
public int YER, HOUR, MIN, SEC;


public double num;
public double num1;


public double pressureVvod;
public double massVvod;
public double timeVvod;
public double distanceVvod;
public double strenchVvod;
public double energyVvod;
public double temprVvod;

//-------------------------------------
    public const double CEF_MPA = 1000;
    public const double CEF_PA = 1;
    public const double CEF_KPA = 0.001;
    public const double CEF_MM_RT_ST = 0.00750062;
//---------------------------
    public const double CEF_MM = 10;
    public const double CEF_CM = 1;
    public const double CEF_M = 0.01;
    public const double CEF_KM = 0.0001;
//--------------------------------
    const double CEF_SEC = 216000;
    const double CEF_MIN = 3600;
    const double CEF_HOUR = 24;
    const double CEF_DAY = 1;
//--------------------------------
    public const double CEF_GM = 1000;
    public const double CEF_KG = 1;
    public const double CEF_CENT = 0.01;
    public const double CEF_TON = 0.001;
//--------------------------------

//--------------------------------
    public const double CEF_KDZH = 0.001;
    public const double CEF_DZH = 1;
    public const double CEF_KK = 0.000239006;
    public const double CEF_FF = 0.7375620;

//-------------------------------------
    public const double CEF_MN =0.001;
    public  const double CEF_N =1;

//-------------------------------------
    public const double CEF_CEL = 1;
    public const double CEF_FAR = 33.8;
    public const double CEF_KELVN =274.15;

    public const int SELECTED_INDEX_BACK = 5;
    public const int SELECTED_INDEX_EXIT = 9;
//-------------------------------------
    public const int SELECTED_INDEX_DISTANCE = 1;

    public const int SELECTED_INDEX_MM = 1;
    public const int SELECTED_INDEX_CM = 2;
    public const int SELECTED_INDEX_M = 3;
    public const int SELECTED_INDEX_KM = 4;
//-------------------------------------
    public const int SELECTED_INDEX_MASS = 2;

    public const int SELECTED_INDEX_GM = 1;
    public const int SELECTED_INDEX_KG = 2;
    public const int SELECTED_INDEX_CENT = 3;
    public const int SELECTED_INDEX_TONN = 4;
//-------------------------------------
    public const int SELECTED_INDEX_PRESSURE = 3;

    public const int SELECTED_INDEX_MPA = 1;
    public const int SELECTED_INDEX_PA = 2;
    public const int SELECTED_INDEX_KPA = 3;
    public const int SELECTED_INDEX_MMRTST = 4;
//--------------------------------------
    public const int SELECTED_INDEX_TIME = 4;

    public const int SELECTED_INDEX_SEC = 1;
    public const int SELECTED_INDEX_MIN = 2;
    public const int SELECTED_INDEX_HOUR = 3;
    public const int SELECTED_INDEX_DAY = 4;
//------------------------------------
    public const int SELECTED_INDEX_STRENCH = 5;
 
    const int SELECTED_INDEX_KN = 1;
    const int SELECTED_INDEX_N = 2;
//-----------------------------------------
    public const int SELECTED_INDEX_ENERGY = 6;

    public const int SELECTED_INDEX_KDZH = 1;
    public const int SELECTED_INDEX_DZH = 2;
    public const int SELECTED_INDEX_KK = 3;
    public const int SELECTED_INDEX_FF = 4;
//---------------------------------------------
    public const int SELECTED_INDEX_TEMPR = 7;

    public const int SELECTED_INDEX_CEL = 1;
    public const int SELECTED_INDEX_FAR = 2;
    public const int SELECTED_INDEX_KELVN = 3;
//----------------------------------------
    public const int SELECTED_INDEX_ANIMALS = 8;
    }
}
