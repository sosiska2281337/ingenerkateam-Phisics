#include <iostream>
#include <cstdlib>
#include <clocale>
#include <windows.h>
#include <locale>

using namespace std;

int CM, M, DM, MM, KM;
int GRAMM, KG, TONN, CENTN;

double num;

const double GRAMMinKG = 0.001;
const double GRAMMinCENTN = 0.0001;
const double GRAMMinTONN = 0.000001;

const double KGinGRAMM = 1000;
const double KGinCENTN = 0.01;
const double KGinTONN = 0.001;

const double CENTNinGRAMM = 10000;
const double CENTNinKG = 0.01;
const double CENTNinTONN = 0.00001;

const double TONNinKG = 1000;
const double TONNinCENTN = 10000;
const double TONNinGRAMM = 1000000;

const double MMinCM = 0.1;
const double MMinM = 0.001;
const double MMinKM = 0.00001;

const double CMinMM = 10;
const double CMinM = 0.01;
const double CMinKM = 0.0001;

const double MinMM = 1000;
const double MinCM = 100;
const double MinKM = 0.001;

const double KMinMM = 100000;
const double KMinCM = 10000;
const double KMinM = 1000;




bool DistanceCM(double CMinMM ,double CMinM, double CMinKM)
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
bool DistanceMM(double MMinCM ,double MMinM, double MMinKM)
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
bool DistanceM(double MinMM ,double MinCM, double MinKM)
{



    cout << "������� ���������� � �����������:"<<endl;
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
bool DistanceKM(double KMinMM ,double KMinCM, double KMinM)
{



    cout << "������� ���������� � �����������:"<<endl;
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

void choosen(double CMinMM,double CMinM, double CMinKM,double
             MinMM,double MinCM, double MinKM,double
             MMinCM,double MMinM, double MiMnKM,double
             KMinCM,double KMinM, double KMiMnMM,double
             TONNinGRAMM,double TONNinCENTN, double TONNinKG,
            double CENTNinGRAMM,double CENTNinKG, double CENTNinTONN,
             double KGinGRAMM,double KGinCENTN, double KGinTONN, double
             GRAMMinKG,double GRAMMinCENTN, double GRAMMinTONN)
{
   cout << "��� ����, ����� ��������� ������� �����: ������� 1"<<endl;
   cout << "��� ����, ����� ��������� ����������: ������� 2"<<endl;
   cout << "��� ����, ����� ������� 3"<<endl;

   while(1)
   {
      cin >> num;


   if(num == 1)
   {
   cout << "��� ����, ����� ��������� ��������� � : ������� 1"<<endl;
   cout << "��� ����, ����� ��������� ����������: ������� 2"<<endl;
   cout << "��� ����, ����� ��������� �����: ������� 3"<<endl;
   cout << "��� ����, ����� ��������� ���������: ������� 4"<<endl;
   cout << "��� ����, ����� ������� 5"<<endl;
     while(1)
     {
         cin >> num;

         if(num == 1)
         {
            DistanceMM( MMinCM, MMinM,  MMinKM);
   cout << "��� ����, ����� ��������� ��������� � : ������� 1"<<endl;
   cout << "��� ����, ����� ��������� ����������: ������� 2"<<endl;
   cout << "��� ����, ����� ��������� �����: ������� 3"<<endl;
   cout << "��� ����, ����� ��������� ���������: ������� 4"<<endl;
   cout << "��� ����, ����� ������� 5"<<endl;
         }

         if(num == 2)
         {
            DistanceCM( CMinMM, CMinM,  CMinKM);
               cout << "��� ����, ����� ��������� ��������� � : ������� 1"<<endl;
   cout << "��� ����, ����� ��������� ����������: ������� 2"<<endl;
   cout << "��� ����, ����� ��������� �����: ������� 3"<<endl;
   cout << "��� ����, ����� ��������� ���������: ������� 4"<<endl;
   cout << "��� ����, ����� ������� 5"<<endl;
         }
         if(num == 3)
         {
            DistanceM( MinMM, MinCM,  MinKM);
   cout << "��� ����, ����� ��������� ��������� � : ������� 1"<<endl;
   cout << "��� ����, ����� ��������� ����������: ������� 2"<<endl;
   cout << "��� ����, ����� ��������� �����: ������� 3"<<endl;
   cout << "��� ����, ����� ��������� ���������: ������� 4"<<endl;
   cout << "��� ����, ����� ������� 5"<<endl;
         }
         if(num == 4)
         {
            DistanceKM( KMinMM, KMinCM,  KMinM);
               cout << "��� ����, ����� ��������� ��������� � : ������� 1"<<endl;
   cout << "��� ����, ����� ��������� ����������: ������� 2"<<endl;
   cout << "��� ����, ����� ��������� �����: ������� 3"<<endl;
   cout << "��� ����, ����� ��������� ���������: ������� 4"<<endl;
   cout << "��� ����, ����� ������� 5"<<endl;
         }
         if(num == 5)
         {
          GenerateConsoleCtrlEvent(CTRL_BREAK_EVENT,0);
         }

     }



   }





        //MassKG( KGinGRAMM, KGinCENTN,  KGinTONN);



   if(num == 2)
   {
   cout << "��� ����, ����� ��������� ������: ������� 1"<<endl;
   cout << "��� ����, ����� ��������� ����������: ������� 2"<<endl;
   cout << "��� ����, ����� ��������� ��������: ������� 3"<<endl;
   cout << "��� ����, ����� ��������� �����: ������� 4"<<endl;
   cout << "��� ����, ����� ������� 5"<<endl;
     while(1)
     {
         cin >> num;
         if(num == 1)
         {
            MassGRAMM( GRAMMinKG, GRAMMinCENTN,  GRAMMinTONN);
   cout << "��� ����, ����� ��������� ��������� � : ������� 1"<<endl;
   cout << "��� ����, ����� ��������� ����������: ������� 2"<<endl;
   cout << "��� ����, ����� ��������� �����: ������� 3"<<endl;
   cout << "��� ����, ����� ��������� ���������: ������� 4"<<endl;
   cout << "��� ����, ����� ������� 5"<<endl;
         }

         if(num == 2)
         {
            MassKG( KGinGRAMM, KGinCENTN,  KGinTONN);
   cout << "��� ����, ����� ��������� ��������� � : ������� 1"<<endl;
   cout << "��� ����, ����� ��������� ����������: ������� 2"<<endl;
   cout << "��� ����, ����� ��������� �����: ������� 3"<<endl;
   cout << "��� ����, ����� ��������� ���������: ������� 4"<<endl;
   cout << "��� ����, ����� ������� 5"<<endl;
         }
         if(num == 3)
         {
            MassCENTN( CENTNinGRAMM, CENTNinKG,  CENTNinTONN);
   cout << "��� ����, ����� ��������� ��������� � : ������� 1"<<endl;
   cout << "��� ����, ����� ��������� ����������: ������� 2"<<endl;
   cout << "��� ����, ����� ��������� �����: ������� 3"<<endl;
   cout << "��� ����, ����� ��������� ���������: ������� 4"<<endl;
   cout << "��� ����, ����� ������� 5"<<endl;
         }
         if(num == 4)
         {
            MassTONN( TONNinGRAMM, TONNinCENTN,  TONNinKG);
   cout << "��� ����, ����� ��������� ��������� � : ������� 1"<<endl;
   cout << "��� ����, ����� ��������� ����������: ������� 2"<<endl;
   cout << "��� ����, ����� ��������� �����: ������� 3"<<endl;
   cout << "��� ����, ����� ��������� ���������: ������� 4"<<endl;
   cout << "��� ����, ����� ������� 5"<<endl;
         }
         if(num == 5)
         {
          GenerateConsoleCtrlEvent(CTRL_BREAK_EVENT,0);
         }

     }

   }


    if(num == 3)
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
            GRAMMinKG, GRAMMinCENTN,  GRAMMinKG
           );



    system("pause>nul");
    return 0;
}

