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


    if (strcmp(unit, "������������") == 0)
    {
        strcpy(message, "������� ���������� � �������������:");
        mpa = 1;
        pa = 1000000;
        kpa = 1000;
        mmrtst = 0.000133322;
    }
    else if (strcmp(unit, "�������") == 0)
    {
        strcpy(message, "������� ���������� � ��������:");
        mpa = 1000;
        pa = 1;
        kpa = 0.001;
        mmrtst = 0.00750062;
    }
    else if (strcmp(unit, "�����������") == 0)
    {
        strcpy(message, "������� ���������� � ������������:");
        mpa = 1000000;
        pa = 1000;
        kpa = 1;
        mmrtst = 0.133322;
    }
    else if (strcmp(unit, "�� �������� ������") == 0)
    {
        strcpy(message, "������� ���������� � �� �������� ������:");
        mpa = 133322;
        pa = 133.322;
        kpa = 0.133322;
        mmrtst = 1;
    }

    cout << message << endl;
    cin >> pressureVvod;

    cout << "� �������������:"          << mpa * pressureVvod << endl;
    cout << "� ��������:"               << pa * pressureVvod << endl;
    cout << "� ������������:"           << kpa * pressureVvod << endl;
    cout << "� ��. �������� ������:"    << mmrtst * pressureVvod << endl;
}



