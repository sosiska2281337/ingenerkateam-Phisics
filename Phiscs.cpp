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
    double coef;



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

    double coef;



    char message[200];


    if (strcmp(unit, "���������") == 0)
    {
        coef = 1/CEF_MM;
        strcpy(message, "������� ���������� � ����������:");
    }
    else if (strcmp(unit, "����������") == 0)
    {
        coef = 1/CEF_CM;
        strcpy(message, "������� ���������� � �����������:");
    }
    else if (strcmp(unit, "�����") == 0)
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

    double coef;


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

    double coef;


    char message[200];


    if (strcmp(unit, "�������") == 0)
    {

        coef = 1/CEF_SEC;
        strcpy(message, "������� ����� � ��������:");

    }
    else if (strcmp(unit, "������:") == 0)
    {
        coef = 1/CEF_MIN;
        strcpy(message, "������� ����� � �������:");

    }
    else if (strcmp(unit, "����:") == 0)
    {
        coef = 1/CEF_HOUR;
        strcpy(message, "������� ����� � �����:");

    }
    else if (strcmp(unit, "�����") == 0)
    {
        coef = 1/CEF_DAY;
        strcpy(message, "������� ����� � ������:");

    }

    cout << message << endl;
    cin >> timeVvod;

    cout << "� ��������:"<< coef * CEF_SEC * timeVvod << endl;
    cout << "� �������:"<< coef * CEF_MIN * timeVvod << endl;
    cout << "� �����:"<< coef *CEF_HOUR * timeVvod << endl;
    cout << "� ������:"<< coef *CEF_DAY * timeVvod << endl;;

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
    cout << "��� ����, ����� ��������� �������: ������� 1"<<endl;
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

                if(num == SELECTED_INDEX_MM)
                {
                    showdistance("���������");
                }

                if(num == SELECTED_INDEX_CM)
                {
                    showdistance("����������");
                }
                if(num == SELECTED_INDEX_M)
                {
                    showdistance("�����");
                }
                if(num == SELECTED_INDEX_KM)
                {
                    showdistance("���������");
                }
                if(num == SELECTED_INDEX_BACK)
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

                if (num == SELECTED_INDEX_GM)
                {
                    showmass("������");
                }

                if(num == SELECTED_INDEX_KG )
                {
                    showmass("����������");
                }
                if(num == SELECTED_INDEX_CENT)
                {
                    showmass("��������");
                }
                if(num == SELECTED_INDEX_TONN)
                {
                    showmass("�����");
                }
                if(num == SELECTED_INDEX_BACK)
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

                if (num == SELECTED_INDEX_MPA)
                {
                    showPressure("������������");
                }
                if (num == SELECTED_INDEX_PA)
                {
                    showPressure("�������");
                }
                if(num == SELECTED_INDEX_KPA)
                {
                    showPressure("�����������");
                }
                if(num == SELECTED_INDEX_MMRTST)
                {
                    showPressure("�� �������� ������");
                }
                if(num == SELECTED_INDEX_BACK)
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
        if(num1 == SELECTED_INDEX_TIME)
        {
            while(1)
            {
                messege_time();
                cin >> num;

                if(num ==SELECTED_INDEX_SEC)
                {
                    showtime("�������");
                }
                if(num == SELECTED_INDEX_MIN)
                {
                    showtime("������");
                }
                if(num == SELECTED_INDEX_HOUR)
                {
                    showtime("����");
                }
                if(num == SELECTED_INDEX_DAY)
                {
                    showtime("�����");
                }
                if(num == SELECTED_INDEX_BACK)
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
        if(num1 == SELECTED_INDEX_BACK)
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

