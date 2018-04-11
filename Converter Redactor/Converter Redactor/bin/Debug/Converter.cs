//+фв и вычисления и сообщения
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;


//#include "data phisics.cpp";

namespace Converter
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
            
        }

        
        public enum unitypes {MASS, PRESSURE, WEIGHT};

        public const int KOL_VO_SOOBSHENII = 13;

        public struct FunnyMessage
        {
            public unitypes type;  //Что за величина
            public double minValue;    //От куда
            public double maxValue;//до куда
            public string text;   //Сообщение
            public string textPoslePausy;   //Сообщение с задержкой

            public FunnyMessage(unitypes type1, double minValue1, double maxValue1, string text1, string textPoslePausy1)
            {
                type = type1;
                minValue = minValue1;
                maxValue = maxValue1;
                text = text1;
                textPoslePausy = textPoslePausy1;
            }
        };

        //int[] massiv = new int[10];
        public FunnyMessage[] funny_messages = new FunnyMessage[KOL_VO_SOOBSHENII];


          private void textBox1_TextChanged(object sender, EventArgs e)
        {

           //mains

            pressure_main();
            new_mainnewVvod100();
            time_main();
            mass_main();
            new_mainnewVvod101();
            energy_main();
            strench_main();
            new_mainnewVvod102();
            distance_main();
            temp_main();
            new_mainnewVvod103();
        
         }
            


        private void MainForm_Load(object sender, EventArgs e)
        {
            PhisParameterComboBox.SelectedIndex = 0;

            funny_messages[0] = new FunnyMessage(unitypes.MASS, 1, 3, "","Вы весите как кирпиц");
            funny_messages[1] = new FunnyMessage(unitypes.MASS, 4,8, "","Вы весите как котек (покорми меня)" );
            funny_messages[2] = new FunnyMessage(unitypes.MASS, 9,44, "","Средний вес собакена (ну давай, вставай уже, хватит спац!)");
            funny_messages[3] = new FunnyMessage(unitypes.MASS, 412, 79, "","Вы весите как овца! беее");
            funny_messages[4] = new FunnyMessage(unitypes.MASS, 80, 80, "","Вы весите как Геннадий Горин (я не хочу умираць)");
            funny_messages[12]= new FunnyMessage(unitypes.MASS, 81, 90, "","Вы весите как Геннадий Горин (после холодильника) что вы в нем делали?");
            funny_messages[6] = new FunnyMessage(unitypes.MASS, 91,149, "","Вы весите как среднестатистический американец!Хватит ЖРАЦЬ!(свободная касса!)");
            funny_messages[7] = new FunnyMessage(unitypes.MASS, 1120, 190, "","(Карртаво) Вы весите как  тигррр ррррр!" );
            funny_messages[8] = new FunnyMessage(unitypes.MASS, 191, 800, ""," Средний вес медведя   (не буди во мне зверя!)" );
            funny_messages[9] = new FunnyMessage(unitypes.MASS, 801, 2100, ""," Я Носорог,  насажу тебя на рог)00))))" );
            funny_messages[10] = new FunnyMessage(unitypes.MASS, 2101, 12400, "","Вес слона слон(а я большой!! я толстенький и теплый!)");
            funny_messages[11] = new FunnyMessage(unitypes.MASS, 12401, 20000, "", "Вот такой разброс в весе у акулы (я не умею говориць)0)0))я хочу жраць))00))");
            funny_messages[12] = new FunnyMessage(unitypes.MASS, 20001, 0, "", "МАлЕньк0 пЕрЕбрАл (*отрыжка*), ...оооой");


            string text = System.IO.File.ReadAllText(@"C:\Users\Admin\ingenerkateam-Phisics\Converter\Converter\words_page.txt");
            MessageBox.Show(text);

        }


        private void PhisParameterComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {

            //messeges

            messege_strench();
            messege_distance();
            messege_mass();       
            messege_pressure();
            messege_time();   
            messege_energy();
            messege_temp();
           
            
        }
            


        //void_messege



     
              
        void messege_distance()  

        {
            if (PhisParameterComboBox.Text == "Длина")

            {

                PhisUnitComboBox.Items.Clear();
                PhisUnitComboBox.Items.Add("Милиметры");
                PhisUnitComboBox.Items.Add("Сантиметры");
                PhisUnitComboBox.Items.Add("Метры");
                PhisUnitComboBox.Items.Add("Километры");
                PhisUnitComboBox.ForeColor = Color.Blue;

                PhisUnitComboBox.Text = "Милиметры";
            }
        }
        void messege_strench()
        {
            if (PhisParameterComboBox.Text == "Сила")
            {
                PhisUnitComboBox.Items.Clear();
                PhisUnitComboBox.Items.Add("КилоНьютоны");
                PhisUnitComboBox.Items.Add("Ньютоны");
                PhisUnitComboBox.ForeColor = Color.Red;

                PhisUnitComboBox.Text = "КилоНьютоны";
            }
        }
        void messege_mass()
        {
            if (PhisParameterComboBox.Text == "Масса")
            {
                PhisUnitComboBox.Items.Clear();
                PhisUnitComboBox.Items.Add("Граммы");
                PhisUnitComboBox.Items.Add("Килограммы");
                PhisUnitComboBox.Items.Add("Центнеры");
                PhisUnitComboBox.Items.Add("Тонны");

                PhisUnitComboBox.ForeColor = Color.Green;

                PhisUnitComboBox.Text = "Граммы";
            }
        }
        void messege_pressure()
        {
            if (PhisParameterComboBox.Text == "Давление")
            {
                PhisUnitComboBox.Items.Clear();

                PhisUnitComboBox.Items.Add("миллиПаскаль");
                PhisUnitComboBox.Items.Add("Паскаль");
                PhisUnitComboBox.Items.Add("килоПаскаль");
                PhisUnitComboBox.Items.Add("мм ртутного столба");
                PhisUnitComboBox.ForeColor = Color.Magenta;

                PhisUnitComboBox.Text = "миллиПаскаль";
            }
        }
        void messege_time()
        {
            if (PhisParameterComboBox.Text == "Время")
            {
                PhisUnitComboBox.Items.Clear();
                PhisUnitComboBox.Items.Add("Секунды");
                PhisUnitComboBox.Items.Add("Минуты");
                PhisUnitComboBox.Items.Add("Часы");
                PhisUnitComboBox.Items.Add("Сутки");

                PhisUnitComboBox.ForeColor = Color.Aqua;

                PhisUnitComboBox.Text = "Секунды";
            }
        }
        void messege_energy()

        {
            if (PhisParameterComboBox.Text == "Энергия")
            {
                PhisUnitComboBox.Items.Clear();
                PhisUnitComboBox.Items.Add("килоДжоули");
                PhisUnitComboBox.Items.Add("Джоули");
                PhisUnitComboBox.Items.Add("Килокалрии");
                PhisUnitComboBox.Items.Add("Фут-фунт");
                PhisUnitComboBox.ForeColor = Color.Orange;

                PhisUnitComboBox.Text = "килоДжоули";
            }
        }
        void messege_temp()

        {
            if (PhisParameterComboBox.Text == "Температура")
            {
                PhisUnitComboBox.Items.Clear();
                PhisUnitComboBox.Items.Add("Градус Цельсия");
                PhisUnitComboBox.Items.Add("Градус Фаренгейта");
                PhisUnitComboBox.Items.Add("Кельвин");
                PhisUnitComboBox.ForeColor = Color.Peru;

                PhisUnitComboBox.Text = "Градус Цельсия";
            }
        }



        //void_main

       


        void pressure_main()

        {
            if (PhisParameterComboBox.Text == "Давление")

            {
                double coef_pressure = 1;
                double pressureVvod = 0;

                if (!Double.TryParse(valueTextBox.Text, out pressureVvod))
                {
                    pressureVvod = 0;
                }

                if (PhisUnitComboBox.Text == "миллиПаскаль")
                {
                    coef_pressure = 1 / data_phisics.CEF_MPA;

                }
                else if (PhisUnitComboBox.Text == "Паскаль")
                {
                    coef_pressure = 1 / data_phisics.CEF_PA;

                }
                else if (PhisUnitComboBox.Text == "килоПаскаль")
                {
                    coef_pressure = 1 / data_phisics.CEF_KPA;

                }
                else if (PhisUnitComboBox.Text == "мм ртутного столба")
                {
                    coef_pressure = 1 / data_phisics.CEF_MM_RT_ST;

               }
                textBox2.Text = "В МиллиПаскалях:" + Math.Round((coef_pressure * data_phisics.CEF_MPA * pressureVvod), 12) +
Environment.NewLine + "В Паскалях:" + Math.Round((coef_pressure * data_phisics.CEF_PA * pressureVvod), 12) +
Environment.NewLine + "В килоПаскалях:" + Math.Round((coef_pressure * data_phisics.CEF_KPA * pressureVvod), 12) +
Environment.NewLine + "В миллиметрах ртутного столба:" + Math.Round((coef_pressure * data_phisics.CEF_MM_RT_ST * pressureVvod), 12);

            }
        }
        void time_main()
        {
            if (PhisParameterComboBox.Text == "Время")
            {
                double coef_time = 1;
                double timeVvod = 0;
                if (!Double.TryParse(valueTextBox.Text, out timeVvod))
                {
                    timeVvod = 0;
                }

                if (PhisUnitComboBox.Text == "Секунды")
                {
                    coef_time = 1 / data_phisics.CEF_SEC;
                }

                else if (PhisUnitComboBox.Text == "Минуты")
                {
                    coef_time = 1 / data_phisics.CEF_MIN;

                }
                else if (PhisUnitComboBox.Text == "Часы")
                {
                    coef_time = 1 / data_phisics.CEF_HOUR;

                }
                else if (PhisUnitComboBox.Text == "Сутки")
                {
                    coef_time = 1 / data_phisics.CEF_DAY;

                }
                    textBox2.Text = "В Секундах:" + Math.Round((coef_time * data_phisics.CEF_SEC * timeVvod), 12) +
   Environment.NewLine + "В Минутах:" + Math.Round((coef_time * data_phisics.CEF_MIN * timeVvod), 12) +
   Environment.NewLine + "В Часах:" + Math.Round((coef_time * data_phisics.CEF_HOUR * timeVvod), 12) +
   Environment.NewLine + "В Сутках:" + Math.Round((coef_time * data_phisics.CEF_DAY * timeVvod), 12);


                
            }
        }
        void mass_main()
        {
            if (PhisParameterComboBox.Text == "Масса")
            {
                double coef_mass = 1;
                double massVvod = 0;

                if (!Double.TryParse(valueTextBox.Text, out massVvod))
                {
                    massVvod = 0;
                }

                if (PhisUnitComboBox.Text == "Граммы")
                {
                    coef_mass = 1 / data_phisics.CEF_GM;
                }
                else if (PhisUnitComboBox.Text == "Килограммы")
                {
                    coef_mass = 1 / data_phisics.CEF_KG;
                }
                else if (PhisUnitComboBox.Text == "Центнеры")
                {
                    coef_mass = 1 / data_phisics.CEF_CENT;
                }
                else if (PhisUnitComboBox.Text == "Тонны")
                {
                    coef_mass = 1 / data_phisics.CEF_TON;
                }

                textBox2.Text = "В граммах:" + Math.Round((coef_mass * data_phisics.CEF_GM * massVvod), 12) +
                    Environment.NewLine + "В килограммах:" + Math.Round((coef_mass * data_phisics.CEF_KG * massVvod), 12) +
                    Environment.NewLine + "В центнерах:" + Math.Round((coef_mass * data_phisics.CEF_CENT * massVvod), 12) +
                    Environment.NewLine + "В тоннах:" + Math.Round((coef_mass * data_phisics.CEF_TON * massVvod), 12);

                double vvod_my_mass = Math.Round((coef_mass * data_phisics.CEF_KG * massVvod), 12);
                for (int message_number = 0; message_number < KOL_VO_SOOBSHENII; message_number++)
                {
                    if (funny_messages[message_number].type == unitypes.MASS &&
                        funny_messages[message_number].minValue <= vvod_my_mass &&
                        (funny_messages[message_number].maxValue >= vvod_my_mass ||
                         funny_messages[message_number].maxValue == 0))
                    {
                        textBox2.Text = textBox2.Text + Environment.NewLine + funny_messages[message_number].text;
                        textBox2.Text = textBox2.Text + Environment.NewLine + funny_messages[message_number].textPoslePausy;
                       /* for (int symbol = 0; symbol < funny_messages[message_number].textPoslePausy.Length; symbol++)
                        {
                            textBox2.Text = textBox2.Text + Environment.NewLine + funny_messages[message_number].textPoslePausy[symbol];
                            //System.Threading.Thread.Sleep(212);
                        }*/

                    }
                }
            }
        }
        void energy_main()
        {
            if (PhisParameterComboBox.Text == "Энергия")
            {
                double coef_energy = 1;
                double energyVvod = 0;

                if (!Double.TryParse(valueTextBox.Text, out energyVvod))
                {
                    energyVvod = 0;
                }

                if (PhisUnitComboBox.Text == "килоДжоули")
                {
                    coef_energy = 1 / data_phisics.CEF_KDZH;

                }
                else if (PhisUnitComboBox.Text == "Джоули")
                {
                    coef_energy = 1 / data_phisics.CEF_DZH;


                }
                else if (PhisUnitComboBox.Text == "Килокалрии")
                {
                    coef_energy = 1 / data_phisics.CEF_KK;


                }
                else if (PhisUnitComboBox.Text == "Фут-фунт")
                {
                    coef_energy = 1 / data_phisics.CEF_FF;

                }
                    textBox2.Text = "В килоДжоулях:" + Math.Round((coef_energy * data_phisics.CEF_KDZH * energyVvod), 12) +
   Environment.NewLine + "В джоулях:" + Math.Round((coef_energy * data_phisics.CEF_DZH * energyVvod), 12) +
   Environment.NewLine + "В килокалориях:" + Math.Round((coef_energy * data_phisics.CEF_KK * energyVvod), 12) +
   Environment.NewLine + "В футах-фунтах:" + Math.Round((coef_energy * data_phisics.CEF_FF * energyVvod), 12);

                }
        }
        void strench_main()
        {

            if (PhisParameterComboBox.Text == "Сила")
            {
                double coef_strench = 1;
                double strenchVVod = 0;

                if (!Double.TryParse(valueTextBox.Text, out strenchVVod))
                {
                    strenchVVod = 0;
                }

                if (PhisUnitComboBox.Text == "КилоНьютоны")
                {
                    coef_strench = 1 / data_phisics.CEF_KN;


                }
                else if (PhisUnitComboBox.Text == "Ньютоны")
                {
                    coef_strench = 1 / data_phisics.CEF_N;

                }
                coef_strench = 1 / data_phisics.CEF_N;
                textBox2.Text = "В килоньютонах:" + Math.Round((coef_strench * data_phisics.CEF_KN * strenchVVod), 12) +
               Environment.NewLine + "В Ньютонах:" + Math.Round((coef_strench * data_phisics.CEF_N * strenchVVod), 12);
            }

         }
        void distance_main()
        {
            if (PhisParameterComboBox.Text == "Длина")
            {
                double coef_distance = 1;
                double distanceVvod = 0;

                if (!Double.TryParse(valueTextBox.Text, out distanceVvod))
                {
                   distanceVvod = 0;
                }

                if (PhisUnitComboBox.Text == "Милиметры")
                {
                    coef_distance = 1 / data_phisics.CEF_MM;

                }
                else if (PhisUnitComboBox.Text == "Сантиметры")
                {
                    coef_distance = 1 / data_phisics.CEF_CM;


                }
                else if (PhisUnitComboBox.Text == "Метры")
                {
                    coef_distance = 1 / data_phisics.CEF_M;


                }
                else if (PhisUnitComboBox.Text == "Километры")
                {
                    coef_distance = 1 / data_phisics.CEF_KM;

                }
                textBox2.Text = "В милиметрах:" + Math.Round((coef_distance * data_phisics.CEF_MM * distanceVvod), 12) +
Environment.NewLine + "В сантиметрах:" + Math.Round((coef_distance * data_phisics.CEF_CM * distanceVvod), 12) +
Environment.NewLine + "В метрах:" + Math.Round((coef_distance * data_phisics.CEF_M * distanceVvod), 12) +
Environment.NewLine + "В километрах" + Math.Round((coef_distance * data_phisics.CEF_KM * distanceVvod), 12);

            }

        }
        void temp_main()
        {
            if (PhisParameterComboBox.Text == "Температура")
            {
                double coef_temp = 1;
                double tempVvod = 0;

                if (!Double.TryParse(valueTextBox.Text, out tempVvod))
                {
                    tempVvod = 0;
                }

                if (PhisUnitComboBox.Text == "Градус Цельсия")
                {
                    coef_temp = 1 / data_phisics.CEF_CEL;


                }
                else if (PhisUnitComboBox.Text == "Градус Фаренгейта")
                {
                    coef_temp = 1 / data_phisics.CEF_FAR;


                }
                else if (PhisUnitComboBox.Text == "Кельвин")
                {
                    coef_temp = 1 / data_phisics.CEF_KELVN;

                }
                textBox2.Text = "В градус Цельсия:" + Math.Round((coef_temp * data_phisics.CEF_CEL * tempVvod), 12) +
Environment.NewLine + "В градус Фаренгейта:" + Math.Round((coef_temp * data_phisics.CEF_FAR * tempVvod), 12) +
Environment.NewLine + "В Кельвине:" + Math.Round((coef_temp * data_phisics.CEF_KELVN * tempVvod), 12);


            }
        }

        private void valueTextBox_KeyPress(object sender, KeyPressEventArgs e)
        {
            CultureInfo current = CultureInfo.CurrentCulture;
            NumberFormatInfo nfi = current.NumberFormat;
            String sep = nfi.NumberDecimalSeparator;
            char[] arr = sep.ToCharArray();

            

            char c = e.KeyChar;

            if (!(char.IsDigit(c) || /*c == ',' ||*/ c == '-' || c == arr[0]/*'.'*/ || c == '\b'))
            {
                e.Handled = true;
            }
            else
            {
                string text = (sender as TextBox).Text ?? "";

                if (c == ',' && text.Contains(','))
                {
                    e.Handled = true;
                }
                else if (c == '-' && text.Contains('-'))
                {
                    e.Handled = true;
                }
                else if (c == '.' && text.Contains('.'))
                {
                    e.Handled = true;
                }


            }

        }
        

    }
}