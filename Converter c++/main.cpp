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



    cout << "Укажите расстояния в сантиметрах:"<<endl;
    cout<<"Сантиметры:";
    cin>>CM;


    double distCMinMM=CM*CMinMM;
    double distCMinM=CMinM*CM;
    double distCMinKM=CMinKM*CM;



    cout << "Сантиметры:"<<endl;
    cout << "В Милимметрах:"<<distCMinMM<<endl;
    cout << "В Метрах:"<<distCMinM<<endl;
    cout << "В Километрах:"<<distCMinKM<<endl;

}
bool DistanceMM(double MMinCM ,double MMinM, double MMinKM)
{



    cout << "Укажите расстояния в милиметрах:"<<endl;
    cout<<"Милиметры:";
    cin>>MM;


    double distMMinCM=MM*MMinCM;
    double distMMinM=MMinM*MM;
    double distMMinKM=MMinKM*MM;



    cout << "Милиметры:"<<endl;
    cout << "В Сантиметрах:"<<distMMinCM<<endl;
    cout << "В Метрах:"<<distMMinM<<endl;
    cout << "В Километрах:"<<distMMinKM<<endl;

}
bool DistanceM(double MinMM ,double MinCM, double MinKM)
{



    cout << "Укажите расстояния в сантиметрах:"<<endl;
    cout<<"Метры:";
    cin>>M;


    double distMinMM=M*MinMM;
    double distMinCM=CMinM*M;
    double distMinKM=CMinKM*M;



    cout << "Метры:"<<endl;
    cout << "В Милимметрах:"<<distMinMM<<endl;
    cout << "В Сантиметрах:"<<distMinCM<<endl;
    cout << "В Километрах:"<<distMinKM<<endl;

}
bool DistanceKM(double KMinMM ,double KMinCM, double KMinM)
{



    cout << "Укажите расстояния в сантиметрах:"<<endl;
    cout<<"Километры:";
    cin>>KM;


    double distKMinMM=KM*KMinMM;
    double distKMinM=KMinCM*KM;
    double distKMinCM=KMinM*KM;



    cout << "Километры:"<<endl;
    cout << "В Милимметрах:"<<distKMinMM<<endl;
    cout << "В Сантиметрах:"<<distKMinCM<<endl;
    cout << "В Метрах:"<<distKMinM<<endl;


}
bool MassGRAMM(double GRAMMinKG,double GRAMMinCENTN, double GRAMMinTONN)
{



    cout << "Укажите массу в граммах:"<<endl;
    cout<<"граммы:";
    cin>>GRAMM;


    double distGRAMMinKG=GRAMM*GRAMMinKG;
    double distGRAMMinCENTN=GRAMMinCENTN*GRAMM;
    double distGRAMMinTONN=GRAMMinTONN*GRAMM;


    cout << "Граммы:"<<endl;
    cout << "В Килограммах:"<<distGRAMMinKG<<endl;
    cout << "В Центнерах:"<<distGRAMMinCENTN<<endl;
    cout << "В Тоннах:"<<distGRAMMinTONN<<endl;


}
bool MassKG(double KGinGRAMM,double KGinCENTN, double KGinTONN)
{



    cout << "Укажите массу в килограммах:"<<endl;
    cout<<"Килограммы:";
    cin>>KG;


    double distKGinGRAMM=KG*KGinGRAMM;
    double distKGinCENTN=KGinCENTN*KG;
    double distKGinTONN=KGinTONN*KG;


    cout << "Килограммы:"<<endl;
    cout << "В Граммах:"<<distKGinGRAMM<<endl;
    cout << "В Центнерах::"<<distKGinCENTN<<endl;
    cout << "В Тоннах:"<<distKGinTONN<<endl;


}
bool MassCENTN(double CENTNinGRAMM,double CENTNinKG, double CENTNinTONN)
{



    cout << "Укажите массу в центнерах:"<<endl;
    cout<<"Центнеры:";
    cin>>CENTN;


    double distCENTNinGRAMM=CENTN*CENTNinGRAMM;
    double distCENTNinKG=CENTNinKG*CENTN;
    double distCENTNinTONN=CENTNinTONN*CENTN;


    cout << "Центнеры:"<<endl;
    cout << "В Граммах:"<<distCENTNinGRAMM<<endl;
    cout << "В Килограммах:"<<distCENTNinKG<<endl;
    cout << "В Тоннах:"<<distCENTNinTONN<<endl;


}
bool MassTONN(double TONNinGRAMM,double TONNinCENTN, double TONNinKG)
{



    cout << "Укажите массу в тоннах:"<<endl;
    cout<<"Тонны:";
    cin>>TONN;


    double distTONNinGRAMM=TONN*TONNinGRAMM;
    double distTONNinCENTN=TONNinCENTN*TONN;
    double distTONNinKG=TONNinKG*TONN;


    cout << "Тонны:"<<endl;
    cout << "В Граммах:"<<distTONNinGRAMM<<endl;
    cout << "В Центнерах:"<<distTONNinCENTN<<endl;
    cout << "В Килограммах:"<<distTONNinKG<<endl;


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
   cout << "Для того, чтобы перевести единицы длины: нажмите 1"<<endl;
   cout << "Для того, чтобы перевести Килограммы: нажмите 2"<<endl;
   cout << "Для того, выйти нажмите 3"<<endl;

   while(1)
   {
      cin >> num;


   if(num == 1)
   {
   cout << "Для того, чтобы перевести милиметры в : нажмите 1"<<endl;
   cout << "Для того, чтобы перевести сантиметры: нажмите 2"<<endl;
   cout << "Для того, чтобы перевести метры: нажмите 3"<<endl;
   cout << "Для того, чтобы перевести километры: нажмите 4"<<endl;
   cout << "Для того, выйти нажмите 5"<<endl;
     while(1)
     {
         cin >> num;

         if(num == 1)
         {
            DistanceMM( MMinCM, MMinM,  MMinKM);
   cout << "Для того, чтобы перевести милиметры в : нажмите 1"<<endl;
   cout << "Для того, чтобы перевести сантиметры: нажмите 2"<<endl;
   cout << "Для того, чтобы перевести метры: нажмите 3"<<endl;
   cout << "Для того, чтобы перевести километры: нажмите 4"<<endl;
   cout << "Для того, выйти нажмите 5"<<endl;
         }

         if(num == 2)
         {
            DistanceCM( CMinMM, CMinM,  CMinKM);
               cout << "Для того, чтобы перевести милиметры в : нажмите 1"<<endl;
   cout << "Для того, чтобы перевести сантиметры: нажмите 2"<<endl;
   cout << "Для того, чтобы перевести метры: нажмите 3"<<endl;
   cout << "Для того, чтобы перевести километры: нажмите 4"<<endl;
   cout << "Для того, выйти нажмите 5"<<endl;
         }
         if(num == 3)
         {
            DistanceM( MinMM, MinCM,  MinKM);
   cout << "Для того, чтобы перевести милиметры в : нажмите 1"<<endl;
   cout << "Для того, чтобы перевести сантиметры: нажмите 2"<<endl;
   cout << "Для того, чтобы перевести метры: нажмите 3"<<endl;
   cout << "Для того, чтобы перевести километры: нажмите 4"<<endl;
   cout << "Для того, выйти нажмите 5"<<endl;
         }
         if(num == 4)
         {
            DistanceKM( KMinMM, KMinCM,  KMinM);
               cout << "Для того, чтобы перевести милиметры в : нажмите 1"<<endl;
   cout << "Для того, чтобы перевести сантиметры: нажмите 2"<<endl;
   cout << "Для того, чтобы перевести метры: нажмите 3"<<endl;
   cout << "Для того, чтобы перевести километры: нажмите 4"<<endl;
   cout << "Для того, выйти нажмите 5"<<endl;
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
   cout << "Для того, чтобы перевести граммы: нажмите 1"<<endl;
   cout << "Для того, чтобы перевести килограммы: нажмите 2"<<endl;
   cout << "Для того, чтобы перевести центнеры: нажмите 3"<<endl;
   cout << "Для того, чтобы перевести тонны: нажмите 4"<<endl;
   cout << "Для того, выйти нажмите 5"<<endl;
     while(1)
     {
         cin >> num;
         if(num == 1)
         {
            MassGRAMM( GRAMMinKG, GRAMMinCENTN,  GRAMMinTONN);
   cout << "Для того, чтобы перевести милиметры в : нажмите 1"<<endl;
   cout << "Для того, чтобы перевести сантиметры: нажмите 2"<<endl;
   cout << "Для того, чтобы перевести метры: нажмите 3"<<endl;
   cout << "Для того, чтобы перевести километры: нажмите 4"<<endl;
   cout << "Для того, выйти нажмите 5"<<endl;
         }

         if(num == 2)
         {
            MassKG( KGinGRAMM, KGinCENTN,  KGinTONN);
   cout << "Для того, чтобы перевести милиметры в : нажмите 1"<<endl;
   cout << "Для того, чтобы перевести сантиметры: нажмите 2"<<endl;
   cout << "Для того, чтобы перевести метры: нажмите 3"<<endl;
   cout << "Для того, чтобы перевести километры: нажмите 4"<<endl;
   cout << "Для того, выйти нажмите 5"<<endl;
         }
         if(num == 3)
         {
            MassCENTN( CENTNinGRAMM, CENTNinKG,  CENTNinTONN);
   cout << "Для того, чтобы перевести милиметры в : нажмите 1"<<endl;
   cout << "Для того, чтобы перевести сантиметры: нажмите 2"<<endl;
   cout << "Для того, чтобы перевести метры: нажмите 3"<<endl;
   cout << "Для того, чтобы перевести километры: нажмите 4"<<endl;
   cout << "Для того, выйти нажмите 5"<<endl;
         }
         if(num == 4)
         {
            MassTONN( TONNinGRAMM, TONNinCENTN,  TONNinKG);
   cout << "Для того, чтобы перевести милиметры в : нажмите 1"<<endl;
   cout << "Для того, чтобы перевести сантиметры: нажмите 2"<<endl;
   cout << "Для того, чтобы перевести метры: нажмите 3"<<endl;
   cout << "Для того, чтобы перевести километры: нажмите 4"<<endl;
   cout << "Для того, выйти нажмите 5"<<endl;
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
            GRAMMinKG, GRAMMinCENTN,  GRAMMinKG
           );



    system("pause>nul");
    return 0;
}

