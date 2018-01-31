using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

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
/*messege_strench(object sender, EventArgs e);
messege_mass(object sender, EventArgs e);
messege_pressure(object sender, EventArgs e);
messege_time(object sender, EventArgs e);
messege_energy(object sender, EventArgs e);*/

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
        void messege_strench(object sender, EventArgs e)
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
        
       void  messege_mass(object sender, EventArgs e)
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
        void messege_pressure(object sender, EventArgs e)
        {
            if (PhisParameterComboBox.Text == "Давление")
            {
                PhisUnitComboBox.Items.Clear();

                PhisUnitComboBox.Items.Add("милиПаскаль");
                PhisUnitComboBox.Items.Add("Паскаль");
                PhisUnitComboBox.Items.Add("килоПаскаль");
                PhisUnitComboBox.Items.Add("Милиметр ртутного столба");
                PhisParameterComboBox.ForeColor = Color.Magenta;
                PhisUnitComboBox.ForeColor = Color.Magenta;

                PhisUnitComboBox.Text = "милиПаскаль";
            }
        }
        void messege_time(object sender, EventArgs e)
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
        void messege_energy(object sender, EventArgs e)
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

        }

        private void PhisUnitComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void MainForm_Load(object sender, EventArgs e)
        {
            PhisParameterComboBox.SelectedIndex = 0;
        }
    }
}
