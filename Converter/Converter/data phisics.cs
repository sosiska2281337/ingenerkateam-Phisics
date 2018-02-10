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
    public const double CEF_MM_RT_ST = 0.008;
//---------------------------
    public const double CEF_MM = 10;
    public const double CEF_CM = 1;
    public const double CEF_M = 0.01;
    public const double CEF_KM = 0.0001;
//--------------------------------
    public const double CEF_SEC = 86400;
    public const double CEF_MIN = 1440;
    public const double CEF_HOUR = 24;
    public const double CEF_DAY = 1;
//--------------------------------
    public const double CEF_GM = 1000;
    public const double CEF_KG = 1;
    public const double CEF_CENT = 0.01;
    public const double CEF_TON = 0.001;
//--------------------------------

//--------------------------------
    public const double CEF_KDZH = 0.001;
    public const double CEF_DZH = 1;
    public const double CEF_KK = 0.0002;
    public const double CEF_FF = 0.73;

//-------------------------------------
    public const double CEF_KN =0.001;
    public  const double CEF_N =1;

//-------------------------------------
    public const double CEF_CEL = 1;
    public const double CEF_FAR = 33.8;
    public const double CEF_KELVN =274.15;

   
    }
}
