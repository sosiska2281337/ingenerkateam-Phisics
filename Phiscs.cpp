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
    unitypes type;  //��� �� ��������
    double minValue;    //�� ����
    double maxValue;//�� ����
    const char* text;   //���������
    const char* textPoslePausy;   //��������� � ���������
    //char text1[100];
};

FunnyMessage funny_messages[KOL_VO_SOOBSHENII];




bool showenergy(const char* unit)
{
    double coef;
    char message[200];

    if (strcmp(unit, "����������") == 0)
    {
        coef = 1/CEF_KDZH;
        strcpy(message, "������� �������� � ����������:");
    }
    else if (strcmp(unit, "������") == 0)
    {
        coef = 1/CEF_DZH ;
        strcpy(message, "������� �������� � �������:");
    }
    else if (strcmp(unit, "�����������") == 0)
    {
        coef = 1/CEF_KK;
        strcpy(message, "������� �������� � ������������:");
    }
    else if (strcmp(unit, "���-����") == 0)
    {
        coef = 1/CEF_FF;
        strcpy(message, "������� �������� � ���-������:");
    }

    cout << message << endl;
    cin >> energyVvod;

    cout << "� �����������:"        << coef * CEF_KDZH * energyVvod << endl;
    cout << "� �������:"            << coef * CEF_DZH * energyVvod << endl;
    cout << "� ������������:"       << coef * CEF_KK * energyVvod << endl;
    cout << "� ���-������:"         << coef * CEF_FF * energyVvod << endl;
}
bool showtempr(const char* unit)
{
    double coef;
    char message[200];

    if (strcmp(unit, "�������") == 0)
    {
        coef = 1/CEF_CEL;
        strcpy(message, "������� ����������� � �������� ��������:");
    }
    else if (strcmp(unit, "���������") == 0)
    {
        coef = 1/CEF_FAR ;
        strcpy(message, "������� ����������� � �������� ����������:");
    }
    else if (strcmp(unit, "�������") == 0)
    {
        coef = 1/CEF_KELVN;
        strcpy(message, "������� ����������� � ���������:");
    }


    cout << message << endl;
    cin >> temprVvod;

    cout << "� �������� �������:"    << coef * CEF_CEL * temprVvod << endl;
    cout << "� �������� ����������:" << coef * CEF_FAR * temprVvod << endl;
    cout << "� ���������:"           << coef * CEF_KELVN * temprVvod << endl;
}

bool showStrench(const char* unit)
{
    double coef;
    char message[200];

    if (strcmp(unit, "����������") == 0)
    {
        coef = 1/CEF_MN;
        strcpy(message, "������� ���� � �����������:");
    }
    else if (strcmp(unit, "������") == 0)
    {
        coef = 1/CEF_N;
        strcpy(message, "������� ���� �������:");
    }

    cout << message << endl;
    cin >> strenchVvod;

    cout << "� �����������:"          << coef * CEF_MN * strenchVvod << endl;
    cout << "� �������:"              << coef * CEF_N * strenchVvod << endl;
}

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

    cout << "� ����������:"<<  coef * CEF_MM  * distanceVvod << endl;
    cout << "� �����������:"<< coef * CEF_CM  * distanceVvod << endl;
    cout << "� ������:"<<      coef * CEF_M  * distanceVvod << endl;
    cout << "� ����������:"<<  coef * CEF_KM  * distanceVvod << endl;
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

    cout << "� �������:"<<     coef * CEF_GM * massVvod << endl;
    cout << "� �����������:"<< coef * CEF_KG * massVvod << endl;
    cout << "� ���������:"<<   coef * CEF_CENT * massVvod << endl;
    cout << "� ������:"<<      coef * CEF_TON * massVvod << endl;



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
    cout << "� ������:"<< coef *CEF_DAY * timeVvod << endl;
}

