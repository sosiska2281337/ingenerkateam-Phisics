#include <cstdlib>
#include <iostream>
#include <clocale>
#include <windows.h>
#include <locale>
#include "data phisics.cpp"

using namespace std;

enum unitypes {MASS, PRESSURE, WEIGHT};
enum pristavka {NANO, MICRO, MILLI, SANTI, DECI, NONE, KILO, MEGA, GIGA};

struct phisUnit
{
    const char* name;
    unitypes type;
    pristavka prist;
};

phisUnit millimeter = {"millimeter", MASS, MILLI};


bool showPressure(const char* unit)
{
    double pressureVvod;

    double pa;
    double kpa;
    double mpa;
    double mmrtst;

    char message[200];


    if (strcmp(unit, "миллиПаскаль") == 0)
    {
        strcpy(message, "Укажите расстояния в миллиПаскалях:");
        mpa = 1;
        pa = 1000000;
        kpa = 1000;
        mmrtst = 0.000133322;
    }
    else if (strcmp(unit, "Паскаль") == 0)
    {
        strcpy(message, "Укажите расстояния в Паскалях:");
        mpa = 1000;
        pa = 1;
        kpa = 0.001;
        mmrtst = 0.00750062;
    }
    else if (strcmp(unit, "килоПаскаль") == 0)
    {
        strcpy(message, "Укажите расстояния в килоПаскалях:");
        mpa = 1000000;
        pa = 1000;
        kpa = 1;
        mmrtst = 0.133322;
    }
    else if (strcmp(unit, "мм ртутного столба") == 0)
    {
        strcpy(message, "Укажите расстояния в мм ртутного столба:");
        mpa = 133322;
        pa = 133.322;
        kpa = 0.133322;
        mmrtst = 1;
    }

    cout << message << endl;
    cin >> pressureVvod;

    cout << "В МиллиПаскалях:"          << mpa * pressureVvod << endl;
    cout << "В Паскалях:"               << pa * pressureVvod << endl;
    cout << "В килоПаскалях:"           << kpa * pressureVvod << endl;
    cout << "В мм. Ртутного столба:"    << mmrtst * pressureVvod << endl;
}


