using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
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
          private void textBox1_TextChanged(object sender, EventArgs e)
        {

            pressure_main();
            time_main();
            mass_main();
            energy_main();
            strench_main();
            distance_main();
            temp_main();
        
         }

        private void PhisUnitComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void MainForm_Load(object sender, EventArgs e)
        {
            PhisParameterComboBox.SelectedIndex = 0;
        }

        private void button1_Click(object sender, EventArgs e)
        {
        }
        private void PhisParameterComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {
            messege_distance();
            messege_strench();
            messege_mass();
            messege_pressure();
            messege_time();
            messege_energy();
            messege_temp();


            //openFileDialog1.ShowDialog();

        }


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
                    textBox2.Text = "В МиллиПаскалях:" + Math.Round((coef_pressure * data_phisics.CEF_MPA * pressureVvod), 2) +
                    Environment.NewLine + "В Паскалях:" + Math.Round((coef_pressure * data_phisics.CEF_PA * pressureVvod), 2) +
                    Environment.NewLine + "В килоПаскалях:" + Math.Round((coef_pressure * data_phisics.CEF_PA * pressureVvod), 2) +
                    Environment.NewLine + "В миллиметрах ртутного столба:" + Math.Round((coef_pressure * data_phisics.CEF_PA * pressureVvod), 2);
                }
                else if (PhisUnitComboBox.Text == "Паскаль")
                {
                    coef_pressure = 1 / data_phisics.CEF_PA;
                    textBox2.Text = "В МиллиПаскалях:" + Math.Round((coef_pressure * data_phisics.CEF_MPA * pressureVvod), 2) +
                    Environment.NewLine + "В Паскалях:" + Math.Round((coef_pressure * data_phisics.CEF_PA * pressureVvod), 2) +
                    Environment.NewLine + "В килоПаскалях:" + Math.Round((coef_pressure * data_phisics.CEF_PA * pressureVvod), 2) +
                    Environment.NewLine + "В миллиметрах ртутного столба:" + Math.Round((coef_pressure * data_phisics.CEF_PA * pressureVvod), 2);

                }
                else if (PhisUnitComboBox.Text == "килоПаскаль")
                {
                    coef_pressure = 1 / data_phisics.CEF_KPA;
                    textBox2.Text = "В МиллиПаскалях:" + Math.Round((coef_pressure * data_phisics.CEF_MPA * pressureVvod), 2) +
                    Environment.NewLine + "В Паскалях:" + Math.Round((coef_pressure * data_phisics.CEF_PA * pressureVvod), 2) +
                    Environment.NewLine + "В килоПаскалях:" + Math.Round((coef_pressure * data_phisics.CEF_PA * pressureVvod), 2) +
                    Environment.NewLine + "В миллиметрах ртутного столба:" + Math.Round((coef_pressure * data_phisics.CEF_PA * pressureVvod), 2);
                }
                else if (PhisUnitComboBox.Text == "мм ртутного столба")
                {
                    coef_pressure = 1 / data_phisics.CEF_MM_RT_ST;
                    textBox2.Text = "В МиллиПаскалях:" + Math.Round((coef_pressure * data_phisics.CEF_MPA * pressureVvod), 2) +
                    Environment.NewLine + "В Паскалях:" +  Math.Round((coef_pressure * data_phisics.CEF_PA * pressureVvod),2) +
                    Environment.NewLine + "В килоПаскалях:" + Math.Round((coef_pressure * data_phisics.CEF_PA * pressureVvod), 2) +
                    Environment.NewLine + "В миллиметрах ртутного столба:" + Math.Round((coef_pressure * data_phisics.CEF_PA * pressureVvod), 2);
                }
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
                    textBox2.Text = "В Секундах:" + Math.Round((coef_time * data_phisics.CEF_SEC * timeVvod),2) +
                   Environment.NewLine + "В Минутах:" + Math.Round((coef_time * data_phisics.CEF_MIN * timeVvod),2) +
                   Environment.NewLine + "В Часах:" + Math.Round((coef_time * data_phisics.CEF_HOUR * timeVvod),2) +
                   Environment.NewLine + "В Сутках:" + Math.Round((coef_time * data_phisics.CEF_DAY * timeVvod), 2);
                }
                else if (PhisUnitComboBox.Text == "Минуты")
                {
                    coef_time = 1 / data_phisics.CEF_MIN;
                    textBox2.Text = "В Секундах:" + Math.Round((coef_time * data_phisics.CEF_SEC * timeVvod), 2) +
                   Environment.NewLine + "В Минутах:" + Math.Round((coef_time * data_phisics.CEF_MIN * timeVvod), 2) +
                   Environment.NewLine + "В Часах:" + Math.Round((coef_time * data_phisics.CEF_HOUR * timeVvod), 2) +
                   Environment.NewLine + "В Сутках:" + Math.Round((coef_time * data_phisics.CEF_DAY * timeVvod), 2);

                }
                else if (PhisUnitComboBox.Text == "Часы")
                {
                    coef_time = 1 / data_phisics.CEF_HOUR;
                    textBox2.Text = "В Секундах:" + Math.Round((coef_time * data_phisics.CEF_SEC * timeVvod), 2) +
                   Environment.NewLine + "В Минутах:" + Math.Round((coef_time * data_phisics.CEF_MIN * timeVvod), 2) +
                   Environment.NewLine + "В Часах:" + Math.Round((coef_time * data_phisics.CEF_HOUR * timeVvod), 2) +
                   Environment.NewLine + "В Сутках:" + Math.Round((coef_time * data_phisics.CEF_DAY * timeVvod), 2);

                }
                else if (PhisUnitComboBox.Text == "Сутки")
                {
                    coef_time = 1 / data_phisics.CEF_DAY;
                    textBox2.Text = "В Секундах:" + Math.Round((coef_time * data_phisics.CEF_SEC * timeVvod), 2) +
                   Environment.NewLine + "В Минутах:" + Math.Round((coef_time * data_phisics.CEF_MIN * timeVvod), 2) +
                   Environment.NewLine + "В Часах:" + Math.Round((coef_time * data_phisics.CEF_HOUR * timeVvod), 2) +
                   Environment.NewLine + "В Сутках:" + Math.Round((coef_time * data_phisics.CEF_DAY * timeVvod), 2);
                }

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
                    textBox2.Text = "В граммах:" +  Math.Round((coef_mass * data_phisics.CEF_GM * massVvod),2) +
                   Environment.NewLine + "В килограммах:" +  Math.Round((coef_mass * data_phisics.CEF_KG * massVvod),2)  +
                   Environment.NewLine + "В центнерах:" +  Math.Round((coef_mass * data_phisics.CEF_CENT * massVvod),2)  +
                   Environment.NewLine + "В тоннах:" + Math.Round((coef_mass * data_phisics.CEF_TON * massVvod), 2);
                }
                else if (PhisUnitComboBox.Text == "Килограммы")
                {
                    coef_mass = 1 / data_phisics.CEF_KG;
                    textBox2.Text = "В граммах:" + Math.Round((coef_mass * data_phisics.CEF_GM * massVvod), 2) +
                   Environment.NewLine + "В килограммах:" + Math.Round((coef_mass * data_phisics.CEF_KG * massVvod), 2) +
                   Environment.NewLine + "В центнерах:" + Math.Round((coef_mass * data_phisics.CEF_CENT * massVvod), 2) +
                   Environment.NewLine + "В тоннах:" + Math.Round((coef_mass * data_phisics.CEF_TON * massVvod), 2);

                }
                else if (PhisUnitComboBox.Text == "Центнеры")
                {
                    coef_mass = 1 / data_phisics.CEF_CENT;
                    textBox2.Text = "В граммах:" + Math.Round((coef_mass * data_phisics.CEF_GM * massVvod), 2) +
                   Environment.NewLine + "В килограммах:" + Math.Round((coef_mass * data_phisics.CEF_KG * massVvod), 2) +
                   Environment.NewLine + "В центнерах:" + Math.Round((coef_mass * data_phisics.CEF_CENT * massVvod), 2) +
                   Environment.NewLine + "В тоннах:" + Math.Round((coef_mass * data_phisics.CEF_TON * massVvod), 2);

                }
                else if (PhisUnitComboBox.Text == "Тонны")
                {
                    coef_mass = 1 / data_phisics.CEF_TON;
                    textBox2.Text = "В граммах:" + Math.Round((coef_mass * data_phisics.CEF_GM * massVvod), 2) +
                   Environment.NewLine + "В килограммах:" + Math.Round((coef_mass * data_phisics.CEF_KG * massVvod), 2) +
                   Environment.NewLine + "В центнерах:" + Math.Round((coef_mass * data_phisics.CEF_CENT * massVvod), 2) +
                   Environment.NewLine + "В тоннах:" + Math.Round((coef_mass * data_phisics.CEF_TON * massVvod), 2);
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
                    textBox2.Text = "В килоДжоулях:" + Math.Round((coef_energy* data_phisics.CEF_KDZH * energyVvod),2) +
                   Environment.NewLine + "В джоулях:" + Math.Round((coef_energy * data_phisics.CEF_DZH * energyVvod),2) +
                   Environment.NewLine + "В килокалориях:" + Math.Round((coef_energy * data_phisics.CEF_KK * energyVvod),2) +
                   Environment.NewLine + "В футах-фунтах:" + Math.Round((coef_energy * data_phisics.CEF_FF * energyVvod),2);
                }
                else if (PhisUnitComboBox.Text == "Джоули")
                {
                    coef_energy = 1 / data_phisics.CEF_DZH;
                    textBox2.Text = "В килоДжоулях:" + Math.Round((coef_energy * data_phisics.CEF_KDZH * energyVvod), 2) +
                   Environment.NewLine + "В джоулях:" + Math.Round((coef_energy * data_phisics.CEF_DZH * energyVvod), 2) +
                   Environment.NewLine + "В килокалориях:" + Math.Round((coef_energy * data_phisics.CEF_KK * energyVvod), 2) +
                   Environment.NewLine + "В футах-фунтах:" + Math.Round((coef_energy * data_phisics.CEF_FF * energyVvod), 2);

                }
                else if (PhisUnitComboBox.Text == "Килокалрии")
                {
                    coef_energy = 1 / data_phisics.CEF_KK;
                    textBox2.Text = "В килоДжоулях:" + Math.Round((coef_energy * data_phisics.CEF_KDZH * energyVvod), 2) +
                   Environment.NewLine + "В джоулях:" + Math.Round((coef_energy * data_phisics.CEF_DZH * energyVvod), 2) +
                   Environment.NewLine + "В килокалориях:" + Math.Round((coef_energy * data_phisics.CEF_KK * energyVvod), 2) +
                   Environment.NewLine + "В футах-фунтах:" + Math.Round((coef_energy * data_phisics.CEF_FF * energyVvod), 2);

                }
                else if (PhisUnitComboBox.Text == "Фут-фунт")
                {
                    coef_energy = 1 / data_phisics.CEF_FF;
                    textBox2.Text = "В килоДжоулях:" + Math.Round((coef_energy * data_phisics.CEF_KDZH * energyVvod), 2) +
                   Environment.NewLine + "В джоулях:" + Math.Round((coef_energy * data_phisics.CEF_DZH * energyVvod), 2) +
                   Environment.NewLine + "В килокалориях:" + Math.Round((coef_energy * data_phisics.CEF_KK * energyVvod), 2) +
                   Environment.NewLine + "В футах-фунтах:" + Math.Round((coef_energy * data_phisics.CEF_FF * energyVvod), 2);
                }

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
                    textBox2.Text = "В килоньютонах:" + Math.Round((coef_strench * data_phisics.CEF_KN * strenchVVod),2) +
                   Environment.NewLine + "В Ньютонах:" + Math.Round((coef_strench * data_phisics.CEF_N * strenchVVod), 2);

                }
                else if (PhisUnitComboBox.Text == "Ньютоны")
                {
                    coef_strench = 1 / data_phisics.CEF_N;
                  textBox2.Text = "В килоньютонах:" + Math.Round((coef_strench * data_phisics.CEF_KN * strenchVVod), 2) +
                 Environment.NewLine + "В Ньютонах:" + Math.Round((coef_strench * data_phisics.CEF_N * strenchVVod), 2);


                }
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
                    textBox2.Text = "В милиметрах:" +  Math.Round((coef_distance * data_phisics.CEF_MM * distanceVvod),2) +
                   Environment.NewLine + "В сантиметрах:" +  Math.Round((coef_distance * data_phisics.CEF_CM * distanceVvod),2) +
                   Environment.NewLine + "В метрах:" + Math.Round((coef_distance * data_phisics.CEF_M * distanceVvod), 2) +
                   Environment.NewLine + "В километрах" +  Math.Round((coef_distance * data_phisics.CEF_KM * distanceVvod),2);
                }
                else if (PhisUnitComboBox.Text == "Сантиметры")
                {
                    coef_distance = 1 / data_phisics.CEF_CM;
                    textBox2.Text = "В милиметрах:" + Math.Round((coef_distance * data_phisics.CEF_MM * distanceVvod), 2) +
                   Environment.NewLine + "В сантиметрах:" + Math.Round((coef_distance * data_phisics.CEF_CM * distanceVvod), 2) +
                   Environment.NewLine + "В метрах:" + Math.Round((coef_distance * data_phisics.CEF_M * distanceVvod), 2) +
                   Environment.NewLine + "В километрах" + Math.Round((coef_distance * data_phisics.CEF_KM * distanceVvod), 2);

                }
                else if (PhisUnitComboBox.Text == "Метры")
                {
                    coef_distance = 1 / data_phisics.CEF_M;
                    textBox2.Text = "В милиметрах:" + Math.Round((coef_distance * data_phisics.CEF_MM * distanceVvod), 2) +
                   Environment.NewLine + "В сантиметрах:" + Math.Round((coef_distance * data_phisics.CEF_CM * distanceVvod), 2) +
                   Environment.NewLine + "В метрах:" + Math.Round((coef_distance * data_phisics.CEF_M * distanceVvod), 2) +
                   Environment.NewLine + "В километрах" + Math.Round((coef_distance * data_phisics.CEF_KM * distanceVvod), 2);

                }
                else if (PhisUnitComboBox.Text == "Километры")
                {
                    coef_distance = 1 / data_phisics.CEF_KM;
                    textBox2.Text = "В милиметрах:" + Math.Round((coef_distance * data_phisics.CEF_MM * distanceVvod), 2) +
                   Environment.NewLine + "В сантиметрах:" + Math.Round((coef_distance * data_phisics.CEF_CM * distanceVvod), 2) +
                   Environment.NewLine + "В метрах:" + Math.Round((coef_distance * data_phisics.CEF_M * distanceVvod), 2) +
                   Environment.NewLine + "В километрах" + Math.Round((coef_distance * data_phisics.CEF_KM * distanceVvod), 2);
                }

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
                    textBox2.Text = "В градус Цельсия:" + Math.Round((coef_temp * data_phisics.CEF_CEL * tempVvod),2) +
                   Environment.NewLine + "В градус Фаренгейта:" + Math.Round((coef_temp * data_phisics.CEF_FAR * tempVvod),2) +
                   Environment.NewLine + "В Кельвине:" + Math.Round((coef_temp * data_phisics.CEF_KELVN * tempVvod), 2);

                }
                else if (PhisUnitComboBox.Text == "Градус Фаренгейта")
                {
                    coef_temp = 1 / data_phisics.CEF_FAR;
                    textBox2.Text = "В градус Цельсия:" + Math.Round((coef_temp * data_phisics.CEF_CEL * tempVvod), 2) +
                   Environment.NewLine + "В градус Фаренгейта:" + Math.Round((coef_temp * data_phisics.CEF_FAR * tempVvod), 2) +
                   Environment.NewLine + "В Кельвине:" + Math.Round((coef_temp * data_phisics.CEF_KELVN * tempVvod), 2);

                }
                else if (PhisUnitComboBox.Text == "Кельвин")
                {
                    coef_temp = 1 / data_phisics.CEF_KELVN;
                    textBox2.Text = "В градус Цельсия:" + Math.Round((coef_temp * data_phisics.CEF_CEL * tempVvod), 2) +
                   Environment.NewLine + "В градус Фаренгейта:" + Math.Round((coef_temp * data_phisics.CEF_FAR * tempVvod), 2) +
                   Environment.NewLine + "В Кельвине:" + Math.Round((coef_temp * data_phisics.CEF_KELVN * tempVvod), 2);
                }


            }
        }

        private void valueTextBox_KeyPress(object sender, KeyPressEventArgs e)
        {
            char c = e.KeyChar;

            if (!(char.IsDigit(c) || c == '.' || c == '-' || c == '\b'))
            {
                e.Handled = true;
            }
            else
            {
                string text = (sender as TextBox).Text ?? "";

                if (c == '.' && text.Contains('.'))
                {
                    e.Handled = true;
                }
                else if (c == '-' && text.Contains('-'))
                {
                    e.Handled = true;
                }
            }

        }
        

    }




    }




