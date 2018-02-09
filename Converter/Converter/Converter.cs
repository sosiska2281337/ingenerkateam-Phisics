﻿using System;
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
        private void PhisParameterComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {
            messege_distance();
            messege_strench();
            messege_mass();
            messege_pressure();
            messege_time();
            messege_energy();


            //openFileDialog1.ShowDialog();

        }


        void messege_distance()
        {
            if (PhisParameterComboBox.Text == "Длина")
            {

                PhisUnitComboBox.Items.Clear();
                PhisUnitComboBox.Items.Add("Милиметры");
                PhisUnitComboBox.Items.Add("Сантиметры");
                PhisUnitComboBox.Items.Add("Дециметры");
                PhisUnitComboBox.Items.Add("Километры");
                PhisParameterComboBox.ForeColor = Color.Blue;
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
                PhisParameterComboBox.ForeColor = Color.Red;
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
                PhisParameterComboBox.ForeColor = Color.Green;
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
                PhisParameterComboBox.ForeColor = Color.Magenta;
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
                PhisParameterComboBox.ForeColor = Color.Aqua;
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
                PhisParameterComboBox.ForeColor = Color.Orange;
                PhisUnitComboBox.ForeColor = Color.Orange;

                PhisUnitComboBox.Text = "килоДжоули";
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
                    textBox2.Text = "В МиллиПаскалях:" + coef_pressure * data_phisics.CEF_MPA * pressureVvod +
                   Environment.NewLine + "В Паскалях:" + coef_pressure * data_phisics.CEF_PA * pressureVvod +
                   Environment.NewLine + "В килоПаскалях:" + coef_pressure * data_phisics.CEF_KPA * pressureVvod +
                   Environment.NewLine + "В миллиметрах ртутного столба:" + coef_pressure * data_phisics.CEF_MM_RT_ST * pressureVvod;
                }
                else if (PhisUnitComboBox.Text == "Паскаль")
                {
                    coef_pressure = 1 / data_phisics.CEF_PA;
                    textBox2.Text = "В МиллиПаскалях:" + coef_pressure * data_phisics.CEF_MPA * pressureVvod +
                    Environment.NewLine + "В Паскалях:" + coef_pressure * data_phisics.CEF_PA * pressureVvod +
                    Environment.NewLine + "В килоПаскалях:" + coef_pressure * data_phisics.CEF_KPA * pressureVvod +
                    Environment.NewLine + "В миллиметрах ртутного столба:" + coef_pressure * data_phisics.CEF_MM_RT_ST * pressureVvod;

                }
                else if (PhisUnitComboBox.Text == "килоПаскаль")
                {
                    coef_pressure = 1 / data_phisics.CEF_KPA;
                    textBox2.Text = "В МиллиПаскалях:" + coef_pressure * data_phisics.CEF_MPA * pressureVvod +
                    Environment.NewLine + "В Паскалях:" + coef_pressure * data_phisics.CEF_PA * pressureVvod +
                    Environment.NewLine + "В килоПаскалях:" + coef_pressure * data_phisics.CEF_KPA * pressureVvod +
                    Environment.NewLine + "В миллиметрах ртутного столба:" + coef_pressure * data_phisics.CEF_MM_RT_ST * pressureVvod;
                }
                else if (PhisUnitComboBox.Text == "мм ртутного столба")
                {
                    coef_pressure = 1 / data_phisics.CEF_MM_RT_ST;
                    textBox2.Text = "В МиллиПаскалях:" + coef_pressure * data_phisics.CEF_MPA * pressureVvod +
                    Environment.NewLine + "В Паскалях:" + coef_pressure * data_phisics.CEF_PA * pressureVvod +
                    Environment.NewLine + "В килоПаскалях:" + coef_pressure * data_phisics.CEF_KPA * pressureVvod +
                    Environment.NewLine + "В миллиметрах ртутного столба:" + coef_pressure * data_phisics.CEF_MM_RT_ST * pressureVvod;
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
                    textBox2.Text = "В Секундах:" + coef_time * data_phisics.CEF_SEC * timeVvod +
                   Environment.NewLine + "В Минутах:" + coef_time * data_phisics.CEF_MIN * timeVvod +
                   Environment.NewLine + "В Часах:" + coef_time * data_phisics.CEF_HOUR * timeVvod +
                   Environment.NewLine + "В Сутках:" + coef_time * data_phisics.CEF_DAY * timeVvod;
                }
                else if (PhisUnitComboBox.Text == "Минуты")
                {
                    coef_time = 1 / data_phisics.CEF_MIN;
                    textBox2.Text = "В Секундах:" + coef_time * data_phisics.CEF_SEC * timeVvod +
                  Environment.NewLine + "В Минутах:" + coef_time * data_phisics.CEF_MIN * timeVvod +
                  Environment.NewLine + "В Часах:" + coef_time * data_phisics.CEF_HOUR * timeVvod +
                  Environment.NewLine + "В Сутках:" + coef_time * data_phisics.CEF_DAY * timeVvod;

                }
                else if (PhisUnitComboBox.Text == "Часы")
                {
                    coef_time = 1 / data_phisics.CEF_HOUR;
                    textBox2.Text = "В Секундах:" + coef_time * data_phisics.CEF_SEC * timeVvod +
                  Environment.NewLine + "В Минутах:" + coef_time * data_phisics.CEF_MIN * timeVvod +
                  Environment.NewLine + "В Часах:" + coef_time * data_phisics.CEF_HOUR * timeVvod +
                  Environment.NewLine + "В Сутках:" + coef_time * data_phisics.CEF_DAY * timeVvod;

                }
                else if (PhisUnitComboBox.Text == "Сутки")
                {
                    coef_time = 1 / data_phisics.CEF_DAY;
                    textBox2.Text = "В Секундах:" + coef_time * data_phisics.CEF_SEC * timeVvod +
                  Environment.NewLine + "В Минутах:" + coef_time * data_phisics.CEF_MIN * timeVvod +
                  Environment.NewLine + "В Часах:" + coef_time * data_phisics.CEF_HOUR * timeVvod +
                  Environment.NewLine + "В Сутках:" + coef_time * data_phisics.CEF_DAY * timeVvod;
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
                    textBox2.Text = "В граммах:" + coef_mass * data_phisics.CEF_GM * massVvod +
                   Environment.NewLine + "В килограммах:" + coef_mass * data_phisics.CEF_KG * massVvod +
                   Environment.NewLine + "В центнерах:" + coef_mass * data_phisics.CEF_CENT * massVvod +
                   Environment.NewLine + "В тоннах:" + coef_mass * data_phisics.CEF_TON * massVvod;
                }
                else if (PhisUnitComboBox.Text == "Килограммы")
                {
                    coef_mass = 1 / data_phisics.CEF_KG;
                    textBox2.Text = "В граммах:" + coef_mass * data_phisics.CEF_GM * massVvod +
                   Environment.NewLine + "В килограммах:" + coef_mass * data_phisics.CEF_KG * massVvod +
                   Environment.NewLine + "В центнерах:" + coef_mass * data_phisics.CEF_CENT * massVvod +
                   Environment.NewLine + "В тоннах:" + coef_mass * data_phisics.CEF_TON * massVvod;

                }
                else if (PhisUnitComboBox.Text == "Центнеры")
                {
                    coef_mass = 1 / data_phisics.CEF_CENT;
                    textBox2.Text = "В граммах:" + coef_mass * data_phisics.CEF_GM * massVvod +
                   Environment.NewLine + "В килограммах:" + coef_mass * data_phisics.CEF_KG * massVvod +
                   Environment.NewLine + "В центнерах:" + coef_mass * data_phisics.CEF_CENT * massVvod +
                   Environment.NewLine + "В тоннах:" + coef_mass * data_phisics.CEF_TON * massVvod;

                }
                else if (PhisUnitComboBox.Text == "Тонны")
                {
                    coef_mass = 1 / data_phisics.CEF_TON;
                    textBox2.Text = "В граммах:" + coef_mass * data_phisics.CEF_GM * massVvod +
                   Environment.NewLine + "В килограммах:" + coef_mass * data_phisics.CEF_KG * massVvod +
                   Environment.NewLine + "В центнерах:" + coef_mass * data_phisics.CEF_CENT * massVvod +
                   Environment.NewLine + "В тоннах:" + coef_mass * data_phisics.CEF_TON * massVvod;
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
                    textBox2.Text = "В килоДжоулях:" + coef_energy * data_phisics.CEF_KDZH * energyVvod +
                   Environment.NewLine + "В жоулях:" + coef_energy * data_phisics.CEF_DZH * energyVvod +
                   Environment.NewLine + "В Килокалориях:" + coef_energy * data_phisics.CEF_KK * energyVvod +
                   Environment.NewLine + "В футах-фунтах:" + coef_energy * data_phisics.CEF_FF * energyVvod;
                }
                else if (PhisUnitComboBox.Text == "Джоули")
                {
                    coef_energy = 1 / data_phisics.CEF_DZH;
                    textBox2.Text = "В килоДжоулях:" + coef_energy * data_phisics.CEF_KDZH * energyVvod +
                   Environment.NewLine + "В жоулях:" + coef_energy * data_phisics.CEF_DZH * energyVvod +
                   Environment.NewLine + "В Килокалориях:" + coef_energy * data_phisics.CEF_KK * energyVvod +
                   Environment.NewLine + "В футах-фунтах:" + coef_energy * data_phisics.CEF_FF * energyVvod;

                }
                else if (PhisUnitComboBox.Text == "Килокалрии")
                {
                    coef_energy = 1 / data_phisics.CEF_KK;
                    textBox2.Text = "В килоДжоулях:" + coef_energy * data_phisics.CEF_KDZH * energyVvod +
                   Environment.NewLine + "В жоулях:" + coef_energy * data_phisics.CEF_DZH * energyVvod +
                   Environment.NewLine + "В Килокалориях:" + coef_energy * data_phisics.CEF_KK * energyVvod +
                   Environment.NewLine + "В футах-фунтах:" + coef_energy * data_phisics.CEF_FF * energyVvod;

                }
                else if (PhisUnitComboBox.Text == "Фут-фунт")
                {
                    coef_energy = 1 / data_phisics.CEF_FF;
                    textBox2.Text = "В килоДжоулях:" + coef_energy * data_phisics.CEF_KDZH * energyVvod +
                   Environment.NewLine + "В жоулях:" + coef_energy * data_phisics.CEF_DZH * energyVvod +
                   Environment.NewLine + "В Килокалориях:" + coef_energy * data_phisics.CEF_KK * energyVvod +
                   Environment.NewLine + "В футах-фунтах:" + coef_energy * data_phisics.CEF_FF * energyVvod;
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
                    textBox2.Text = "В килоньютонах:" + coef_strench * data_phisics.CEF_KN * strenchVVod +
                   Environment.NewLine + "В Ньютонах:" + coef_strench * data_phisics.CEF_N * strenchVVod;

                }
                else if (PhisUnitComboBox.Text == "Ньютоны")
                {
                    coef_strench = 1 / data_phisics.CEF_N;
                    textBox2.Text = "В килоньютонах:" + coef_strench * data_phisics.CEF_KN * strenchVVod +
                   Environment.NewLine + "В Ньютонах:" + coef_strench * data_phisics.CEF_N * strenchVVod;


                }
            }

         }
        void distance_main()
        {
            if (PhisParameterComboBox.Text == "Масса")
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
                    textBox2.Text = "В граммах:" + coef_distance * data_phisics.CEF_MM * distanceVvod +
                   Environment.NewLine + "В сантиметры:" + coef_distance * data_phisics.CEF_CM * distanceVvod +
                   Environment.NewLine + "В метры:" + coef_distance * data_phisics.CEF_M * distanceVvod +
                   Environment.NewLine + "В километры:" + coef_distance * data_phisics.CEF_KM * distanceVvod;
                }
                else if (PhisUnitComboBox.Text == "Сантиметры")
                {
                    coef_distance = 1 / data_phisics.CEF_CM;
                    textBox2.Text = "В граммах:" + coef_distance * data_phisics.CEF_MM * distanceVvod +
                   Environment.NewLine + "В сантиметры:" + coef_distance * data_phisics.CEF_CM * distanceVvod +
                   Environment.NewLine + "В метры:" + coef_distance * data_phisics.CEF_M * distanceVvod +
                   Environment.NewLine + "В километры:" + coef_distance * data_phisics.CEF_KM * distanceVvod;

                }
                else if (PhisUnitComboBox.Text == "Дециметры")
                {
                    coef_distance = 1 / data_phisics.CEF_M;
                    textBox2.Text = "В граммах:" + coef_distance * data_phisics.CEF_MM * distanceVvod +
                   Environment.NewLine + "В сантиметры:" + coef_distance * data_phisics.CEF_CM * distanceVvod +
                   Environment.NewLine + "В метры:" + coef_distance * data_phisics.CEF_M * distanceVvod +
                   Environment.NewLine + "В километры:" + coef_distance * data_phisics.CEF_KM * distanceVvod;
                }
                else if (PhisUnitComboBox.Text == "Километры")
                {
                    coef_distance = 1 / data_phisics.CEF_KM;
                    textBox2.Text = "В граммах:" + coef_distance * data_phisics.CEF_MM * distanceVvod +
                   Environment.NewLine + "В сантиметры:" + coef_distance * data_phisics.CEF_CM * distanceVvod +
                   Environment.NewLine + "В метры:" + coef_distance * data_phisics.CEF_M * distanceVvod +
                   Environment.NewLine + "В километры:" + coef_distance * data_phisics.CEF_KM * distanceVvod;
                }

            }
        }


        private void textBox1_TextChanged(object sender, EventArgs e)
        {

            pressure_main();
            time_main();
            mass_main();
            energy_main();
            strench_main();
            distance_main();

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
                    textBox2.Text = "В граммах:" + coef_mass * data_phisics.CEF_GM * massVvod +
                   Environment.NewLine + "В килограммах:" + coef_mass * data_phisics.CEF_KG * massVvod +
                   Environment.NewLine + "В центнерах:" + coef_mass * data_phisics.CEF_CENT * massVvod +
                   Environment.NewLine + "В тоннах:" + coef_mass * data_phisics.CEF_TON * massVvod;
                }
                else if (PhisUnitComboBox.Text == "Килограммы")
                {
                    coef_mass = 1 / data_phisics.CEF_KG;
                    textBox2.Text = "В граммах:" + coef_mass * data_phisics.CEF_GM * massVvod +
                   Environment.NewLine + "В килограммах:" + coef_mass * data_phisics.CEF_KG * massVvod +
                   Environment.NewLine + "В центнерах:" + coef_mass * data_phisics.CEF_CENT * massVvod +
                   Environment.NewLine + "В тоннах:" + coef_mass * data_phisics.CEF_TON * massVvod;

                }
                else if (PhisUnitComboBox.Text == "Центнеры")
                {
                    coef_mass = 1 / data_phisics.CEF_CENT;
                    textBox2.Text = "В граммах:" + coef_mass * data_phisics.CEF_GM * massVvod +
                   Environment.NewLine + "В килограммах:" + coef_mass * data_phisics.CEF_KG * massVvod +
                   Environment.NewLine + "В центнерах:" + coef_mass * data_phisics.CEF_CENT * massVvod +
                   Environment.NewLine + "В тоннах:" + coef_mass * data_phisics.CEF_TON * massVvod;

                }
                else if (PhisUnitComboBox.Text == "Тонны")
                {
                    coef_mass = 1 / data_phisics.CEF_TON;
                    textBox2.Text = "В граммах:" + coef_mass * data_phisics.CEF_GM * massVvod +
                   Environment.NewLine + "В килограммах:" + coef_mass * data_phisics.CEF_KG * massVvod +
                   Environment.NewLine + "В центнерах:" + coef_mass * data_phisics.CEF_CENT * massVvod +
                   Environment.NewLine + "В тоннах:" + coef_mass * data_phisics.CEF_TON * massVvod;
                }

            }
           





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
    }



}