bool showdistance(const char* unit)
{
double distanceVvod;

    double mm;
    double cm;
    double m;
    double km;

    char message[200];


    if (strcmp(unit, "Милиметры") == 0)
    {
        strcpy(message, "Укажите расстояния в милиметрах:");
        mm = 1;
        cm = 1/10;
        m = 1;
        km = 1/1000000;
    }
    else if (strcmp(unit, "Сантиметры:") == 0)
    {
        strcpy(message, "Укажите расстояния в сантиметрах:");
        mm = 10;
        cm = 1;
        m = 1/100;
        km = 1/100000;
    }
    else if (strcmp(unit, "Метры:") == 0)
    {
        strcpy(message, "Укажите расстояния в метрах:");
        mm = 1000;
        cm = 100;
        m =  1;
        km = 1/1000;
    }
    else if (strcmp(unit, "Километры") == 0)
    {
        strcpy(message, "Укажите расстояния в километрах:");
        mm = 1000000;
        cm = 100000;
        m  =  1000;
        km = 1;
    }

    cout << message << endl;
    cin >> distanceVvod;

    cout << "В Милиметрах:"<< mm * distanceVvod << endl;
    cout << "В Сантиметрах:"<< cm * distanceVvod << endl;
    cout << "В Метрах:"<< m * distanceVvod << endl;
    cout << "В Километрах:"<< km * distanceVvod << endl;;

}
bool showmass(const char* unit)
{
double massVvod;

    double gm;
    double kg;
    double cent;
    double ton;

    char message[200];


    if (strcmp(unit, "Граммы") == 0)
    {
        strcpy(message, "Укажите расстояния в граммах:");
        gm = 1;
        kg = 1/1000;
        cent = 1/100000;
        ton = 1/100000000;
    }
    else if (strcmp(unit, "Граммы:") == 0)
    {
        strcpy(message, "Укажите расстояния в килограммах:");
        gm = 1000;
        kg = 1;
        cent = 1/100;
        ton = 1/1000;
    }
    else if (strcmp(unit, "Центнеры:") == 0)
    {
        strcpy(message, "Укажите расстояния в центнерах:");
        gm = 100000;
        kg = 100;
        cent =  1;
        ton = 1/100000;
    }
    else if (strcmp(unit, "Тонны") == 0)
    {
        strcpy(message, "Укажите расстояния в тоннах:");
        gm = 100000000;
        kg = 1000;
        cent  =  100000;
        ton = 1;
    }

    cout << message << endl;
    cin >> massVvod;

    cout << "В Милиметрах:"<< gm * massVvod << endl;
    cout << "В Сантиметрах:"<< kg * massVvod << endl;
    cout << "В Метрах:"<< cent * massVvod << endl;
    cout << "В Километрах:"<< ton * massVvod << endl;;

}
bool showtime(const char* unit)
{
double timeVvod;

    double sec;
    double mIn;
    double hour;
    double day;

    char message[200];


    if (strcmp(unit, "Секунды") == 0)
    {
        strcpy(message, "Укажите время в секундах:");
        sec = 1;
        mIn = 1/60;
        hour = 1/3600;
        day = 1/86400;
    }
    else if (strcmp(unit, "Минуты:") == 0)
    {
        strcpy(message, "Укажите время в минутах:");
        sec = 60;
        mIn = 1;
        hour = 1/60;
        day = 1/24;
    }
    else if (strcmp(unit, "Часы:") == 0)
    {
        strcpy(message, "Укажите время в часах:");
        sec = 3600;
        mIn = 60;
        hour =  1;
        day = 1/100000;
    }
    else if (strcmp(unit, "Сутки") == 0)
    {
        strcpy(message, "Укажите время в сутках:");
        sec = 3600;
        mIn = 86400;
        hour  =  24;
        day = 1;
    }

    cout << message << endl;
    cin >> timeVvod;

    cout << "В секундах:"<< sec * timeVvod << endl;
    cout << "В минутах:"<< mIn * timeVvod << endl;
    cout << "В часах:"<< hour * timeVvod << endl;
    cout << "В сутках:"<< day * timeVvod << endl;;

}
void message_menu()
{
    cout << "Для того, чтобы перевести единицы длины: нажмите 1"<<endl;
    cout << "Для того, чтобы перевести единицы веса: нажмите 2"<<endl;
    cout << "Для того, чтобы перевести единицы давления: нажмите 3"<<endl;
    cout << "Для того, чтобы перевести единицы времени: нажмите 4"<<endl;
    cout << "Для того, выйти нажмите 5"<<endl;
}
void messege_mass()
{
    cout << "Для того, чтобы перевести граммы: нажмите 1"<<endl;
    cout << "Для того, чтобы перевести килограммы: нажмите 2"<<endl;
    cout << "Для того, чтобы перевести центнеры: нажмите 3"<<endl;
    cout << "Для того, чтобы перевести тонны: нажмите 4"<<endl;
    cout << "Для того, выйти в главное меню: нажмите 5"<<endl;
}
void messege_distance()
{
    cout << "Для того, чтобы перевести милиметры в : нажмите 1"<<endl;
    cout << "Для того, чтобы перевести сантиметры: нажмите 2"<<endl;
    cout << "Для того, чтобы перевести метры: нажмите 3"<<endl;
    cout << "Для того, чтобы перевести километры: нажмите 4"<<endl;
    cout << "Для того, выйти в главное меню: нажмите 5"<<endl;
}
void messege_pressure()
{
    cout << "Для того, чтобы перевести милиПаскали в : нажмите 1"<<endl;
    cout << "Для того, чтобы перевести Паскали: нажмите 2"<<endl;
    cout << "Для того, чтобы перевести килоПаскали: нажмите 3"<<endl;
    cout << "Для того, чтобы перевести атмосферное давление: нажмите 4"<<endl;
    cout << "Для того, выйти в главное меню: нажмите 5"<<endl;
}
void messege_time()
{
    cout << "Для того, чтобы перевести секунды в : нажмите 1"<<endl;
    cout << "Для того, чтобы перевести минуты: нажмите 2"<<endl;
    cout << "Для того, чтобы перевести часы: нажмите 3"<<endl;
    cout << "Для того, чтобы перевести сутки: нажмите 4"<<endl;
    cout << "Для того, выйти в главное меню: нажмите 5"<<endl;
}

