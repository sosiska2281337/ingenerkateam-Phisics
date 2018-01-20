#include <cstdlib>
#include <iostream>
#include <clocale>
#include <windows.h>
#include <locale>
#include "data phisics.cpp"

using namespace std;

//double coef;

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
    double coef;

    const double CEF_MPA = 1000;
    const double CEF_PA = 1;
    const double CEF_KPA = 0.001;
    const double CEF_MM_RT_ST = 0.00750062;

    char message[200];

    if (strcmp(unit, "миллиПаскаль") == 0)
    {
        coef = 1/CEF_MPA;
        strcpy(message, "Укажите давление в миллиПаскалях:");
    }
    else if (strcmp(unit, "Паскаль") == 0)
    {
        coef = 1/CEF_PA;
        strcpy(message, "Укажите давление в Паскалях:");
    }
    else if (strcmp(unit, "килоПаскаль") == 0)
    {
        coef = 1/CEF_KPA;
        strcpy(message, "Укажите давление в килоПаскалях:");
    }
    else if (strcmp(unit, "мм ртутного столба") == 0)
    {
        coef = 1/CEF_MM_RT_ST;
        strcpy(message, "Укажите давление в мм ртутного столба:");
    }

    cout << message << endl;
    cin >> pressureVvod;

    cout << "В МиллиПаскалях:"          << coef * CEF_MPA * pressureVvod << endl;
    cout << "В Паскалях:"               << coef * CEF_PA * pressureVvod << endl;
    cout << "В килоПаскалях:"           << coef * CEF_KPA * pressureVvod << endl;
    cout << "В мм. Ртутного столба:"    << coef * CEF_MM_RT_ST * pressureVvod << endl;
}


