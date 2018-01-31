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
            this.PhisParameterComboBox = new System.Windows.Forms.ComboBox();
            this.PhisParameterLabel = new System.Windows.Forms.Label();
            this.PhisUnitLabel = new System.Windows.Forms.Label();
            this.PhisUnitComboBox = new System.Windows.Forms.ComboBox();
            this.openFileDialog1 = new System.Windows.Forms.OpenFileDialog();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // PhisParameterComboBox
            // 
            this.PhisParameterComboBox.AccessibleName = "";
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
            "Енергия"});
            this.PhisParameterComboBox.Location = new System.Drawing.Point(193, 25);
            this.PhisParameterComboBox.Name = "PhisParameterComboBox";
            this.PhisParameterComboBox.Size = new System.Drawing.Size(146, 21);
            this.PhisParameterComboBox.TabIndex = 0;
            this.PhisParameterComboBox.SelectedIndexChanged += new System.EventHandler(this.PhisParameterComboBox_SelectedIndexChanged);
            // 
            // PhisParameterLabel
            // 
            this.PhisParameterLabel.AutoSize = true;
            this.PhisParameterLabel.Location = new System.Drawing.Point(197, 9);
            this.PhisParameterLabel.Name = "PhisParameterLabel";
            this.PhisParameterLabel.Size = new System.Drawing.Size(96, 13);
            this.PhisParameterLabel.TabIndex = 1;
            this.PhisParameterLabel.Text = "Что вы измерили";
            // 
            // PhisUnitLabel
            // 
            this.PhisUnitLabel.AutoSize = true;
            this.PhisUnitLabel.Location = new System.Drawing.Point(180, 102);
            this.PhisUnitLabel.Name = "PhisUnitLabel";
            this.PhisUnitLabel.Size = new System.Drawing.Size(142, 13);
            this.PhisUnitLabel.TabIndex = 2;
            this.PhisUnitLabel.Text = "Какая единица измерения";
            // 
            // PhisUnitComboBox
            // 
            this.PhisUnitComboBox.FormattingEnabled = true;
            this.PhisUnitComboBox.Items.AddRange(new object[] {
            "километр",
            "миллиметр",
            "сантиметр"});
            this.PhisUnitComboBox.Location = new System.Drawing.Point(183, 136);
            this.PhisUnitComboBox.Name = "PhisUnitComboBox";
            this.PhisUnitComboBox.Size = new System.Drawing.Size(121, 21);
            this.PhisUnitComboBox.Sorted = true;
            this.PhisUnitComboBox.TabIndex = 3;
            this.PhisUnitComboBox.Text = "миллиметр";
            this.PhisUnitComboBox.SelectedIndexChanged += new System.EventHandler(this.PhisUnitComboBox_SelectedIndexChanged);
            // 
            // openFileDialog1
            // 
            this.openFileDialog1.FileName = "openFileDialog1";
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(193, 63);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(100, 20);
            this.textBox1.TabIndex = 4;
            this.textBox1.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(431, 120);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(35, 13);
            this.label1.TabIndex = 5;
            this.label1.Text = "label1";
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(551, 505);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.PhisUnitComboBox);
            this.Controls.Add(this.PhisUnitLabel);
            this.Controls.Add(this.PhisParameterLabel);
            this.Controls.Add(this.PhisParameterComboBox);
            this.Name = "MainForm";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.MainForm_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ComboBox PhisParameterComboBox;
        private System.Windows.Forms.Label PhisParameterLabel;
        private System.Windows.Forms.Label PhisUnitLabel;
        private System.Windows.Forms.ComboBox PhisUnitComboBox;
        private System.Windows.Forms.OpenFileDialog openFileDialog1;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Label label1;
    }
}

