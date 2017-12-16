#include <iostream>
#include <cstdlib>
#include <clocale>
#include <windows.h>
#include <locale>
using namespace std;

int CM, M, DM, MM, KM;
int GRAM, KG, TONN, CENTN;

double num;

const double CMinMM = 0.1;
const double CMinDM = 10;
const double CMinKM = 1000;

const double KGinGRAMM = 0.001;
const double KGinCENTN = 100;
const double KGinTONN = 1000;


bool DistanceCM(double CMinMM ,double CMinDM, double CMinKM)
{



    cout << "Укажите расстояния в сантиметрах:"<<endl;
    cout<<"Сантиметры:";
    cin>>CM;


    double distCMinMM=CM*CMinMM;
    double distCMinDM=CMinDM*CM;
    double distCMinKM=CMinKM*CM;



    cout << "Сантиметры:"<<endl;
    cout << "В милимметрах:"<<distCMinMM<<endl;
    cout << "В дациметрах:"<<distCMinDM<<endl;
    cout << "В километрах:"<<distCMinKM<<endl;

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
    cout << "В граммах:"<<distKGinGRAMM<<endl;
    cout << "В сантиметрах:"<<KGinCENTN<<endl;
    cout << "В тоннах:"<<distKGinTONN<<endl;


}
void choosen(double MMinCM,double DMinCM, double KMinCM,double KGinGRAMM,double KGinCENTN, double KGinTONN)
{
   cout << "Для того, чтобы перевести сантиметры: нажмите 1"<<endl;
   cout << "Для того, чтобы перевести Килограммы: нажмите 2"<<endl;
   cout << "Для того, выйти нажмите 3"<<endl;
   while(1)
   {
      cin >> num;


   if(num == 1)
   {
     DistanceCM( MMinCM, DMinCM,  KMinCM);
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
    choosen(  CMinMM,  CMinDM,   CMinKM,  KGinGRAMM,  KGinCENTN,   KGinTONN);





    system("pause>nul");
    return 0;
}