bool showdistance(const char* unit)
{
    double distanceVvod;
    double coef;

    const double CEF_MM = 10;
    const double CEF_CM = 1;
    const double CEF_M = 1/100;
    const double CEF_KM = 1/100000;

    char message[200];


    if (strcmp(unit, "Милиметры") == 0)
    {
        coef = 1/CEF_MM;
        strcpy(message, "Укажите расстояния в милиметрах:");
    }
    else if (strcmp(unit, "Сантиметры:") == 0)
    {
        coef = 1/CEF_CM;
        strcpy(message, "Укажите расстояния в сантиметрах:");
    }
    else if (strcmp(unit, "Метры:") == 0)
    {
        coef = 1/CEF_M;
        strcpy(message, "Укажите расстояния в метрах:");
    }
    else if (strcmp(unit, "Километры") == 0)
    {
        coef = 1/CEF_KM;
        strcpy(message, "Укажите расстояния в километрах:");
    }

    cout << message << endl;
    cin >> distanceVvod;

    cout << "В Милиметрах:"<< coef * CEF_MM  * distanceVvod << endl;
    cout << "В Сантиметрах:"<< coef * CEF_CM  * distanceVvod << endl;
    cout << "В Метрах:"<< coef * CEF_M  * distanceVvod << endl;
    cout << "В Километрах:"<< coef * CEF_KM  * distanceVvod << endl;;

}
bool showmass(const char* unit)
{
    double massVvod;
    double coef = 4;

    const double CEF_GM = 1000;
    const double CEF_KG = 1;
    const double CEF_CENT = 0.01;
    const double CEF_TON = 0.001;
    char message[200];

    if (strcmp(unit, "Граммы") == 0)
    {
        coef = 1/CEF_GM;
        strcpy(message, "Укажите массу в граммах:");
    }
    else if (strcmp(unit, "Килограммы") == 0)
    {
        coef = 1/CEF_KG;
        strcpy(message, "Укажите массу в килограммах:");
    }
    else if (strcmp(unit, "Центнеры") == 0)
    {
        coef = 1/CEF_CENT;
        strcpy(message, "Укажите массу в центнерах:");
    }
    else if (strcmp(unit, "Тонны") == 0)
    {
        coef = 1/CEF_TON;
        strcpy(message, "Укажите массу в тоннах:");
    }

    cout << message << endl;
    cin >> massVvod;

    cout << "В Милиметрах:"<< coef * CEF_GM * massVvod << endl;
    cout << "В Сантиметрах:"<< coef * CEF_KG * massVvod << endl;
    cout << "В Метрах:"<< coef * CEF_CENT * massVvod << endl;
    cout << "В Километрах:"<< coef * CEF_TON * massVvod << endl;;

}
bool showtime(const char* unit)
{
    double timeVvod;
    double coef;

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
    cout << "Для того, чтобы выйти нажмите 5"<<endl;
}
void messege_mass()
{
    cout << "Для того, чтобы перевести граммы: нажмите 1"<<endl;
    cout << "Для того, чтобы перевести килограммы: нажмите 2"<<endl;
    cout << "Для того, чтобы перевести центнеры: нажмите 3"<<endl;
    cout << "Для того, чтобы перевести тонны: нажмите 4"<<endl;
    cout << "Для того, чтобы выйти в главное меню: нажмите 5"<<endl;
}
void messege_distance()
{
    cout << "Для того, чтобы перевести милиметры в : нажмите 1"<<endl;
    cout << "Для того, чтобы перевести сантиметры: нажмите 2"<<endl;
    cout << "Для того, чтобы перевести метры: нажмите 3"<<endl;
    cout << "Для того, чтобы перевести километры: нажмите 4"<<endl;
    cout << "Для того, чтобы выйти в главное меню: нажмите 5"<<endl;
}
void messege_pressure()
{
    cout << "Для того, чтобы перевести милиПаскали в : нажмите 1"<<endl;
    cout << "Для того, чтобы перевести Паскали: нажмите 2"<<endl;
    cout << "Для того, чтобы перевести килоПаскали: нажмите 3"<<endl;
    cout << "Для того, чтобы перевести атмосферное давление: нажмите 4"<<endl;
    cout << "Для того, чтобы выйти в главное меню: нажмите 5"<<endl;
}
void messege_time()
{
    cout << "Для того, чтобы перевести секунды в : нажмите 1"<<endl;
    cout << "Для того, чтобы перевести минуты: нажмите 2"<<endl;
    cout << "Для того, чтобы перевести часы: нажмите 3"<<endl;
    cout << "Для того, чтобы перевести сутки: нажмите 4"<<endl;
    cout << "Для того, чтобы выйти в главное меню: нажмите 5"<<endl;
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
    const int SELECTED_INDEX_DISTANCE = 1;
    const int SELECTED_INDEX_MILLIMETERS = 1;
    const int SELECTED_INDEX_MASS = 2;
    const int SELECTED_INDEX_PRESSURE = 3;

    message_menu();

    while(1)
    {
        cin >> num1;

//--------------------------------------------
        if(num1 == SELECTED_INDEX_DISTANCE)
        {
            while(1)
            {
                messege_distance();
                cin >> num;

                if(num == SELECTED_INDEX_MILLIMETERS)
                {
                    showdistance("Милиметры");
                }

                if(num == 2)
                {
                    showdistance("Сантиметры");
                }
                if(num == 3)
                {
                    showdistance("Метры");
                }
                if(num == 4)
                {
                    showdistance("Километры");
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
        if (num1 == SELECTED_INDEX_MASS)
        {
            while(1)
            {
                messege_mass();
                cin >> num;

                if (num == 1)
                {
                    showmass("Граммы");
                }

                if(num == 2)
                {
                    showmass("Килограммы");
                }
                if(num == 3)
                {
                    showmass("Центнеры");
                }
                if(num == 4)
                {
                    showmass("Тонны");
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
        if (num1 == SELECTED_INDEX_PRESSURE)
        {
            while(1)
            {
                messege_pressure();
                cin >> num;

                if (num == 1)
                {
                    showPressure("миллиПаскаль");
                }
                if (num == 2)
                {
                    showPressure("Паскаль");
                }
                if(num == 3)
                {
                    showPressure("килоПаскаль");
                }
                if(num == 4)
                {
                    showPressure("мм ртутного столба");
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
        if(num1 == 4)
        {
            while(1)
            {
                messege_time();
                cin >> num;

                if(num == 1)
                {
                    showtime("Секунды");
                }
                if(num == 2)
                {
                    showtime("Минуты");
                }
                if(num == 3)
                {
                    showtime("Часы");
                }
                if(num == 4)
                {
                    showtime("Сутки");
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
        if(num1 == 5)
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

