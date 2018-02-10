namespace Converter
{
    partial class MainForm
    {
        /// <summary>
        /// Требуется переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Обязательный метод для поддержки конструктора - не изменяйте
        /// содержимое данного метода при помощи редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(MainForm));
            this.PhisParameterComboBox = new System.Windows.Forms.ComboBox();
            this.PhisParameterLabel = new System.Windows.Forms.Label();
            this.PhisUnitLabel = new System.Windows.Forms.Label();
            this.PhisUnitComboBox = new System.Windows.Forms.ComboBox();
            this.openFileDialog1 = new System.Windows.Forms.OpenFileDialog();
            this.valueTextBox = new System.Windows.Forms.TextBox();
            this.howMuchLabel = new System.Windows.Forms.Label();
            this.textBox2 = new System.Windows.Forms.TextBox();
            this.tableLayoutPanel1 = new System.Windows.Forms.TableLayoutPanel();
            this.tableLayoutPanel1.SuspendLayout();
            this.SuspendLayout();
            // 
            // PhisParameterComboBox
            // 
            this.PhisParameterComboBox.AccessibleName = "";
            this.PhisParameterComboBox.AutoCompleteCustomSource.AddRange(new string[] {
            "Длина",
            "Давление",
            "Энергия",
            "Время",
            "Масса",
            "Сила"});
            this.PhisParameterComboBox.AutoCompleteSource = System.Windows.Forms.AutoCompleteSource.CustomSource;
            this.PhisParameterComboBox.BackColor = System.Drawing.SystemColors.ButtonHighlight;
            this.PhisParameterComboBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.PhisParameterComboBox.FlatStyle = System.Windows.Forms.FlatStyle.System;
            this.PhisParameterComboBox.ForeColor = System.Drawing.Color.Black;
            this.PhisParameterComboBox.Items.AddRange(new object[] {
            "Длина",
            "Сила",
            "Масса",
            "Давление",
            "Время",
            "Энергия",
            "Температура"});
            this.PhisParameterComboBox.Location = new System.Drawing.Point(195, 3);
            this.PhisParameterComboBox.Name = "PhisParameterComboBox";
            this.PhisParameterComboBox.Size = new System.Drawing.Size(146, 21);
            this.PhisParameterComboBox.TabIndex = 0;
            this.PhisParameterComboBox.SelectedIndexChanged += new System.EventHandler(this.PhisParameterComboBox_SelectedIndexChanged);
            // 
            // PhisParameterLabel
            // 
            this.PhisParameterLabel.AutoSize = true;
            this.PhisParameterLabel.Location = new System.Drawing.Point(3, 0);
            this.PhisParameterLabel.Name = "PhisParameterLabel";
            this.PhisParameterLabel.Size = new System.Drawing.Size(96, 13);
            this.PhisParameterLabel.TabIndex = 1;
            this.PhisParameterLabel.Text = "Что вы измерили";
            // 
            // PhisUnitLabel
            // 
            this.PhisUnitLabel.AutoSize = true;
            this.PhisUnitLabel.Location = new System.Drawing.Point(3, 72);
            this.PhisUnitLabel.Name = "PhisUnitLabel";
            this.PhisUnitLabel.Size = new System.Drawing.Size(142, 13);
            this.PhisUnitLabel.TabIndex = 2;
            this.PhisUnitLabel.Text = "Какая единица измерения";
            // 
            // PhisUnitComboBox
            // 
            this.PhisUnitComboBox.Dock = System.Windows.Forms.DockStyle.Fill;
            this.PhisUnitComboBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.PhisUnitComboBox.FormattingEnabled = true;
            this.PhisUnitComboBox.Items.AddRange(new object[] {
            "километр",
            "миллиметр",
            "сантиметр"});
            this.PhisUnitComboBox.Location = new System.Drawing.Point(195, 75);
            this.PhisUnitComboBox.Name = "PhisUnitComboBox";
            this.PhisUnitComboBox.Size = new System.Drawing.Size(186, 21);
            this.PhisUnitComboBox.Sorted = true;
            this.PhisUnitComboBox.TabIndex = 3;
            this.PhisUnitComboBox.SelectedIndexChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // openFileDialog1
            // 
            this.openFileDialog1.FileName = "openFileDialog1";
            // 
            // valueTextBox
            // 
            this.valueTextBox.ImeMode = System.Windows.Forms.ImeMode.Katakana;
            this.valueTextBox.Location = new System.Drawing.Point(195, 39);
            this.valueTextBox.MaxLength = 0;
            this.valueTextBox.Name = "valueTextBox";
            this.valueTextBox.Size = new System.Drawing.Size(100, 20);
            this.valueTextBox.TabIndex = 4;
            this.valueTextBox.WordWrap = false;
            this.valueTextBox.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            this.valueTextBox.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.valueTextBox_KeyPress);
            // 
            // howMuchLabel
            // 
            this.howMuchLabel.AutoSize = true;
            this.howMuchLabel.Location = new System.Drawing.Point(3, 36);
            this.howMuchLabel.Name = "howMuchLabel";
            this.howMuchLabel.Size = new System.Drawing.Size(103, 13);
            this.howMuchLabel.TabIndex = 5;
            this.howMuchLabel.Text = "Сколько намерили";
            // 
            // textBox2
            // 
            this.textBox2.BackColor = System.Drawing.SystemColors.Control;
            this.textBox2.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.textBox2.Cursor = System.Windows.Forms.Cursors.IBeam;
            this.textBox2.Dock = System.Windows.Forms.DockStyle.Bottom;
            this.textBox2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textBox2.Location = new System.Drawing.Point(0, 110);
            this.textBox2.Multiline = true;
            this.textBox2.Name = "textBox2";
            this.textBox2.ReadOnly = true;
            this.textBox2.Size = new System.Drawing.Size(384, 101);
            this.textBox2.TabIndex = 6;
            // 
            // tableLayoutPanel1
            // 
            this.tableLayoutPanel1.ColumnCount = 2;
            this.tableLayoutPanel1.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 50F));
            this.tableLayoutPanel1.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 50F));
            this.tableLayoutPanel1.Controls.Add(this.PhisUnitComboBox, 1, 2);
            this.tableLayoutPanel1.Controls.Add(this.PhisUnitLabel, 0, 2);
            this.tableLayoutPanel1.Controls.Add(this.valueTextBox, 1, 1);
            this.tableLayoutPanel1.Controls.Add(this.howMuchLabel, 0, 1);
            this.tableLayoutPanel1.Controls.Add(this.PhisParameterComboBox, 1, 0);
            this.tableLayoutPanel1.Controls.Add(this.PhisParameterLabel, 0, 0);
            this.tableLayoutPanel1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.tableLayoutPanel1.Location = new System.Drawing.Point(0, 0);
            this.tableLayoutPanel1.Name = "tableLayoutPanel1";
            this.tableLayoutPanel1.RowCount = 3;
            this.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 33.33333F));
            this.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 33.33333F));
            this.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 33.33333F));
            this.tableLayoutPanel1.Size = new System.Drawing.Size(384, 110);
            this.tableLayoutPanel1.TabIndex = 8;
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(384, 211);
            this.Controls.Add(this.tableLayoutPanel1);
            this.Controls.Add(this.textBox2);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MaximizeBox = false;
            this.MaximumSize = new System.Drawing.Size(400, 250);
            this.MinimumSize = new System.Drawing.Size(400, 250);
            this.Name = "MainForm";
            this.Text = "Конвертер физических величин";
            this.Load += new System.EventHandler(this.MainForm_Load);
            this.tableLayoutPanel1.ResumeLayout(false);
            this.tableLayoutPanel1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ComboBox PhisParameterComboBox;
        private System.Windows.Forms.Label PhisParameterLabel;
        private System.Windows.Forms.Label PhisUnitLabel;
        private System.Windows.Forms.ComboBox PhisUnitComboBox;
        private System.Windows.Forms.OpenFileDialog openFileDialog1;
        private System.Windows.Forms.Label howMuchLabel;
        private System.Windows.Forms.TextBox textBox2;
        private System.Windows.Forms.TableLayoutPanel tableLayoutPanel1;
        private System.Windows.Forms.TextBox valueTextBox;
    }
}

