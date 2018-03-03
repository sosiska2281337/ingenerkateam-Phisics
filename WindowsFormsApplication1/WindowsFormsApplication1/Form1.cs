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
        public add_new_ED()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {

        }

        private void add_new_ED_Load(object sender, EventArgs e)
        {
            vvod_name_FV_Leave(sender, e);
        }

        private void button3_Click(object sender, EventArgs e)
        {

        }



        private void vvod_main_name_ED_TextChanged(object sender, EventArgs e)
        {

        }

        private void vvod_name_ED__TextChanged(object sender, EventArgs e)
        {

        }

        private void vvod_main_ED_coef_ED_TextChanged(object sender, EventArgs e)
        {

        }

        private void button_save_Click(object sender, EventArgs e)
        {
            //Читаем файл построчно
            FileStream file2 = new FileStream("Converter.cs", FileMode.Open); //создаем файловый поток
            StreamReader reader = new StreamReader(file2); // создаем «потоковый читатель» и связываем его с файловым потоком 
            String[] stroki = new String[10000];
            int nomer_stroki = 0;

            while (reader.Peek() >= 0)
            {
                stroki[nomer_stroki] = reader.ReadLine().Trim();  //Прочитали строку из файла
                
                //Проверяем, что строка содержит нужные буквы
                if (stroki[nomer_stroki].Contains("public const int KOL_VO_SOOBSHENII ="))
                {
                    //Разделить строку на слова (разделитель - пробел)
                    string[] podstroki = stroki[nomer_stroki].Split(new String[] { " ", ";" }, StringSplitOptions.None);
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
                    }
                }


                nomer_stroki++;                
            }

            reader.Close(); //закрываем поток

            //Запись строки в конец файла
            File.WriteAllText("Converter.cs", "");
            for (int nomer = 0; nomer < nomer_stroki; nomer++ )
            {
                File.AppendAllText("Converter.cs", Environment.NewLine + stroki[nomer]);
            }
        }

        private void button_delete_ED_Click(object sender, EventArgs e)
        {

        }
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
            vvod_name_FV.ForeColor = Color.Gray;
            if (vvod_name_FV.Text == "Масса")
            {
                vvod_name_FV.ForeColor = Color.Green;
                vvod_name_FV.Text = "";
            }

        }

        private void vvod_name_ED__Leave(object sender, EventArgs e)
        {

        }

        private void vvod_name_ED__Enter(object sender, EventArgs e)
        {

        }





    }
}
