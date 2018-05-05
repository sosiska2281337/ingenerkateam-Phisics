using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Globalization;
using System.IO;
using System.Text;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class add_new_ED : Form
    {
        public struct PhisLabel
        {
            public  TextBox vvod_name_ED;
            public  TextBox vvod_value_ED;  
        };       

        PhisLabel[] newPhisVel = new PhisLabel[200];
        private int nomer_phis_vel = 0;
        int y = 185;

        public int nomer = 100;       

        public add_new_ED()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (nomer_phis_vel >= 6)
            {
                return;
            }
             FV_newPhisVel();
        }

        private void button_delete_ED_Click(object sender, EventArgs e)
        {
            if (nomer_phis_vel == 0)
            {
                return;
            }

            nomer_phis_vel--;
            y = y - 25;
            //Из частейц этой формы удали еще и кнопку в скобках
            this.Controls.Remove(newPhisVel[nomer_phis_vel].vvod_name_ED);
            this.Controls.Remove(newPhisVel[nomer_phis_vel].vvod_value_ED);
        }

        private void FV_newPhisVel()
        {
            newPhisVel[nomer_phis_vel].vvod_name_ED = new TextBox();
            newPhisVel[nomer_phis_vel].vvod_name_ED.Text = "Тонны";
            newPhisVel[nomer_phis_vel].vvod_name_ED.ForeColor = Color.Gray;
            newPhisVel[nomer_phis_vel].vvod_name_ED.Top = y;
            newPhisVel[nomer_phis_vel].vvod_name_ED.Left = 4;
            newPhisVel[nomer_phis_vel].vvod_name_ED.Width = 234;
            //К частям этой формы добавь еще и кнопку в скобках
            newPhisVel[nomer_phis_vel].vvod_name_ED.Enter += new System.EventHandler(this.vvod_name_FV_Enter2);
            newPhisVel[nomer_phis_vel].vvod_name_ED.Leave += new System.EventHandler(this.vvod_name_FV_Leave2);
            this.Controls.Add(newPhisVel[nomer_phis_vel].vvod_name_ED);

            newPhisVel[nomer_phis_vel].vvod_value_ED = new TextBox();
            newPhisVel[nomer_phis_vel].vvod_value_ED.Text = "0.000";
            newPhisVel[nomer_phis_vel].vvod_value_ED.ForeColor = Color.Gray;
            newPhisVel[nomer_phis_vel].vvod_value_ED.Top = y;
            newPhisVel[nomer_phis_vel].vvod_value_ED.Left = 261;
            newPhisVel[nomer_phis_vel].vvod_value_ED.Width = 234;
            newPhisVel[nomer_phis_vel].vvod_value_ED.Enter += new System.EventHandler(this.vvod_name_FV_Enter3);
            newPhisVel[nomer_phis_vel].vvod_value_ED.Leave += new System.EventHandler(this.vvod_name_FV_Leave3);
            newPhisVel[nomer_phis_vel].vvod_value_ED.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.vvod_main_ED_coef_ED_KeyPress);
            this.Controls.Add(newPhisVel[nomer_phis_vel].vvod_value_ED);

            nomer_phis_vel++;
            y = y + 25;
        }

        private void add_new_ED_Load(object sender, EventArgs e)
        {
            vvod_name_FV_Leave(sender, e);//Если тут был пробел, пишем слово "граммы"
            vvod_name_ED_Leave(sender, e);
            vvod_main_name_ED_Leave(sender, e);
            vvod_main_ED_coef_ED_Leave(sender, e);
        }
        
        //------------------------------------------------------------------
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
        private void vvod_name_FV_Leave2(object sender, EventArgs e)
        {
            for (int nomer = 0; nomer < nomer_phis_vel; nomer++)
            {
                if (sender.Equals(newPhisVel[nomer].vvod_name_ED))
                {
                    if (newPhisVel[nomer].vvod_name_ED.Text == "")
                    {
                        newPhisVel[nomer].vvod_name_ED.ForeColor = Color.Gray;
                        newPhisVel[nomer].vvod_name_ED.Text = "Тонны";
                    }
                }
            }
        }

        private void vvod_name_FV_Enter2(object sender, EventArgs e)
        {
            for (int nomer = 0; nomer < nomer_phis_vel; nomer++)
            {
                if (sender.Equals(newPhisVel[nomer].vvod_name_ED))
                {
                    newPhisVel[nomer].vvod_name_ED.ForeColor = Color.Black;
                    if (newPhisVel[nomer].vvod_name_ED.Text == "Тонны")
                    {
                        newPhisVel[nomer].vvod_name_ED.Text = "";
                    }
                }
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
        private void vvod_name_FV_Leave3(object sender, EventArgs e)
        {
            for (int nomer = 0; nomer < nomer_phis_vel; nomer++)
            {
                if (sender.Equals(newPhisVel[nomer].vvod_value_ED))
                {
                    if (newPhisVel[nomer].vvod_value_ED.Text == "")
                    {
                        newPhisVel[nomer].vvod_value_ED.ForeColor = Color.Gray;
                        newPhisVel[nomer].vvod_value_ED.Text = "0.000";
                    }
                }
            }
        }

        private void vvod_name_FV_Enter3(object sender, EventArgs e)
        {
            for (int nomer = 0; nomer < nomer_phis_vel; nomer++)
            {
                if (sender.Equals(newPhisVel[nomer].vvod_value_ED))
                {
                    newPhisVel[nomer].vvod_value_ED.ForeColor = Color.Black;
                    if (newPhisVel[nomer].vvod_value_ED.Text == "0.000")
                    {
                        newPhisVel[nomer].vvod_value_ED.Text = "";
                    }
                }
            }
        }
        //----------------------------------------------------------------

        //Генерим название переменной
        private string phisVelName(int nomer)
        {
            return "newVvod" + nomer.ToString();
        }


        private void button_save_Click(object sender, EventArgs e)
        {
            string filename = "Converter.cs";

            bool uzhe_dabavil_CEFS = false;
            bool uzhe_dabavil_Message = false;
            bool uzhe_dabavil3 = false;
            bool uzhe_dabavil_mains = false;
            bool uzhe_dabavil_messeges = false;
            bool uzhe_dabavil_autocomplete = false;
            bool uzhe_dabavil_add_range = false;
            bool uzhe_dabavil_skobku = false;


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

            #region CEFS
            while (reader1.Peek() >= 0)
            {
                stroki1[nomer_stroki1] = reader1.ReadLine();


                if (stroki1[nomer_stroki1].Contains("//CEFS") && !uzhe_dabavil_CEFS)
                {
                    //n1 - номер переменной, nomer - последняя переменная в файле
                    /*
                    nomer_stroki++;
                    stroki1[nomer_stroki1] = reader1.ReadLine();
                    stroki1[nomer_stroki1++] = "        public const double CEF_newMain = 1;";
                    */
                    /*
                    for (int n1 = 0; n1 < nomer_phis_vel; n1++)
                    {

                         nomer_stroki1++;
                        stroki1[nomer_stroki1] = reader1.ReadLine(); 

                        stroki1[nomer_stroki1++] = "        public const double CEF_new" + phisVelName(nomer + n1) + " = " + newPhisVel[n1].vvod_value_ED.Text + ";";
                        uzhe_dabavil_CEFS = true;
                    }
                    */
                }

                nomer_stroki1++;
            }
            reader1.Close(); //закрываем поток
            #endregion

            while (reader2.Peek() >= 0)
            {

                stroki[nomer_stroki] = reader2.ReadLine();

                if (stroki[nomer_stroki].Contains("//void_messege") && !uzhe_dabavil_Message)
                {
                    nomer_stroki++;
                    stroki[nomer_stroki] = reader2.ReadLine();
                    stroki[nomer_stroki++] = "        void messege_new" + phisVelName(nomer) + "()";
                    stroki[nomer_stroki++] = "        {";
                    stroki[nomer_stroki++] = "            if (PhisParameterComboBox.Text == \"" + newFV + "\")";
                    stroki[nomer_stroki++] = "            {";
                    stroki[nomer_stroki++] = "                PhisUnitComboBox.Items.Clear();";
                    stroki[nomer_stroki++] = "                PhisUnitComboBox.Items.Add(\"" + newNameMainED + "\");";
                    stroki[nomer_stroki++] = "                PhisUnitComboBox.Items.Add(\"" + newNameED + "\");";
                    for (int n1 = 0; n1 < nomer_phis_vel; n1++)
                    {
                        
                        stroki[nomer_stroki++] = "            PhisUnitComboBox.Items.Add(\"" +newPhisVel[n1].vvod_name_ED.Text + "\");";
                  
                    }
                    stroki[nomer_stroki++] = "                PhisUnitComboBox.Text = \"" + newNameMainED + "\";";
                    stroki[nomer_stroki++] = "            }";
                    stroki[nomer_stroki++] = "        }";
                    uzhe_dabavil_Message = true;

                }
               

                //На фиг 100 функций создаешь? new_main и messege_new тебе надо ровно по одной
                else if (stroki[nomer_stroki].Contains("//mains") && !uzhe_dabavil_mains)
                {
                    nomer_stroki++;
                    stroki[nomer_stroki] = reader2.ReadLine();
                    stroki[nomer_stroki++] = "            new_main" + phisVelName(nomer) + "();";
                    uzhe_dabavil_mains = true;
                }
                else if (stroki[nomer_stroki].Contains("//messeges") && !uzhe_dabavil_messeges)
                {
                    nomer_stroki++;
                    stroki[nomer_stroki] = reader2.ReadLine();
                    stroki[nomer_stroki++] = "            messege_new" + phisVelName(nomer) + "();";
                    uzhe_dabavil_messeges = true;

                }
                else if (stroki[nomer_stroki].Contains("private System.Windows.Forms.TableLayoutPanel tableLayoutPanel1;") && !uzhe_dabavil_skobku)
                {
                    nomer_stroki++;
                    stroki[nomer_stroki] = reader2.ReadLine();
                    stroki[nomer_stroki++] = "  }";
                    uzhe_dabavil_skobku = true;

                }

                //Проверяем, что строка содержит нужные буквы
                else if (stroki[nomer_stroki].Contains("//void_main") && !uzhe_dabavil3)
                {
                    /*
                     * Вместо
                    nomer_stroki++;
                    stroki[nomer_stroki] = "        void new_main" + phisVelName(nomer + n1) + "()";
                     * 
                     * Пиши
                    stroki[nomer_stroki++] = "        void new_main" + phisVelName(nomer + n1) + "()";
                     Так компактнее в 1000 раз
                     */
                    nomer_stroki++;
                    stroki[nomer_stroki++] = reader2.ReadLine();
                    stroki[nomer_stroki++] = "        void new_main" + phisVelName(nomer) + "()";
                    stroki[nomer_stroki++] = "        {";
                    stroki[nomer_stroki++] = "            if (PhisParameterComboBox.Text == \"" + newFV + "\")";
                    stroki[nomer_stroki++] = "            {";
                    stroki[nomer_stroki++] = "                double coef_new = 1;";
                    stroki[nomer_stroki++] = "                double newVvod = 0;";
                    stroki[nomer_stroki++] = "                double CEF_newMain = 1;";
                    for (int n1 = 0; n1 < nomer_phis_vel; n1++)
                    {

                    
                        //stroki[nomer_stroki++] = "         double CEF_new" + phisVelName(nomer + n1) + " = " + newPhisVel[n1].vvod_value_ED.Text + ";";
                        //uzhe_dabavil_CEFS = true;
                    }
                    stroki[nomer_stroki++] = "                if (!Double.TryParse(valueTextBox.Text, out newVvod))";
                    stroki[nomer_stroki++] = "                {";
                    stroki[nomer_stroki++] = "                    newVvod = 0;";
                    stroki[nomer_stroki++] = "                }";
                    stroki[nomer_stroki++] = "                if (PhisUnitComboBox.Text == \"" + newNameMainED + "\")";
                    stroki[nomer_stroki++] = "                {";
                    stroki[nomer_stroki++] = "                    coef_new = 1 / CEF_newMain;";
                    stroki[nomer_stroki++] = "                }";

                    //В форе у тебя только else if должны быть. На фиг 100 функций создаешь? // я знаю?
                    for (int n1 = 0; n1 < nomer_phis_vel; n1++)
                    {
                        nomer_stroki++;
                        stroki[nomer_stroki++] = "                else if (PhisUnitComboBox.Text == \"" + newPhisVel[n1].vvod_name_ED.Text + "\")";
                        stroki[nomer_stroki++] = "                {";
                        stroki[nomer_stroki++] = "                    coef_new = 1 / " + newPhisVel[n1].vvod_value_ED.Text + ";";
                        stroki[nomer_stroki++] = "                }//1";
                    }
                   
                    stroki[nomer_stroki++] = "                textBox2.Text = Environment.NewLine + \"" + newNameMainED + "\" + Math.Round((coef_new * CEF_newMain * newVvod), 12);";
                    for (int n1 = 0; n1 < nomer_phis_vel; n1++)
                    {
                        stroki[nomer_stroki++] = "                textBox2.Text = Environment.NewLine + \"" + newPhisVel[n1].vvod_name_ED.Text + "\" + Math.Round((coef_new * " + newPhisVel[n1].vvod_value_ED.Text + " * newVvod), 12);";
                    }
                   
                    stroki[nomer_stroki++] = "           }";
                    stroki[nomer_stroki++] = "      }";
                    uzhe_dabavil3 = true;
                }
                else if (stroki[nomer_stroki].Contains("}//1")/* && !uzhe_dabavil3*/)
                {
                    for (int n1 = 0; n1 < nomer_phis_vel; n1++)
                    {
                        if (nomer_phis_vel >= 1)
                        {
                            nomer_stroki++;
                            stroki[nomer_stroki++] = "                {";
                            stroki[nomer_stroki++] = "                    coef_new = 1 / CEF_new" + phisVelName(nomer + n1) + ";";
                            stroki[nomer_stroki++] = "                }";//На какой хрен тут был слэш? //а я знаю?
                        }
                    }
                }

                //Разделить строку на слова (разделитель - пробел)
                /*string[] podstroki = stroki[nomer_stroki].Split(new String[] { " ", ";" }, StringSplitOptions.None);
                //Количество элементов массива строк
                //MessageBox.Show(podstroki[podstroki.Length - 2]); //Тут public. Тебе надо другое слово

                //КОнвертируем строку в число. Только тебе надо не -1012 конвертить
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
                nomer_stroki3++;
                stroki3[nomer_stroki3] = reader3.ReadLine();  //Прочитали строку из файла

                if (stroki3[nomer_stroki3].Contains("this.PhisParameterComboBox.AutoCompleteCustomSource.AddRange(new string[] {") && !uzhe_dabavil_autocomplete)
                {
                    nomer_stroki3++;
                    stroki3[nomer_stroki3] = reader3.ReadLine();  //Прочитали строку из файла

                    stroki3[nomer_stroki3++] = "            \"" + newFV + "\",";

                    uzhe_dabavil_autocomplete = true;
                }
                else if (stroki3[nomer_stroki3].Contains("this.PhisParameterComboBox.Items.AddRange(new object[] {") && !uzhe_dabavil_add_range)
                {
                    nomer_stroki3++;          
                stroki3[nomer_stroki3] = reader3.ReadLine();  //Прочитали строку из файла

                    stroki3[nomer_stroki3++] = "            \"" + newFV + "\",";
 

                    uzhe_dabavil_add_range = true;
                }

                
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
        private void vvod_main_ED_coef_ED_KeyPress(object sender, KeyPressEventArgs e)
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

                if (c == ',' && text.Contains(","))
                {
                    e.Handled = true;
                }
                else if (c == '-' && text.Contains("-"))
                {
                    e.Handled = true;
                }
                else if (c == '.' && text.Contains("."))
                {
                    e.Handled = true;
                }


            }
        }

    }
}
