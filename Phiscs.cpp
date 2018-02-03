#include <cstdlib>
#include <iostream>
#include <clocale>
#include <windows.h>
#include <locale>
#include "data phisics.cpp";

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


const int KOL_VO_SOOBSHENII = 100;




struct FunnyMessage
{
    unitypes type;  //Что за величина
    double minValue;    //От куда
    double maxValue;//до куда
    const char* text;   //Сообщение
    const char* textPoslePausy;   //Сообщение с задержкой
    //char text1[100];
};

FunnyMessage funny_messages[KOL_VO_SOOBSHENII];




bool showenergy(const char* unit)
{
    double coef;
    char message[200];

    if (strcmp(unit, "килоДжоули") == 0)
    {
        coef = 1/CEF_KDZH;
        strcpy(message, "Укажите давление в клоДжоулях:");
    }
    else if (strcmp(unit, "Джоули") == 0)
    {
        coef = 1/CEF_DZH ;
        strcpy(message, "Укажите давление в Джоулях:");
    }
    else if (strcmp(unit, "Килокалории") == 0)
    {
        coef = 1/CEF_KK;
        strcpy(message, "Укажите давление в Килокалориях:");
    }
    else if (strcmp(unit, "Фут-фунт") == 0)
    {
        coef = 1/CEF_FF;
        strcpy(message, "Укажите давление в фут-фунтах:");
    }

    cout << message << endl;
    cin >> energyVvod;

    cout << "В килоДжоулях:"        << coef * CEF_KDZH * energyVvod << endl;
    cout << "В Джоулях:"            << coef * CEF_DZH * energyVvod << endl;
    cout << "В Килокалориях:"       << coef * CEF_KK * energyVvod << endl;
    cout << "В фут-фунтах:"         << coef * CEF_FF * energyVvod << endl;
}
bool showtempr(const char* unit)
{
    double coef;
    char message[200];

    if (strcmp(unit, "Цельсий") == 0)
    {
        coef = 1/CEF_CEL;
        strcpy(message, "Укажите температуру в градусах Цельсиях:");
    }
    else if (strcmp(unit, "Фаренгейт") == 0)
    {
        coef = 1/CEF_FAR ;
        strcpy(message, "Укажите температуру в градусах Фаренгейта:");
    }
    else if (strcmp(unit, "Кельвин") == 0)
    {
        coef = 1/CEF_KELVN;
        strcpy(message, "Укажите температуру в Кельвинах:");
    }


    cout << message << endl;
    cin >> temprVvod;

    cout << "В градусах Цельсия:"    << coef * CEF_CEL * temprVvod << endl;
    cout << "В градусах Фаренгейта:" << coef * CEF_FAR * temprVvod << endl;
    cout << "В Кельвинах:"           << coef * CEF_KELVN * temprVvod << endl;
}

bool showStrench(const char* unit)
{
    double coef;
    char message[200];

    if (strcmp(unit, "килоНьютон") == 0)
    {
        coef = 1/CEF_MN;
        strcpy(message, "Укажите силу в килньютонах:");
    }
    else if (strcmp(unit, "Ньютон") == 0)
    {
        coef = 1/CEF_N;
        strcpy(message, "Укажите силу ньютоны:");
    }

    cout << message << endl;
    cin >> strenchVvod;

    cout << "В килньютонах:"          << coef * CEF_MN * strenchVvod << endl;
    cout << "В ньютоны:"              << coef * CEF_N * strenchVvod << endl;
}

bool showPressure(const char* unit)
{
    double coef;
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
    double coef;
    char message[200];

    if (strcmp(unit, "Милиметры") == 0)
    {
        coef = 1/CEF_MM;
        strcpy(message, "Укажите расстояния в милиметрах:");
    }
    else if (strcmp(unit, "Сантиметры") == 0)
    {
        coef = 1/CEF_CM;
        strcpy(message, "Укажите расстояния в сантиметрах:");
    }
    else if (strcmp(unit, "Метры") == 0)
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

    cout << "В Милиметрах:"<<  coef * CEF_MM  * distanceVvod << endl;
    cout << "В Сантиметрах:"<< coef * CEF_CM  * distanceVvod << endl;
    cout << "В Метрах:"<<      coef * CEF_M  * distanceVvod << endl;
    cout << "В Километрах:"<<  coef * CEF_KM  * distanceVvod << endl;
}

bool showmass(const char* unit)
{
    double coef;
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

    cout << "В граммах:"<<     coef * CEF_GM * massVvod << endl;
    cout << "В килограммах:"<< coef * CEF_KG * massVvod << endl;
    cout << "В центнерах:"<<   coef * CEF_CENT * massVvod << endl;
    cout << "В тоннах:"<<      coef * CEF_TON * massVvod << endl;



}

