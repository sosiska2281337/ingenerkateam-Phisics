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


bool show_my_mass()
{
    int vvod_my_mass;

    cout << "Укажите свой вес в килограммах"  << endl;

   while(1)
   {


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
                        Sleep(50);
                    }
                    cout << endl;
                }
            }
   }

    cout << "Для того, чтобы выйти в главное меню: нажмите 5"<<endl;
}


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
    cout << "Для того, чтобы выйти нажмите 7"<<endl;
    cout << "Мой вес"<<endl;
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
                if (num == SELECTED_INDEX_PA)
                {
                    showPressure("Паскаль");
                }
                if(num == SELECTED_INDEX_KPA)
                {
                    showPressure("килоПаскаль");
                }
                if(num == SELECTED_INDEX_MMRTST)
                {
                    showPressure("мм ртутного столба");
                }
                if(num == SELECTED_INDEX_BACK)
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
                if(num == SELECTED_INDEX_MIN)
                {
                    showtime("Минуты");
                }
                if(num == SELECTED_INDEX_HOUR)
                {
                    showtime("Часы");
                }
                if(num == SELECTED_INDEX_DAY)
                {
                    showtime("Сутки");
                }
                if(num == SELECTED_INDEX_BACK)
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
                if(num == SELECTED_INDEX_N)
                {
                    showStrench("Ньютон");
                }

                if(num == SELECTED_INDEX_BACK)
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
                if(num == SELECTED_INDEX_DZH)
                {
                    showenergy("Джоули");
                }
                if(num == SELECTED_INDEX_KK)
                {
                    showenergy("Килокалории");
                }
                if(num == SELECTED_INDEX_FF)
                {
                    showenergy("Фут-фунт");
                }
                if(num == SELECTED_INDEX_BACK)
                {
                    choosen();
                }
            }
        }
//--------------------------------------------
        if(num1 ==  8)
        {
            show_my_mass();
        }

        if(num1 ==  SELECTED_INDEX_EXIT)
        {
            GenerateConsoleCtrlEvent(CTRL_BREAK_EVENT,0);
        }
    }
}

int main()
{
    funny_messages[0] = {MASS, 100,110, "Вы весите как среднестатистический американец!Хватит ЖРАЦЬ! "};
    funny_messages[1] = {MASS, 20, 50, "Вы дрищ, американец!"};
    funny_messages[2] = {MASS, 80, 80, "Вы весите как Геннадий Горин"};
    funny_messages[4] = {MASS, 150, 190, "Карртаво Вы весите как "," тигррр ррррр!" };
    funny_messages[5] = {MASS, 4000, 5400, "Вы весите как слон"};

    SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

    system("chcp 1251>nul");

    choosen();

    system("pause>nul");
    return 0;
}