void message_menu()
{
    cout << "��� ����, ����� ��������� ������� �����: ������� 1"<<endl;
    cout << "��� ����, ����� ��������� ������� ����: ������� 2"<<endl;
    cout << "��� ����, ����� ��������� ������� ��������: ������� 3"<<endl;
    cout << "��� ����, ����� ��������� ������� �������: ������� 4"<<endl;
    cout << "��� ����, ����� ��������� ������� ����: ������� 5"<<endl;
    cout << "��� ����, ����� ��������� ������� �������: ������� 6"<<endl;
    cout << "��� ����, ����� ��������� ������� �����������: ������� 7"<<endl;
    cout << "� ���� ��������....(������� 8)"<<endl;
    cout << "��� ����, ����� ����� ������� 9"<<endl;
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

void messege_strench()
{
    cout << "��� ����, ����� ��������� ����������: ������� 1"<<endl;
    cout << "��� ����, ����� ��������� ������: ������� 2"<<endl;
}

void messege_energy()
{
    cout << "��� ����, ����� ��������� ����������: ������� 1"<<endl;
    cout << "��� ����, ����� ��������� ������: ������� 2"<<endl;
    cout << "��� ����, ����� ��������� �����������: ������� 3"<<endl;
    cout << "��� ����, ����� ��������� ���-����: ������� 4"<<endl;
    cout << "��� ����, ����� ����� � ������� ����: ������� 5"<<endl;
}
void messege_tempr()
{
    cout << "��� ����, ����� ��������� ������� �������: ������� 1"<<endl;
    cout << "��� ����, ����� ��������� ������� ����������: ������� 2"<<endl;
    cout << "��� ����, ����� ��������� ��������: ������� 3"<<endl;
    cout << "��� ����, ����� ����� � ������� ����: ������� 5"<<endl;
}
bool show_my_mass()
{
    int vvod_my_mass;

    cout << "������� ���� ��� � ����������� (max 20000)"  << endl;





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
                    showdistance("���������");
                }
                else if (num == SELECTED_INDEX_CM)
                {
                    showdistance("����������");
                }
                else if (num == SELECTED_INDEX_M)
                {
                    showdistance("�����");
                }
                else if (num == SELECTED_INDEX_KM)
                {
                    showdistance("���������");
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
                    showmass("������");
                }
                else if(num == SELECTED_INDEX_KG)
                {
                    showmass("����������");
                }
                else if(num == SELECTED_INDEX_CENT)
                {
                    showmass("��������");
                }
                else if(num == SELECTED_INDEX_TONN)
                {
                    showmass("�����");
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
                    showPressure("������������");
                }
                else if (num == SELECTED_INDEX_PA)
                {
                    showPressure("�������");
                }
                else if(num == SELECTED_INDEX_KPA)
                {
                    showPressure("�����������");
                }
                else if(num == SELECTED_INDEX_MMRTST)
                {
                    showPressure("�� �������� ������");
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
                    showtime("�������");
                }
                else if(num == SELECTED_INDEX_MIN)
                {
                    showtime("������");
                }
                else if(num == SELECTED_INDEX_HOUR)
                {
                    showtime("����");
                }
                else if(num == SELECTED_INDEX_DAY)
                {
                    showtime("�����");
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
                    showStrench("����������");
                }
                else if(num == SELECTED_INDEX_N)
                {
                    showStrench("������");
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
                    showenergy("����������");
                }
                else if(num == SELECTED_INDEX_DZH)
                {
                    showenergy("������");
                }
                else if(num == SELECTED_INDEX_KK)
                {
                    showenergy("�����������");
                }
                else if(num == SELECTED_INDEX_FF)
                {
                    showenergy("���-����");
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
                    showtempr("�������");
                }
                else if(num == SELECTED_INDEX_FAR)
                {
                    showtempr("���������");
                }
                else if(num == SELECTED_INDEX_KELVN)
                {
                    showtempr("�������");
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

    funny_messages[0] = {MASS, 1,3, "","�� ������ ��� ������"};
    funny_messages[1] = {MASS, 4,8, "","�� ������ ��� ����� (������� ����)" };
    funny_messages[2] = {MASS, 9,44, "","������� ��� �������� (�� �����, ������� ���, ������ ����!)"};
    funny_messages[3] = {MASS, 45, 79, "","�� ������ ��� ����! ����"};
    funny_messages[4] = {MASS, 80, 80, "","�� ������ ��� �������� ����� (� �� ���� �������)"};
    funny_messages[5]= {MASS, 81, 90, "","�� ������ ��� �������� ����� (����� ������������) ��� �� � ��� ������?"};
    funny_messages[6] = {MASS, 91,149, "","�� ������ ��� �������������������� ����������!������ �����!(��������� �����!)"};
    funny_messages[7] = {MASS, 150, 190, "","(��������) �� ������ ���  ������ �����!" };
    funny_messages[8] = {MASS, 191, 800, ""," ������� ��� �������   (�� ���� �� ��� �����!)" };
    funny_messages[9] = {MASS, 801, 2100, ""," � �������,  ������ ���� �� ���)00))))" };
    funny_messages[10] = {MASS, 2101, 5400, "","��� ����� ����(� � �������!! � ����������� � ������!)"};
    funny_messages[11] = {MASS, 5401, 20000, "","��� ����� ������� � ���� � ����� (� �� ���� ��������)0)0))� ���� �����))00))"};

    SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������

    system("chcp 1251>nul");

    choosen();


    system("pause>nul");
    return 0;
}