bool showtime(const char* unit)
{
    double coef;
    char message[200];

    if (strcmp(unit, "Секунды") == 0)
    {
        coef = 1/CEF_SEC;
        strcpy(message, "Укажите время в секундах:");
    }
    else if (strcmp(unit, "Минуты:") == 0)
    {
        coef = 1/CEF_MIN;
        strcpy(message, "Укажите время в минутах:");
    }
    else if (strcmp(unit, "Часы:") == 0)
    {
        coef = 1/CEF_HOUR;
        strcpy(message, "Укажите время в часах:");
    }
    else if (strcmp(unit, "Сутки") == 0)
    {
        coef = 1/CEF_DAY;
        strcpy(message, "Укажите время в сутках:");
    }

    cout << message << endl;
    cin >> timeVvod;

    cout << "В секундах:"<< coef * CEF_SEC * timeVvod << endl;
    cout << "В минутах:"<< coef * CEF_MIN * timeVvod << endl;
    cout << "В часах:"<< coef *CEF_HOUR * timeVvod << endl;
    cout << "В сутках:"<< coef *CEF_DAY * timeVvod << endl;
}

void message_menu()
{
    cout << "Для того, чтобы перевести единицы длины: нажмите 1"<<endl;
    cout << "Для того, чтобы перевести единицы веса: нажмите 2"<<endl;
    cout << "Для того, чтобы перевести единицы давления: нажмите 3"<<endl;
    cout << "Для того, чтобы перевести единицы времени: нажмите 4"<<endl;
    cout << "Для того, чтобы перевести единицы силы: нажмите 5"<<endl;
    cout << "Для того, чтобы перевести единицы энергии: нажмите 6"<<endl;
    cout << "Для того, чтобы перевести единицы температуры: нажмите 7"<<endl;
    cout << "В мире животных....(введите 8)"<<endl;
    cout << "Для того, чтобы выйти нажмите 9"<<endl;
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
    cout << "Для того, чтобы перевести секунды: нажмите 1"<<endl;
    cout << "Для того, чтобы перевести минуты: нажмите 2"<<endl;
    cout << "Для того, чтобы перевести часы: нажмите 3"<<endl;
    cout << "Для того, чтобы перевести сутки: нажмите 4"<<endl;
    cout << "Для того, чтобы выйти в главное меню: нажмите 5"<<endl;
}

void messege_strench()
{
    cout << "Для того, чтобы перевести килоНьютон: нажмите 1"<<endl;
    cout << "Для того, чтобы перевести ньютон: нажмите 2"<<endl;
}

