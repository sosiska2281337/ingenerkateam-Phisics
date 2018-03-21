﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class add_new_ED : Form
    {
        public struct PhisLabel
        {
            public  TextBox vvod_name_ED;
            public  TextBox vvod_value_ED;
            //public TextBox plus;            
        };

        PhisLabel[] newPhisVel = new PhisLabel[200];
        int nomer_phis_vel = 0;
        int y = 185;
        private int  vvod_name_ED;
        private int vvod_value_ED;
       

        public add_new_ED()
        {
            InitializeComponent();
        }
        private void button1_Click(object sender, EventArgs e)
        {
            newPhisVel[nomer_phis_vel].vvod_name_ED = new TextBox();
            newPhisVel[nomer_phis_vel].vvod_name_ED.Text = "Тонны";
            newPhisVel[nomer_phis_vel].vvod_name_ED.Top = y;
            newPhisVel[nomer_phis_vel].vvod_name_ED.Left = 4;
            newPhisVel[nomer_phis_vel].vvod_name_ED.Width = 234; 
            this.Controls.Add(newPhisVel[nomer_phis_vel].vvod_name_ED);

            newPhisVel[nomer_phis_vel].vvod_value_ED = new TextBox();
            newPhisVel[nomer_phis_vel].vvod_value_ED.Text = "0.001";
            newPhisVel[nomer_phis_vel].vvod_value_ED.Top = y;
            newPhisVel[nomer_phis_vel].vvod_value_ED.Left = 261;
            newPhisVel[nomer_phis_vel].vvod_value_ED.Width = 234;
            this.Controls.Add(newPhisVel[nomer_phis_vel].vvod_value_ED);

            nomer_phis_vel++;             
            y = y + 25;
        }
        private void button_delete_ED_Click(object sender, EventArgs e)
        {
            
        }


        private void add_new_ED_Load(object sender, EventArgs e)
        {
            vvod_name_FV_Leave(sender, e);//Если тут был пробел, пишем слово "граммы"
            vvod_name_ED_Leave(sender, e);
            vvod_main_name_ED_Leave(sender, e);
            vvod_main_ED_coef_ED_Leave(sender, e);
        }




        //------------------------------------------------------------------
        private void vvod_name_FV_TextChanged(object sender, EventArgs e)
        {
        }
        private void vvod_name_FV_Leave(object sender, EventArgs e)
        {
            if (vvod_name_FV.Text == "")
            {
                vvod_name_FV.ForeColor = Color.Gray;
                vvod_name_FV.Text = "Масса";
            }
        }

        private void vvod_name_FV_Enter(object sender, EventArgs e)
        {
            vvod_name_FV.ForeColor = Color.Black;
            if (vvod_name_FV.Text == "Масса")
            {

                vvod_name_FV.Text = "";
            }

        }
        //------------------------------------------------------------------

        private void vvod_main_name_ED_Leave(object sender, EventArgs e)
        {
            if (vvod_main_name_ED.Text == "")
            {
                vvod_main_name_ED.ForeColor = Color.Gray;
                vvod_main_name_ED.Text = "Килограммы";
            }
        }

        private void vvod_main_name_ED_Enter(object sender, EventArgs e)
        {
            vvod_main_name_ED.ForeColor = Color.Black;
            if (vvod_main_name_ED.Text == "Килограммы")
            {

                vvod_main_name_ED.Text = "";
            }
        }

        private void vvod_main_name_ED_TextChanged(object sender, EventArgs e)
        {

        }

        //------------------------------------------------------------------
        private void vvod_name_ED_Leave(object sender, EventArgs e)
        {
            if (vvod_name_ED_.Text == "")
            {
                vvod_name_ED_.ForeColor = Color.Gray;
                vvod_name_ED_.Text = "Граммы";
            }
        }

        private void vvod_name_ED_Enter(object sender, EventArgs e)
        {
            vvod_name_ED_.ForeColor = Color.Black;
            if (vvod_name_ED_.Text == "Граммы")
            {

                vvod_name_ED_.Text = "";
            }
        }

        private void vvod_name_ED_TextChanged(object sender, EventArgs e)
        {

        }
        //------------------------------------------------------------------
        private void vvod_main_ED_coef_ED_TextChanged(object sender, EventArgs e)
        {

        }

        private void vvod_main_ED_coef_ED_Leave(object sender, EventArgs e)
        {
            if (vvod_main_ED_coef_ED.Text == "")
            {
                vvod_main_ED_coef_ED.ForeColor = Color.Gray;
                vvod_main_ED_coef_ED.Text = "1000";
            }
        }

        private void vvod_main_ED_coef_ED_Enter(object sender, EventArgs e)
        {
            vvod_main_ED_coef_ED.ForeColor = Color.Black;
            if (vvod_main_ED_coef_ED.Text == "1000")
            {

                vvod_main_ED_coef_ED.Text = "";
            }

        }
        //------------------------------------------------------------------
        private void button_save_Click(object sender, EventArgs e)
        {
            bool uzhe_dabavil1 = false;
            bool uzhe_dabavil2 = false;
            bool uzhe_dabavil3 = false;
            bool uzhe_dabavil4 = false;
            bool uzhe_dabavil5 = false;
            bool uzhe_dabavil6 = false;
            bool uzhe_dabavil7 = false;
            bool uzhe_dabavil8 = false;


            //Читаем файл построчно
            FileStream file2 = new FileStream("Converter.cs", FileMode.Open); //создаем файловый поток
            StreamReader reader2 = new StreamReader(file2); // создаем «потоковый читатель» и связываем его с файловым потоком 
            FileStream file1 = new FileStream("data_phisics.cs", FileMode.Open); //создаем файловый поток
            StreamReader reader1 = new StreamReader(file1); // создаем «потоковый читатель» и связываем его с файловым потоком 
            FileStream file3 = new FileStream("Converter.Designer.cs", FileMode.Open); //создаем файловый поток
            StreamReader reader3 = new StreamReader(file3); // создаем «потоковый читатель» и связываем его с файловым потоком 
            String[] stroki = new String[10000];
            int nomer_stroki = 0;
            String[] stroki1 = new String[10000];
            int nomer_stroki1 = 0;
            String[] stroki3 = new String[10000];
            int nomer_stroki3 = 0;

            String newFV = vvod_name_FV.Text;
            String newFV_Vvod = vvod_name_FV.Text;
            String newNameMainED = vvod_main_name_ED.Text;
            String newNameED = vvod_name_ED_.Text;
            String newcoefED = vvod_main_ED_coef_ED.Text;
            
            while (reader1.Peek() >= 0)
            {
                stroki1[nomer_stroki1] = reader1.ReadLine();  //Прочитали строку из файла

                if (stroki1[nomer_stroki1].Contains("//2") && !uzhe_dabavil5)
                {
                    nomer_stroki1++;
                    stroki1[nomer_stroki1] = reader1.ReadLine();
                    nomer_stroki1++;
                    stroki1[nomer_stroki1] = "public const double CEF_new = " + newcoefED + ";";
                    nomer_stroki1++;
                    stroki1[nomer_stroki1] = "public const double CEF_newMain = 1;"; 
                    uzhe_dabavil5 = true;
                }
                else if (stroki1[nomer_stroki1].Contains("//1") && !uzhe_dabavil1)
                {
                    nomer_stroki1++;
                    stroki1[nomer_stroki1] = reader1.ReadLine();
                    nomer_stroki1++;
                    stroki1[nomer_stroki1] = "public double  newVvod;";
                    uzhe_dabavil1 = true;
                }
                
                nomer_stroki1++;
            }
            reader1.Close(); //закрываем поток

            while (reader2.Peek() >= 0)
            {
                stroki[nomer_stroki] = reader2.ReadLine();  //Прочитали строку из файла

                if (stroki[nomer_stroki].Contains("//openFileDialog1.ShowDialog();") && !uzhe_dabavil2)

                {
                    nomer_stroki++;
                    stroki[nomer_stroki] = reader2.ReadLine();
                    nomer_stroki++;
                    stroki[nomer_stroki] = reader2.ReadLine();
                    nomer_stroki++;
                    stroki[nomer_stroki] = "        void messege_new()";
                    nomer_stroki++;
                    stroki[nomer_stroki] = "        {";
                    nomer_stroki++;
                    stroki[nomer_stroki] = "            if (PhisParameterComboBox.Text == \"" + newFV + "\")";
                    nomer_stroki++;
                    stroki[nomer_stroki] = "            {";
                    nomer_stroki++;
                    stroki[nomer_stroki] = "                PhisUnitComboBox.Items.Clear();";
                    nomer_stroki++;
                    stroki[nomer_stroki] = "                PhisUnitComboBox.Items.Add(\"" + newNameMainED + "\");";
                    nomer_stroki++;
                    stroki[nomer_stroki] = "                PhisUnitComboBox.Items.Add(\"" + newNameED + "\");";
                    nomer_stroki++;
                    stroki[nomer_stroki] = "                PhisUnitComboBox.Text = (\"" + newNameMainED + "\");";
                    nomer_stroki++;
                    stroki[nomer_stroki] = "            }";
                    nomer_stroki++;
                    stroki[nomer_stroki] = "        }";
                    uzhe_dabavil2 = true;
                }

                else if (stroki[nomer_stroki].Contains("//7") && !uzhe_dabavil4)
                {
                    nomer_stroki++;
                    stroki[nomer_stroki] = reader2.ReadLine();
                    nomer_stroki++;
                    stroki[nomer_stroki] = reader2.ReadLine();
                    nomer_stroki++;
                    stroki[nomer_stroki] = "            new_main();";

                    uzhe_dabavil4 = true;
                }
                else if (stroki[nomer_stroki].Contains("//6") && !uzhe_dabavil6)
                {
                    nomer_stroki++;
                    stroki[nomer_stroki] = reader2.ReadLine();
                    nomer_stroki++;
                    stroki[nomer_stroki] = reader2.ReadLine();
                    nomer_stroki++;
                    stroki[nomer_stroki] = "            messege_new();";

                    uzhe_dabavil6 = true;
                }
 

                    //Проверяем, что строка содержит нужные буквы
                else  if (stroki[nomer_stroki].Contains("//3") && !uzhe_dabavil3)
                    {
                        nomer_stroki++;
                        stroki[nomer_stroki] = reader2.ReadLine();
                        nomer_stroki++;
                        stroki[nomer_stroki] = reader2.ReadLine();
                        nomer_stroki++;
                        stroki[nomer_stroki] = "        void new_main()";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "        {";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "            if (PhisParameterComboBox.Text == \"" + newFV + "\")";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "            {";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "                double coef_new = 1;";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "                double newVvod = 0;";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "                if (!Double.TryParse(valueTextBox.Text, out newVvod))";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "                {";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "                    newVvod = 0;";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "                }";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "                if (PhisUnitComboBox.Text == \"" + newNameMainED + "\")";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "                {";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "                    coef_new = 1 / data_phisics.CEF_newMain;";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "                }";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "                else if (PhisUnitComboBox.Text == \"" + newNameED + "\")";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "                {";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "                    coef_new = 1 / data_phisics.CEF_new;";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "                }";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "                textBox2.Text += Environment.NewLine + \"" + newNameMainED + "\" + Math.Round((coef_new * data_phisics.CEF_newMain * newVvod), 5);";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "                textBox2.Text += Environment.NewLine + \"" + newNameED + "\" + Math.Round((coef_new * data_phisics.CEF_new * newVvod), 5);";
                         nomer_stroki++;
                        stroki[nomer_stroki] = "           }";
                        nomer_stroki++;
                        stroki[nomer_stroki] = "      }";
                        uzhe_dabavil3 = true;
                }

                        //Разделить строку на слова (разделитель - пробел)
                        /*string[] podstroki = stroki[nomer_stroki].Split(new String[] { " ", ";" }, StringSplitOptions.None);
                        //Количество элементов массива строк
                        //MessageBox.Show(podstroki[podstroki.Length - 2]); //Тут public. Тебе надо другое слово

                        //КОнвертируем строку в число. Только тебе надо не -105 конвертить
                        int result;
                        if (Int32.TryParse(podstroki[podstroki.Length - 2], out result) == true)
                        {
                            //В переменной result хранится число
                            result++;
                            String stroka_s_novym_chislom = result.ToString();//Конвертируем число в строку

                            //Замена строки (у тебя не 0 в подстроках, а другое число)
                            stroki[nomer_stroki] = stroki[nomer_stroki].Replace(podstroki[podstroki.Length - 2], stroka_s_novym_chislom);
                        }*/
                        nomer_stroki++;
                  }

                reader2.Close(); //закрываем поток

            while (reader3.Peek() >= 0)
            {
                stroki3[nomer_stroki3] = reader3.ReadLine();  //Прочитали строку из файла


                if (stroki3[nomer_stroki3].Contains("this.PhisParameterComboBox.AutoCompleteCustomSource.AddRange(new string[] {") && !uzhe_dabavil7)
                {
                    nomer_stroki3++;
                    stroki3[nomer_stroki3] = reader3.ReadLine();
                    nomer_stroki3++;
                    stroki3[nomer_stroki3] = "\"" + newFV + "\",";
                    nomer_stroki3++;
                    stroki3[nomer_stroki3] = reader3.ReadLine();

                    uzhe_dabavil7 = true;
                }
                else if (stroki3[nomer_stroki3].Contains("this.PhisParameterComboBox.Items.AddRange(new object[] {") && !uzhe_dabavil8)
                {
                    nomer_stroki3++;
                    stroki3[nomer_stroki3] = reader3.ReadLine();
                    nomer_stroki3++;
                    stroki3[nomer_stroki3] = "\"" + newFV + "\",";
                    nomer_stroki3++;
                    stroki3[nomer_stroki3] = reader3.ReadLine();

                    uzhe_dabavil8 = true;
                }

                nomer_stroki3++;
            }




            reader3.Close(); //закрываем поток

            File.WriteAllText("data_phisics.cs", "//+кеф и ввод");
            for (int nomer1 = 0; nomer1 < nomer_stroki1; nomer1++)
            {
                File.AppendAllText("data_phisics.cs", Environment.NewLine + stroki1[nomer1]);
            }
            //Запись строки в конец файла
            File.WriteAllText("Converter.cs", "//+фв и вычисления и сообщения");
            for (int nomer = 0; nomer < nomer_stroki; nomer++)
            {
                File.AppendAllText("Converter.cs", Environment.NewLine + stroki[nomer]);
            }
            File.WriteAllText("Converter.Designer.cs", "");
            for (int nomer3 = 0; nomer3 < nomer_stroki3; nomer3++)
            {
                File.AppendAllText("Converter.Designer.cs", Environment.NewLine + stroki3[nomer3]);
            }

            Environment.Exit(0);
        }
        


    }
}
