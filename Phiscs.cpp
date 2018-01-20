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

    if (strcmp(unit, "������������") == 0)
    {
        coef = 1/CEF_MPA;
        strcpy(message, "������� �������� � �������������:");
    }
    else if (strcmp(unit, "�������") == 0)
    {
        coef = 1/CEF_PA;
        strcpy(message, "������� �������� � ��������:");
    }
    else if (strcmp(unit, "�����������") == 0)
    {
        coef = 1/CEF_KPA;
        strcpy(message, "������� �������� � ������������:");
    }
    else if (strcmp(unit, "�� �������� ������") == 0)
    {
        coef = 1/CEF_MM_RT_ST;
        strcpy(message, "������� �������� � �� �������� ������:");
    }

    cout << message << endl;
    cin >> pressureVvod;

    cout << "� �������������:"          << coef * CEF_MPA * pressureVvod << endl;
    cout << "� ��������:"               << coef * CEF_PA * pressureVvod << endl;
    cout << "� ������������:"           << coef * CEF_KPA * pressureVvod << endl;
    cout << "� ��. �������� ������:"    << coef * CEF_MM_RT_ST * pressureVvod << endl;
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


    if (strcmp(unit, "���������") == 0)
    {
        coef = 1/CEF_MM;
        strcpy(message, "������� ���������� � ����������:");
    }
    else if (strcmp(unit, "����������:") == 0)
    {
        coef = 1/CEF_CM;
        strcpy(message, "������� ���������� � �����������:");
    }
    else if (strcmp(unit, "�����:") == 0)
    {
        coef = 1/CEF_M;
        strcpy(message, "������� ���������� � ������:");
    }
    else if (strcmp(unit, "���������") == 0)
    {
        coef = 1/CEF_KM;
        strcpy(message, "������� ���������� � ����������:");
    }

    cout << message << endl;
    cin >> distanceVvod;

    cout << "� ����������:"<< coef * CEF_MM  * distanceVvod << endl;
    cout << "� �����������:"<< coef * CEF_CM  * distanceVvod << endl;
    cout << "� ������:"<< coef * CEF_M  * distanceVvod << endl;
    cout << "� ����������:"<< coef * CEF_KM  * distanceVvod << endl;;

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

    if (strcmp(unit, "������") == 0)
    {
        coef = 1/CEF_GM;
        strcpy(message, "������� ����� � �������:");
    }
    else if (strcmp(unit, "����������") == 0)
    {
        coef = 1/CEF_KG;
        strcpy(message, "������� ����� � �����������:");
    }
    else if (strcmp(unit, "��������") == 0)
    {
        coef = 1/CEF_CENT;
        strcpy(message, "������� ����� � ���������:");
    }
    else if (strcmp(unit, "�����") == 0)
    {
        coef = 1/CEF_TON;
        strcpy(message, "������� ����� � ������:");
    }

    cout << message << endl;
    cin >> massVvod;

    cout << "� ����������:"<< coef * CEF_GM * massVvod << endl;
    cout << "� �����������:"<< coef * CEF_KG * massVvod << endl;
    cout << "� ������:"<< coef * CEF_CENT * massVvod << endl;
    cout << "� ����������:"<< coef * CEF_TON * massVvod << endl;;

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


    if (strcmp(unit, "�������") == 0)
    {
        strcpy(message, "������� ����� � ��������:");
        sec = 1;
        mIn = 1/60;
        hour = 1/3600;
        day = 1/86400;
    }
    else if (strcmp(unit, "������:") == 0)
    {
        strcpy(message, "������� ����� � �������:");
        sec = 60;
        mIn = 1;
        hour = 1/60;
        day = 1/24;
    }
    else if (strcmp(unit, "����:") == 0)
    {
        strcpy(message, "������� ����� � �����:");
        sec = 3600;
        mIn = 60;
        hour =  1;
        day = 1/100000;
    }
    else if (strcmp(unit, "�����") == 0)
    {
        strcpy(message, "������� ����� � ������:");
        sec = 3600;
        mIn = 86400;
        hour  =  24;
        day = 1;
    }

    cout << message << endl;
    cin >> timeVvod;

    cout << "� ��������:"<< sec * timeVvod << endl;
    cout << "� �������:"<< mIn * timeVvod << endl;
    cout << "� �����:"<< hour * timeVvod << endl;
    cout << "� ������:"<< day * timeVvod << endl;;

}
void message_menu()
{
    cout << "��� ����, ����� ��������� ������� �����: ������� 1"<<endl;
    cout << "��� ����, ����� ��������� ������� ����: ������� 2"<<endl;
    cout << "��� ����, ����� ��������� ������� ��������: ������� 3"<<endl;
    cout << "��� ����, ����� ��������� ������� �������: ������� 4"<<endl;
    cout << "��� ����, ����� ����� ������� 5"<<endl;
}
void messege_mass()
{
    cout << "��� ����, ����� ��������� ������: ������� 1"<<endl;
    cout << "��� ����, ����� ��������� ����������: ������� 2"<<endl;
    cout << "��� ����, ����� ��������� ��������: ������� 3"<<endl;
    cout << "��� ����, ����� ��������� �����: ������� 4"<<endl;
    cout << "��� ����, ����� ����� � ������� ����: ������� 5"<<endl;
}
void messege_distance()
{
    cout << "��� ����, ����� ��������� ��������� � : ������� 1"<<endl;
    cout << "��� ����, ����� ��������� ����������: ������� 2"<<endl;
    cout << "��� ����, ����� ��������� �����: ������� 3"<<endl;
    cout << "��� ����, ����� ��������� ���������: ������� 4"<<endl;
    cout << "��� ����, ����� ����� � ������� ����: ������� 5"<<endl;
}
void messege_pressure()
{
    cout << "��� ����, ����� ��������� ����������� � : ������� 1"<<endl;
    cout << "��� ����, ����� ��������� �������: ������� 2"<<endl;
    cout << "��� ����, ����� ��������� �����������: ������� 3"<<endl;
    cout << "��� ����, ����� ��������� ����������� ��������: ������� 4"<<endl;
    cout << "��� ����, ����� ����� � ������� ����: ������� 5"<<endl;
}
void messege_time()
{
    cout << "��� ����, ����� ��������� ������� � : ������� 1"<<endl;
    cout << "��� ����, ����� ��������� ������: ������� 2"<<endl;
    cout << "��� ����, ����� ��������� ����: ������� 3"<<endl;
    cout << "��� ����, ����� ��������� �����: ������� 4"<<endl;
    cout << "��� ����, ����� ����� � ������� ����: ������� 5"<<endl;
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
                    showdistance("���������");
                }

                if(num == 2)
                {
                    showdistance("����������");
                }
                if(num == 3)
                {
                    showdistance("�����");
                }
                if(num == 4)
                {
                    showdistance("���������");
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
                    showmass("������");
                }

                if(num == 2)
                {
                    showmass("����������");
                }
                if(num == 3)
                {
                    showmass("��������");
                }
                if(num == 4)
                {
                    showmass("�����");
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
                    showPressure("������������");
                }
                if (num == 2)
                {
                    showPressure("�������");
                }
                if(num == 3)
                {
                    showPressure("�����������");
                }
                if(num == 4)
                {
                    showPressure("�� �������� ������");
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
                    showtime("�������");
                }
                if(num == 2)
                {
                    showtime("������");
                }
                if(num == 3)
                {
                    showtime("����");
                }
                if(num == 4)
                {
                    showtime("�����");
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
    SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������

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