bool showdistance(const char* unit)
{
double distanceVvod;

    double mm;
    double cm;
    double m;
    double km;

    char message[200];


    if (strcmp(unit, "���������") == 0)
    {
        strcpy(message, "������� ���������� � ����������:");
        mm = 1;
        cm = 1/10;
        m = 1;
        km = 1/1000000;
    }
    else if (strcmp(unit, "����������:") == 0)
    {
        strcpy(message, "������� ���������� � �����������:");
        mm = 10;
        cm = 1;
        m = 1/100;
        km = 1/100000;
    }
    else if (strcmp(unit, "�����:") == 0)
    {
        strcpy(message, "������� ���������� � ������:");
        mm = 1000;
        cm = 100;
        m =  1;
        km = 1/1000;
    }
    else if (strcmp(unit, "���������") == 0)
    {
        strcpy(message, "������� ���������� � ����������:");
        mm = 1000000;
        cm = 100000;
        m  =  1000;
        km = 1;
    }

    cout << message << endl;
    cin >> distanceVvod;

    cout << "� ����������:"<< mm * distanceVvod << endl;
    cout << "� �����������:"<< cm * distanceVvod << endl;
    cout << "� ������:"<< m * distanceVvod << endl;
    cout << "� ����������:"<< km * distanceVvod << endl;;

}
bool MassGRAMM(double GRAMMinKG,double GRAMMinCENTN, double GRAMMinTONN)
{



    cout << "������� ����� � �������:"<<endl;
    cout<<"������:";
    cin>>GRAMM;


    double distGRAMMinKG=GRAMM*GRAMMinKG;
    double distGRAMMinCENTN=GRAMMinCENTN*GRAMM;
    double distGRAMMinTONN=GRAMMinTONN*GRAMM;


    cout << "������:"<<endl;
    cout << "� �����������:"<<distGRAMMinKG<<endl;
    cout << "� ���������:"<<distGRAMMinCENTN<<endl;
    cout << "� ������:"<<distGRAMMinTONN<<endl;


}
bool MassKG(double KGinGRAMM,double KGinCENTN, double KGinTONN)
{



    cout << "������� ����� � �����������:"<<endl;
    cout<<"����������:";
    cin>>KG;


    double distKGinGRAMM=KG*KGinGRAMM;
    double distKGinCENTN=KGinCENTN*KG;
    double distKGinTONN=KGinTONN*KG;


    cout << "����������:"<<endl;
    cout << "� �������:"<<distKGinGRAMM<<endl;
    cout << "� ���������::"<<distKGinCENTN<<endl;
    cout << "� ������:"<<distKGinTONN<<endl;


}
bool MassCENTN(double CENTNinGRAMM,double CENTNinKG, double CENTNinTONN)
{



    cout << "������� ����� � ���������:"<<endl;
    cout<<"��������:";
    cin>>CENTN;


    double distCENTNinGRAMM=CENTN*CENTNinGRAMM;
    double distCENTNinKG=CENTNinKG*CENTN;
    double distCENTNinTONN=CENTNinTONN*CENTN;


    cout << "��������:"<<endl;
    cout << "� �������:"<<distCENTNinGRAMM<<endl;
    cout << "� �����������:"<<distCENTNinKG<<endl;
    cout << "� ������:"<<distCENTNinTONN<<endl;


}
bool MassTONN(double TONNinGRAMM,double TONNinCENTN, double TONNinKG)
{



    cout << "������� ����� � ������:"<<endl;
    cout<<"�����:";
    cin>>TONN;


    double distTONNinGRAMM=TONN*TONNinGRAMM;
    double distTONNinCENTN=TONNinCENTN*TONN;
    double distTONNinKG=TONNinKG*TONN;


    cout << "�����:"<<endl;
    cout << "� �������:"<<distTONNinGRAMM<<endl;
    cout << "� ���������:"<<distTONNinCENTN<<endl;
    cout << "� �����������:"<<distTONNinKG<<endl;


}
void message_menu()
{
    cout << "��� ����, ����� ��������� ������� �����: ������� 1"<<endl;
    cout << "��� ����, ����� ��������� ������� ����: ������� 2"<<endl;
    cout << "��� ����, ����� ��������� ������� ��������: ������� 3"<<endl;
    cout << "��� ����, ����� ��������� ������� �������: ������� 4"<<endl;
    cout << "��� ����, ����� ������� 5"<<endl;
}
void messege_mass()
{
    cout << "��� ����, ����� ��������� ������: ������� 1"<<endl;
    cout << "��� ����, ����� ��������� ����������: ������� 2"<<endl;
    cout << "��� ����, ����� ��������� ��������: ������� 3"<<endl;
    cout << "��� ����, ����� ��������� �����: ������� 4"<<endl;
    cout << "��� ����, ����� � ������� ����: ������� 5"<<endl;
}
void messege_distance()
{
    cout << "��� ����, ����� ��������� ��������� � : ������� 1"<<endl;
    cout << "��� ����, ����� ��������� ����������: ������� 2"<<endl;
    cout << "��� ����, ����� ��������� �����: ������� 3"<<endl;
    cout << "��� ����, ����� ��������� ���������: ������� 4"<<endl;
    cout << "��� ����, ����� � ������� ����: ������� 5"<<endl;
}
void messege_pressure()
{
    cout << "��� ����, ����� ��������� ����������� � : ������� 1"<<endl;
    cout << "��� ����, ����� ��������� �������: ������� 2"<<endl;
    cout << "��� ����, ����� ��������� �����������: ������� 3"<<endl;
    cout << "��� ����, ����� ��������� ����������� ��������: ������� 4"<<endl;
    cout << "��� ����, ����� � ������� ����: ������� 5"<<endl;
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


        if(num == 1)
        {
            messege_distance();

            if(num == 1)
            {
                showdistance("���������");
                messege_distance();
            }

            if(num == 2)
            {
                showdistance("����������");
                messege_distance();
            }
            if(num == 3)
            {
                showdistance("�����");
                messege_distance();
            }
            if(num == 4)
            {
                showdistance("���������");
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



        if(num == 2)
        {
            messege_mass();
            while(1)
            {
                cin >> num;
                if(num == 1)
                {
                    MassGRAMM( GRAMMinKG, GRAMMinCENTN,  GRAMMinTONN);
                    messege_mass();
                }

                if(num == 2)
                {
                    MassKG( KGinGRAMM, KGinCENTN,  KGinTONN);
                    messege_mass();
                }
                if(num == 3)
                {
                    MassCENTN( CENTNinGRAMM, CENTNinKG,  CENTNinTONN);
                    messege_mass();
                }
                if(num == 4)
                {
                    MassTONN( TONNinGRAMM, TONNinCENTN,  TONNinKG);
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
        if(num == 3)
        {
            messege_pressure();
            while(1)
            {
                cin >> num;
                if(num == 1)
                {
                    showPressure("������������");
                    messege_pressure();
                }

                if(num == 2)
                {
                    showPressure("�������");
                    messege_pressure();
                }
                if(num == 3)
                {
                    showPressure("�����������");
                    messege_pressure();
                }
                if(num == 4)
                {
                    showPressure("�� �������� ������");
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




        if(num == 5)
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

