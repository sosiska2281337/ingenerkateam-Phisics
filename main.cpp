#include <iostream>
#include <cstdlib>
#include <clocale>
#include <windows.h>
#include <locale>

using namespace std;

int CM, M, DM, MM, KM;
int GRAM, KG, TONN, CENTN;

double num;

const double CMinMM = 10;
const double CMinM = 0.01;
const double CMinKM = 0.001;

const double KGinGRAMM = 1000;
const double KGinCENTN = 0.01;
const double KGinTONN = 0.001;


bool DistanceCM(double CMinMM ,double CMinDM, double CMinKM)
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
void choosen(double CMinMM,double CMinM, double CMinKM,double KGinGRAMM,double KGinCENTN, double KGinTONN)
{
   cout << "Для того, чтобы перевести сантиметры: нажмите 1"<<endl;
   cout << "Для того, чтобы перевести Килограммы: нажмите 2"<<endl;
   cout << "Для того, выйти нажмите 3"<<endl;
   while(1)
   {
      cin >> num;


   if(num == 1)
   {
     DistanceCM( CMinMM, CMinM,  CMinKM);
   cout << "Для того, чтобы перевести сантиметры: нажмите 1"<<endl;
   cout << "Для того, чтобы перевести Килограммы: нажмите 2"<<endl;
   cout << "Для того, выйти нажмите 3"<<endl;
   }




    if(num == 2)
   {
     MassKG( KGinGRAMM, KGinCENTN,  KGinTONN);
   cout << "Для того, чтобы перевести сантиметры: нажмите 1"<<endl;
   cout << "Для того, чтобы перевести Килограммы: нажмите 2"<<endl;
   cout << "Для того, выйти нажмите 3"<<endl;
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
    choosen(CMinMM,  CMinM,   CMinKM,  KGinGRAMM,  KGinCENTN,   KGinTONN);



    system("pause>nul");
    return 0;
}

