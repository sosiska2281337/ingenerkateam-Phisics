#include <cstdlib>
#include <iostream>
#include <clocale>
#include <windows.h>
#include <locale>
#include "data phisics.cpp"

using namespace std;


bool PressureMMrtS(double MMrtSinkPA,double MMrtSnMPA, double MMrtSinPA)
{



    cout << "Укажите расстояния в миллиПаскалях:"<<endl;
    cout<<"миллиПаскаль:";
    cin>>MMrtS;


    double distMMrtSinkPA=MMrtS*MMrtSinkPA;
    double distMMrtSnMPA=MMrtSnMPA*MMrtS;
    double distMMrtSinPA=MMrtSinPA*MMrtS;



    cout << "милиПаскаль:"<<endl;
    cout << "В Паскалях:"<<distMMrtSinkPA<<endl;
    cout << "В КилоПаскалях:"<<distMMrtSinkPA<<endl;
    cout << "В Паскалях:"<<distMMrtSinPA<<endl;

}
bool PressureMPA(double MPAinkPA,double MPAinPA, double MPAinMMrtS)
{



    cout << "Укажите расстояния в миллиПаскалях:"<<endl;
    cout<<"миллиПаскаль:";
    cin>>MPA;


    double distMPAinkPA=MPA*MPAinkPA;
    double distMPAinPA=MPAinPA*MPA;
    double distMPAinMMrtS=MPAinMMrtS*MPA;



    cout << "милиПаскаль:"<<endl;
    cout << "В Паскалях:"<<distMPAinPA<<endl;
    cout << "В КилоПаскалях:"<<distMPAinkPA<<endl;
    cout << "В мм. Ртутного столба:"<<distMPAinMMrtS<<endl;

}
bool PressurekPA(double kPAinPA,double kPAinMPA, double kPAinMMrtS)
{



    cout << "Укажите расстояния в килоПаскалях:"<<endl;
    cout<<"килоПаскаль:";
    cin>>kPA;


    double distkPAinPAM=kPA*kPAinPA;
    double distkPAinMPA=PAinMPA*kPA;
    double distkPAinMMrtS=kPAinMMrtS*kPA;



    cout << "килоПаскаль:"<<endl;
    cout << "В Паскалях:"<<distkPAinPAM<<endl;
    cout << "В МиллиПаскалях:"<<distkPAinMPA<<endl;
    cout << "В мм. Ртутного столба:"<<distkPAinMMrtS<<endl;

}
bool PressurePA(double PAinkPA,double PAinMPA, double PAinMMrtS)
{



    cout << "Укажите расстояния в Паскалях:"<<endl;
    cout<<"Паскаль:";
    cin>>PA;


    double distPAinkPA=PA*PAinkPA;
    double distPAinMPA=PAinMPA*PA;
    double distkPAinMMrtS=PAinMMrtS*PA;



    cout << "Паскаль:"<<endl;
    cout << "В килоПаскалях:"<<distPAinkPA<<endl;
    cout << "В МиллиПаскалях:"<<distPAinMPA<<endl;
    cout << "В мм. Ртутного столба:"<<distkPAinMMrtS<<endl;

}
bool DistanceCM(double CMinMM,double CMinM, double CMinKM)
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
bool DistanceMM(double MMinCM,double MMinM, double MMinKM)
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
bool DistanceM(double MinMM,double MinCM, double MinKM)
{



    cout << "Укажите расстояния в метрах:"<<endl;
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
bool DistanceKM(double KMinMM,double KMinCM, double KMinM)
{



    cout << "Укажите расстояния в километрах:"<<endl;
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
    cout<<"Граммы:";
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
    cout << "Для того, чтобы перевести Атмосферное давление: нажмите 4"<<endl;
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

