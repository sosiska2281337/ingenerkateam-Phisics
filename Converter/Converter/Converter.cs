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
                PhisUnitComboBox.Items.Add("Милиметр");
                PhisUnitComboBox.Items.Add("Сантиметр");
                PhisUnitComboBox.Items.Add("Дециметр");
                PhisUnitComboBox.Items.Add("Километр");
                PhisParameterComboBox.ForeColor = Color.Blue;
                PhisUnitComboBox.ForeColor = Color.Blue;

                PhisUnitComboBox.Text = "Милиметр";
            }
        }
        void messege_strench()
        {
            if (PhisParameterComboBox.Text == "Сила")
            {
                PhisUnitComboBox.Items.Clear();
                PhisUnitComboBox.Items.Add("КилоНьютон");
                PhisUnitComboBox.Items.Add("Ньютон");
                PhisParameterComboBox.ForeColor = Color.Red;
                PhisUnitComboBox.ForeColor = Color.Red;

                PhisUnitComboBox.Text = "КилоНьютон";
            }
        }  
        void messege_mass()
        {
            if (PhisParameterComboBox.Text == "Масса")
            {
                PhisUnitComboBox.Items.Clear();
                PhisUnitComboBox.Items.Add("Грамм");
                PhisUnitComboBox.Items.Add("Килограмм");
                PhisUnitComboBox.Items.Add("Центнер");
                PhisUnitComboBox.Items.Add("Тонна");
                PhisParameterComboBox.ForeColor = Color.Green;
                PhisUnitComboBox.ForeColor = Color.Green;

                PhisUnitComboBox.Text = "Грамм";
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
                PhisUnitComboBox.Items.Add("Секунда");
                PhisUnitComboBox.Items.Add("Минута");
                PhisUnitComboBox.Items.Add("Час");
                PhisUnitComboBox.Items.Add("Сутки");
                PhisParameterComboBox.ForeColor = Color.Aqua;
                PhisUnitComboBox.ForeColor = Color.Aqua;

                PhisUnitComboBox.Text = "Секунда";
            }
        }
        void messege_energy ()
        {
            if (PhisParameterComboBox.Text == "Енергия")
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



        private void textBox1_TextChanged(object sender, EventArgs e)
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
                if (PhisParameterComboBox.Text == "Время")
                {
                    double coef_time = 1;
                    double timeVvod = 0;
                    if (!Double.TryParse(valueTextBox.Text, out timeVvod))
                    {
                        timeVvod = 0;
                    }

                    if (PhisUnitComboBox.Text == "Секунда")
                    {
                        coef_time = 1 / data_phisics.CEF_SEC;
                        textBox2.Text = "В Секундах:" + coef_time * data_phisics.CEF_SEC * timeVvod +
                       Environment.NewLine + "В Минутах:" + coef_time * data_phisics.CEF_MIN * timeVvod +
                       Environment.NewLine + "В Часах:" + coef_time * data_phisics.CEF_HOUR * timeVvod +
                       Environment.NewLine + "В Сутках:" + coef_time * data_phisics.CEF_DAY * timeVvod;
                    }
                    else if (PhisUnitComboBox.Text == "Минута")
                    {
                        coef_time = 1 / data_phisics.CEF_MIN;
                        textBox2.Text = "В Секундах:" + coef_time * data_phisics.CEF_SEC * timeVvod +
                      Environment.NewLine + "В Минутах:" + coef_time * data_phisics.CEF_MIN * timeVvod +
                      Environment.NewLine + "В Часах:" + coef_time * data_phisics.CEF_HOUR * timeVvod +
                      Environment.NewLine + "В Сутках:" + coef_time * data_phisics.CEF_DAY * timeVvod;

                    }
                    else if (PhisUnitComboBox.Text == "Часа")
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
                       Environment.NewLine + "В сутках:" + coef_mass * data_phisics.CEF_TON * massVvod;
                    }
                    else if (PhisUnitComboBox.Text == "Килограммы")
                    {
                        coef_mass = 1 / data_phisics.CEF_KG;
                        textBox2.Text = "В граммах:" + coef_mass * data_phisics.CEF_GM * massVvod +
                       Environment.NewLine + "В килограммах:" + coef_mass * data_phisics.CEF_KG * massVvod +
                       Environment.NewLine + "В центнерах:" + coef_mass * data_phisics.CEF_CENT * massVvod +
                       Environment.NewLine + "В сутках:" + coef_mass * data_phisics.CEF_TON * massVvod;

                    }
                    else if (PhisUnitComboBox.Text == "Центнеры")
                    {
                        coef_mass = 1 / data_phisics.CEF_CENT;
                        textBox2.Text = "В граммах:" + coef_mass * data_phisics.CEF_GM * massVvod +
                       Environment.NewLine + "В килограммах:" + coef_mass * data_phisics.CEF_KG * massVvod +
                       Environment.NewLine + "В центнерах:" + coef_mass * data_phisics.CEF_CENT * massVvod +
                       Environment.NewLine + "В сутках:" + coef_mass * data_phisics.CEF_TON * massVvod;

                    }
                    else if (PhisUnitComboBox.Text == "Тонны")
                    {
                        coef_mass = 1 / data_phisics.CEF_TON;
                        textBox2.Text = "В граммах:" + coef_mass * data_phisics.CEF_GM * massVvod +
                       Environment.NewLine + "В килограммах:" + coef_mass * data_phisics.CEF_KG * massVvod +
                       Environment.NewLine + "В центнерах:" + coef_mass * data_phisics.CEF_CENT * massVvod +
                       Environment.NewLine + "В сутках:" + coef_mass * data_phisics.CEF_TON * massVvod;
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