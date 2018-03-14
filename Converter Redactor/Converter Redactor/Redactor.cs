using System;
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


        private void button_save_Click(object sender, EventArgs e)
        {
            bool uzhe_dabavil = false;

            //Читаем файл построчно
            FileStream file2 = new FileStream("Converter.cs", FileMode.Open); //создаем файловый поток
            StreamReader reader = new StreamReader(file2); // создаем «потоковый читатель» и связываем его с файловым потоком 
            String[] stroki = new String[10000];
            int nomer_stroki = 0;



            while (reader.Peek() >= 0)

            {
                stroki[nomer_stroki] = reader.ReadLine().Trim();  //Прочитали строку из файла

                //Проверяем, что строка содержит нужные буквы
                if (stroki[nomer_stroki].Contains("public const int KOL_VO_SOOBSHENII =") && !uzhe_dabavil)
                {
                    nomer_stroki++;
                    stroki[nomer_stroki] = "gsddgsg";
                    uzhe_dabavil = true;
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
                }


                nomer_stroki++;
            }

            reader.Close(); //закрываем поток

            //Запись строки в конец файла
            File.WriteAllText("Converter.cs", "");
            for (int nomer = 0; nomer < nomer_stroki; nomer++)
            {
                File.AppendAllText("Converter.cs", Environment.NewLine + stroki[nomer]);
            }
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


    }
}