void choosen(double CMinMM,double CMinM, double CMinKM,double
             MinMM,double MinCM, double MinKM,double
             MMinCM,double MMinM, double MiMnKM,double
             KMinCM,double KMinM, double KMiMnMM,double
             TONNinGRAMM,double TONNinCENTN, double TONNinKG,
             double CENTNinGRAMM,double CENTNinKG, double CENTNinTONN,
             double KGinGRAMM,double KGinCENTN, double KGinTONN, double
             GRAMMinKG,double GRAMMinCENTN, double GRAMMinTONN,
             double MMrtSinkPA,double MMrtSnMPA, double MMrtSinPA,
             double MPAinkPA,double MPAinPA, double MPAinMMrtS,
             double kPAinPA,double kPAinMPA, double kPAinMMrtS,
             double PAinkPA,double PAinMPA, double PAinMMrtS
            )
{

 message_menu();

    while(1)

    {
        cin >> num;

//--------------------------------------------
        if(num == 1)
        {
            while(1)
            messege_distance();
            {



            if(num == 1)
            {
                showdistance("Милиметры");
                messege_distance();
            }

            if(num == 2)
            {
                showdistance("Сантиметры");
                messege_distance();
            }
            if(num == 3)
            {
                showdistance("Метры");
                messege_distance();
            }
            if(num == 4)
            {
                showdistance("Километры");
                messege_distance();
            }
            if(num == 5)
            {

                choosen(CMinMM,  CMinM,   CMinKM,
                        MinMM, MinCM,  MinKM,
                        MMinCM, MMinM,  MinKM,
                        KMinCM, KMinM,  KMinMM,
                        KGinGRAMM,  KGinCENTN,   KGinTONN,
                        TONNinGRAMM, TONNinCENTN,  TONNinKG,
                        CENTNinGRAMM, CENTNinKG,  CENTNinTONN,
                        GRAMMinKG, GRAMMinCENTN,  GRAMMinKG,
                        MMrtSinkPA, MMrtSnMPA,  MMrtSinPA,
                        MPAinkPA, MPAinPA,  MPAinMMrtS,
                        kPAinPA, kPAinMPA,  kPAinMMrtS,
                        PAinkPA, PAinMPA,  PAinMMrtS


                       );




            }

        }
  }
//--------------------------------------------
        if(num == 2)
        {
            messege_mass();

            while(1)
            {
                cin >> num;
                if(num == 1)
                {
                    showmass("Граммы");
                    messege_mass();
                }

                if(num == 2)
                {
                    showmass("Килограммы");
                    messege_mass();
                }
                if(num == 3)
                {
                    showmass("Центнеры");
                    messege_mass();
                }
                if(num == 4)
                {
                    showmass("Тонны");
                    messege_mass();
                }
                if(num == 5)
                {

                    choosen(CMinMM,  CMinM,   CMinKM,
                            MinMM, MinCM,  MinKM,
                            MMinCM, MMinM,  MinKM,
                            KMinCM, KMinM,  KMinMM,
                            KGinGRAMM,  KGinCENTN,   KGinTONN,
                            TONNinGRAMM, TONNinCENTN,  TONNinKG,
                            CENTNinGRAMM, CENTNinKG,  CENTNinTONN,
                            GRAMMinKG, GRAMMinCENTN,  GRAMMinKG,
                            MMrtSinkPA, MMrtSnMPA,  MMrtSinPA,
                            MPAinkPA, MPAinPA,  MPAinMMrtS,
                            kPAinPA, kPAinMPA,  kPAinMMrtS,
                            PAinkPA, PAinMPA,  PAinMMrtS


                           );

                }

            }

        }
 //--------------------------------------------
        if(num == 3)
        {
            messege_pressure();

            while(1)
            {
                cin >> num;
                if(num == 1)
                {
                    showPressure("миллиПаскаль");
                    messege_pressure();
                }

                if(num == 2)
                {
                    showPressure("Паскаль");
                    messege_pressure();
                }
                if(num == 3)
                {
                    showPressure("килоПаскаль");
                    messege_pressure();
                }
                if(num == 4)
                {
                    showPressure("мм Ртутного столба");
                    messege_pressure();
                }
                if(num == 5)
                {

                    choosen(CMinMM,  CMinM,   CMinKM,
                            MinMM, MinCM,  MinKM,
                            MMinCM, MMinM,  MinKM,
                            KMinCM, KMinM,  KMinMM,
                            KGinGRAMM,  KGinCENTN,   KGinTONN,
                            TONNinGRAMM, TONNinCENTN,  TONNinKG,
                            CENTNinGRAMM, CENTNinKG,  CENTNinTONN,
                            GRAMMinKG, GRAMMinCENTN,  GRAMMinKG,
                            MMrtSinkPA, MMrtSnMPA,  MMrtSinPA,
                            MPAinkPA, MPAinPA,  MPAinMMrtS,
                            kPAinPA, kPAinMPA,  kPAinMMrtS,
                            PAinkPA, PAinMPA,  PAinMMrtS


                           );

                }

            }

        }
//--------------------------------------------
        if(num == 4)
        {

            messege_time();
            while(1)
            {



            if(num == 1)
            {
                showtime("Секунды");
                messege_time();
            }

            if(num == 2)
            {
                showtime("Минуты");
                messege_time();
            }
            if(num == 3)
            {
                showtime("Часы");
                messege_time();
            }
            if(num == 4)
            {
                showtime("Сутки");
                messege_time();
            }
            if(num == 5)
            {

                choosen(CMinMM,  CMinM,   CMinKM,
                        MinMM, MinCM,  MinKM,
                        MMinCM, MMinM,  MinKM,
                        KMinCM, KMinM,  KMinMM,
                        KGinGRAMM,  KGinCENTN,   KGinTONN,
                        TONNinGRAMM, TONNinCENTN,  TONNinKG,
                        CENTNinGRAMM, CENTNinKG,  CENTNinTONN,
                        GRAMMinKG, GRAMMinCENTN,  GRAMMinKG,
                        MMrtSinkPA, MMrtSnMPA,  MMrtSinPA,
                        MPAinkPA, MPAinPA,  MPAinMMrtS,
                        kPAinPA, kPAinMPA,  kPAinMMrtS,
                        PAinkPA, PAinMPA,  PAinMMrtS


                       );

            }
         }
    }
//--------------------------------------------
        if(num == 5)
        {
            GenerateConsoleCtrlEvent(CTRL_BREAK_EVENT,0);
        }
    }

}
int main()
{
    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

    system("chcp 1251>nul");

    choosen(CMinMM,  CMinM,   CMinKM,
            MinMM, MinCM,  MinKM,
            MMinCM, MMinM,  MinKM,
            KMinCM, KMinM,  KMinMM,
            KGinGRAMM,  KGinCENTN,   KGinTONN,
            TONNinGRAMM, TONNinCENTN,  TONNinKG,
            CENTNinGRAMM, CENTNinKG,  CENTNinTONN,
            GRAMMinKG, GRAMMinCENTN,  GRAMMinKG,
            MMrtSinkPA, MMrtSnMPA,  MMrtSinPA,
            MPAinkPA, MPAinPA,  MPAinMMrtS,
            kPAinPA, kPAinMPA,  kPAinMMrtS,
            PAinkPA, PAinMPA,  PAinMMrtS


           );



    system("pause>nul");
    return 0;
}

