#include <cstdlib>
#include <iostream>
#include <clocale>
#include <windows.h>
#include <locale>
#include "data phisics.cpp"

using namespace std;


bool PressureMMrtS(double MMrtSinkPA,double MMrtSnMPA, double MMrtSinPA)
{



    cout << "������� ���������� � �������������:"<<endl;
    cout<<"������������:";
    cin>>MMrtS;


    double distMMrtSinkPA=MMrtS*MMrtSinkPA;
    double distMMrtSnMPA=MMrtSnMPA*MMrtS;
    double distMMrtSinPA=MMrtSinPA*MMrtS;



    cout << "�����������:"<<endl;
    cout << "� ��������:"<<distMMrtSinkPA<<endl;
    cout << "� ������������:"<<distMMrtSinkPA<<endl;
    cout << "� ��������:"<<distMMrtSinPA<<endl;

}
bool PressureMPA(double MPAinkPA,double MPAinPA, double MPAinMMrtS)
{



    cout << "������� ���������� � �������������:"<<endl;
    cout<<"������������:";
    cin>>MPA;


    double distMPAinkPA=MPA*MPAinkPA;
    double distMPAinPA=MPAinPA*MPA;
    double distMPAinMMrtS=MPAinMMrtS*MPA;



    cout << "�����������:"<<endl;
    cout << "� ��������:"<<distMPAinPA<<endl;
    cout << "� ������������:"<<distMPAinkPA<<endl;
    cout << "� ��. �������� ������:"<<distMPAinMMrtS<<endl;

}
bool PressurekPA(double kPAinPA,double kPAinMPA, double kPAinMMrtS)
{



    cout << "������� ���������� � ������������:"<<endl;
    cout<<"�����������:";
    cin>>kPA;


    double distkPAinPAM=kPA*kPAinPA;
    double distkPAinMPA=PAinMPA*kPA;
    double distkPAinMMrtS=kPAinMMrtS*kPA;



    cout << "�����������:"<<endl;
    cout << "� ��������:"<<distkPAinPAM<<endl;
    cout << "� �������������:"<<distkPAinMPA<<endl;
    cout << "� ��. �������� ������:"<<distkPAinMMrtS<<endl;

}
bool PressurePA(double PAinkPA,double PAinMPA, double PAinMMrtS)
{



    cout << "������� ���������� � ��������:"<<endl;
    cout<<"�������:";
    cin>>PA;


    double distPAinkPA=PA*PAinkPA;
    double distPAinMPA=PAinMPA*PA;
    double distkPAinMMrtS=PAinMMrtS*PA;



    cout << "�������:"<<endl;
    cout << "� ������������:"<<distPAinkPA<<endl;
    cout << "� �������������:"<<distPAinMPA<<endl;
    cout << "� ��. �������� ������:"<<distkPAinMMrtS<<endl;

}
bool DistanceCM(double CMinMM,double CMinM, double CMinKM)
{



    cout << "������� ���������� � �����������:"<<endl;
    cout<<"����������:";
    cin>>CM;


    double distCMinMM=CM*CMinMM;
    double distCMinM=CMinM*CM;
    double distCMinKM=CMinKM*CM;



    cout << "����������:"<<endl;
    cout << "� �����������:"<<distCMinMM<<endl;
    cout << "� ������:"<<distCMinM<<endl;
    cout << "� ����������:"<<distCMinKM<<endl;

}
bool DistanceMM(double MMinCM,double MMinM, double MMinKM)
{



    cout << "������� ���������� � ����������:"<<endl;
    cout<<"���������:";
    cin>>MM;


    double distMMinCM=MM*MMinCM;
    double distMMinM=MMinM*MM;
    double distMMinKM=MMinKM*MM;



    cout << "���������:"<<endl;
    cout << "� �����������:"<<distMMinCM<<endl;
    cout << "� ������:"<<distMMinM<<endl;
    cout << "� ����������:"<<distMMinKM<<endl;

}
bool DistanceM(double MinMM,double MinCM, double MinKM)
{



    cout << "������� ���������� � ������:"<<endl;
    cout<<"�����:";
    cin>>M;


    double distMinMM=M*MinMM;
    double distMinCM=CMinM*M;
    double distMinKM=CMinKM*M;



    cout << "�����:"<<endl;
    cout << "� �����������:"<<distMinMM<<endl;
    cout << "� �����������:"<<distMinCM<<endl;
    cout << "� ����������:"<<distMinKM<<endl;

}
bool DistanceKM(double KMinMM,double KMinCM, double KMinM)
{



    cout << "������� ���������� � ����������:"<<endl;
    cout<<"���������:";
    cin>>KM;


    double distKMinMM=KM*KMinMM;
    double distKMinM=KMinCM*KM;
    double distKMinCM=KMinM*KM;



    cout << "���������:"<<endl;
    cout << "� �����������:"<<distKMinMM<<endl;
    cout << "� �����������:"<<distKMinCM<<endl;
    cout << "� ������:"<<distKMinM<<endl;


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
                DistanceMM( MMinCM, MMinM,  MMinKM);
                messege_distance();
            }

            if(num == 2)
            {
                DistanceCM( CMinMM, CMinM,  CMinKM);
                messege_distance();
            }
            if(num == 3)
            {
                DistanceM( MinMM, MinCM,  MinKM);
                messege_distance();
            }
            if(num == 4)
            {
                DistanceKM( KMinMM, KMinCM,  KMinM);
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
                    PressureMPA( MPAinkPA, MPAinPA,  MPAinMMrtS);
                    messege_pressure();
                }

                if(num == 2)
                {
                    PressurekPA( kPAinPA, kPAinMPA,  kPAinMMrtS);
                    messege_pressure();
                }
                if(num == 3)
                {
                    PressurePA( PAinkPA, PAinMPA,  PAinMMrtS);
                    messege_pressure();
                }
                if(num == 4)
                {
                    PressureMMrtS( MMrtSinkPA, MMrtSnMPA,  MMrtSinPA);
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