void messege_energy()
{
    cout << "Для того, чтобы перевести килоДжоули: нажмите 1"<<endl;
    cout << "Для того, чтобы перевести Джоули: нажмите 2"<<endl;
    cout << "Для того, чтобы перевести Килокалории: нажмите 3"<<endl;
    cout << "Для того, чтобы перевести Фут-фунт: нажмите 4"<<endl;
    cout << "Для того, чтобы выйти в главное меню: нажмите 5"<<endl;
}
void messege_tempr()
{
    cout << "Для того, чтобы перевести градусы Цельсия: нажмите 1"<<endl;
    cout << "Для того, чтобы перевести градусы Фаренгейта: нажмите 2"<<endl;
    cout << "Для того, чтобы перевести Кельвина: нажмите 3"<<endl;
    cout << "Для того, чтобы выйти в главное меню: нажмите 5"<<endl;
}
bool show_my_mass()
{
    int vvod_my_mass;

    cout << "Укажите свой вес в килограммах (max 20000)"  << endl;





            cin >> vvod_my_mass;


            for (int message_number = 0; message_number < KOL_VO_SOOBSHENII; message_number++)
            {
                if (funny_messages[message_number].type == MASS and
                    funny_messages[message_number].minValue <= vvod_my_mass and
                    funny_messages[message_number].maxValue >= vvod_my_mass)
                {
                    cout << funny_messages[message_number].text;
                    for (int symbol = 0; symbol < strlen(funny_messages[message_number].textPoslePausy); symbol++)
                    {
                        cout << funny_messages[message_number].textPoslePausy[symbol];
                        Sleep(25);
                    }

                }
            }

    cout <<"" <<endl;
    message_menu();
}
void choosen()
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

                if (num == SELECTED_INDEX_MM)
                {
                    showdistance("Милиметры");
                }
                else if (num == SELECTED_INDEX_CM)
                {
                    showdistance("Сантиметры");
                }
                else if (num == SELECTED_INDEX_M)
                {
                    showdistance("Метры");
                }
                else if (num == SELECTED_INDEX_KM)
                {
                    showdistance("Километры");
                }
                else if(num == SELECTED_INDEX_BACK)
                {
                    choosen();
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
                    showmass("Граммы");
                }
                else if(num == SELECTED_INDEX_KG)
                {
                    showmass("Килограммы");
                }
                else if(num == SELECTED_INDEX_CENT)
                {
                    showmass("Центнеры");
                }
                else if(num == SELECTED_INDEX_TONN)
                {
                    showmass("Тонны");
                }
                else if(num == SELECTED_INDEX_BACK)
                {
                    choosen();
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
                    showPressure("миллиПаскаль");
                }
                else if (num == SELECTED_INDEX_PA)
                {
                    showPressure("Паскаль");
                }
                else if(num == SELECTED_INDEX_KPA)
                {
                    showPressure("килоПаскаль");
                }
                else if(num == SELECTED_INDEX_MMRTST)
                {
                    showPressure("мм ртутного столба");
                }
                else if(num == SELECTED_INDEX_BACK)
                {
                    choosen();
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
                    showtime("Секунды");
                }
                else if(num == SELECTED_INDEX_MIN)
                {
                    showtime("Минуты");
                }
                else if(num == SELECTED_INDEX_HOUR)
                {
                    showtime("Часы");
                }
                else if(num == SELECTED_INDEX_DAY)
                {
                    showtime("Сутки");
                }
                else if(num == SELECTED_INDEX_BACK)
                {
                    choosen();
                }
            }
        }
        //--------------------------------------------
        if(num1 == SELECTED_INDEX_STRENCH)
        {
            while(1)
            {
                messege_strench();
                cin >> num;

                if(num == SELECTED_INDEX_KN)
                {
                    showStrench("килоНьютон");
                }
                else if(num == SELECTED_INDEX_N)
                {
                    showStrench("Ньютон");
                }

                else if(num == SELECTED_INDEX_BACK)
                {
                    choosen();
                }
            }
        }
        //--------------------------------------------
        if(num1 == SELECTED_INDEX_ENERGY)
        {
            while(1)
            {
                messege_energy();
                cin >> num;

                if(num ==SELECTED_INDEX_KDZH)
                {
                    showenergy("килоДжоули");
                }
                else if(num == SELECTED_INDEX_DZH)
                {
                    showenergy("Джоули");
                }
                else if(num == SELECTED_INDEX_KK)
                {
                    showenergy("Килокалории");
                }
                else if(num == SELECTED_INDEX_FF)
                {
                    showenergy("Фут-фунт");
                }
                else if(num == SELECTED_INDEX_BACK)
                {
                    choosen();
                }
            }
        }
        //--------------------------------------------
        if(num1 == SELECTED_INDEX_TEMPR)
        {
            while(1)
            {
                messege_tempr();
                cin >> num;

                if(num ==SELECTED_INDEX_CEL)
                {
                    showtempr("Цельсий");
                }
                else if(num == SELECTED_INDEX_FAR)
                {
                    showtempr("Фаренгейт");
                }
                else if(num == SELECTED_INDEX_KELVN)
                {
                    showtempr("Кельвин");
                }

                else if(num == SELECTED_INDEX_BACK)
                {
                    choosen();
                }
            }
        }

//--------------------------------------------
            if(num1 ==  SELECTED_INDEX_ANIMALS)
      {
                {
                  show_my_mass();
                }
                if(num1 ==  SELECTED_INDEX_EXIT)
                {
                    choosen();
                }

       }
             if(num1 ==  SELECTED_INDEX_EXIT)
      {

              break;
      }




    }
}



int main()
{

    funny_messages[0] = {MASS, 1,3, "","Вы весите как кирпиц"};
    funny_messages[1] = {MASS, 4,8, "","Вы весите как котек (покорми меня)" };
    funny_messages[2] = {MASS, 9,44, "","Средний вес собакена (ну давай, вставай уже, хватит спац!)"};
    funny_messages[3] = {MASS, 45, 79, "","Вы весите как овца! беее"};
    funny_messages[4] = {MASS, 80, 80, "","Вы весите как Геннадий Горин (я не хочу умираць)"};
    funny_messages[5]= {MASS, 81, 90, "","Вы весите как Геннадий Горин (после холодильника) что вы в нем делали?"};
    funny_messages[6] = {MASS, 91,149, "","Вы весите как среднестатистический американец!Хватит ЖРАЦЬ!(свободная касса!)"};
    funny_messages[7] = {MASS, 150, 190, "","(Карртаво) Вы весите как  тигррр ррррр!" };
    funny_messages[8] = {MASS, 191, 800, ""," Средний вес медведя   (не буди во мне зверя!)" };
    funny_messages[9] = {MASS, 801, 2100, ""," Я Носорог,  насажу тебя на рог)00))))" };
    funny_messages[10] = {MASS, 2101, 5400, "","Вес слона слон(а я большой!! я толстенький и теплый!)"};
    funny_messages[11] = {MASS, 5401, 20000, "","Вот такой разброс в весе у акулы (я не умею говориць)0)0))я хочу жраць))00))"};

    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

    system("chcp 1251>nul");

    choosen();


    system("pause>nul");
    return 0;
}
