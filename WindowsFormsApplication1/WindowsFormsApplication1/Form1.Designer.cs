namespace WindowsFormsApplication1
{
    partial class add_new_ED
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
            this.button_add_ED = new System.Windows.Forms.Button();
            this.text_vvod_FV = new System.Windows.Forms.Label();
            this.button_save = new System.Windows.Forms.Button();
            this.vvod_name_FV = new System.Windows.Forms.TextBox();
            this.vvod_main_name_ED = new System.Windows.Forms.TextBox();
            this.vvod_main_ED_coef_ED = new System.Windows.Forms.TextBox();
            this.vvod_name_ED_ = new System.Windows.Forms.TextBox();
            this.text_vvod_ED = new System.Windows.Forms.Label();
            this.text_vvod_other_ED = new System.Windows.Forms.Label();
            this.text_other_cef_ED = new System.Windows.Forms.Label();
            this.button_delete_ED = new System.Windows.Forms.Button();
            this.button_primer = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // button_add_ED
            // 
            this.button_add_ED.Location = new System.Drawing.Point(460, 160);
            this.button_add_ED.Name = "button_add_ED";
            this.button_add_ED.Size = new System.Drawing.Size(41, 20);
            this.button_add_ED.TabIndex = 0;
            this.button_add_ED.Text = "+";
            this.button_add_ED.UseVisualStyleBackColor = true;
            this.button_add_ED.Click += new System.EventHandler(this.button1_Click);
            // 
            // text_vvod_FV
            // 
            this.text_vvod_FV.AutoSize = true;
            this.text_vvod_FV.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.text_vvod_FV.Location = new System.Drawing.Point(128, 9);
            this.text_vvod_FV.Name = "text_vvod_FV";
            this.text_vvod_FV.Size = new System.Drawing.Size(274, 20);
            this.text_vvod_FV.TabIndex = 1;
            this.text_vvod_FV.Text = "Введите название физ. величины:";
            // 
            // button_save
            // 
            this.button_save.ForeColor = System.Drawing.SystemColors.ControlText;
            this.button_save.Location = new System.Drawing.Point(66, 341);
            this.button_save.Name = "button_save";
            this.button_save.Size = new System.Drawing.Size(384, 33);
            this.button_save.TabIndex = 2;
            this.button_save.Text = "Сохранить";
            this.button_save.UseVisualStyleBackColor = true;
            // 
            // vvod_name_FV
            // 
            this.vvod_name_FV.Location = new System.Drawing.Point(132, 43);
            this.vvod_name_FV.Name = "vvod_name_FV";
            this.vvod_name_FV.Size = new System.Drawing.Size(254, 20);
            this.vvod_name_FV.TabIndex = 3;
            // 
            // vvod_main_name_ED
            // 
            this.vvod_main_name_ED.Location = new System.Drawing.Point(132, 101);
            this.vvod_main_name_ED.Name = "vvod_main_name_ED";
            this.vvod_main_name_ED.Size = new System.Drawing.Size(254, 20);
            this.vvod_main_name_ED.TabIndex = 4;
            // 
            // vvod_main_ED_coef_ED
            // 
            this.vvod_main_ED_coef_ED.Location = new System.Drawing.Point(261, 159);
            this.vvod_main_ED_coef_ED.Name = "vvod_main_ED_coef_ED";
            this.vvod_main_ED_coef_ED.Size = new System.Drawing.Size(196, 20);
            this.vvod_main_ED_coef_ED.TabIndex = 6;
            // 
            // vvod_name_ED_
            // 
            this.vvod_name_ED_.Location = new System.Drawing.Point(4, 160);
            this.vvod_name_ED_.Name = "vvod_name_ED_";
            this.vvod_name_ED_.Size = new System.Drawing.Size(234, 20);
            this.vvod_name_ED_.TabIndex = 7;
            // 
            // text_vvod_ED
            // 
            this.text_vvod_ED.AutoSize = true;
            this.text_vvod_ED.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.text_vvod_ED.Location = new System.Drawing.Point(85, 66);
            this.text_vvod_ED.Name = "text_vvod_ED";
            this.text_vvod_ED.Size = new System.Drawing.Size(387, 20);
            this.text_vvod_ED.TabIndex = 8;
            this.text_vvod_ED.Text = "Введите название основной единицы измерения:";
            // 
            // text_vvod_other_ED
            // 
            this.text_vvod_other_ED.AutoSize = true;
            this.text_vvod_other_ED.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.text_vvod_other_ED.Location = new System.Drawing.Point(1, 135);
            this.text_vvod_other_ED.Name = "text_vvod_other_ED";
            this.text_vvod_other_ED.Size = new System.Drawing.Size(237, 13);
            this.text_vvod_other_ED.TabIndex = 9;
            this.text_vvod_other_ED.Text = "Введите название других единиц измерения:";
            // 
            // text_other_cef_ED
            // 
            this.text_other_cef_ED.AutoSize = true;
            this.text_other_cef_ED.Location = new System.Drawing.Point(258, 135);
            this.text_other_cef_ED.Name = "text_other_cef_ED";
            this.text_other_cef_ED.Size = new System.Drawing.Size(196, 13);
            this.text_other_cef_ED.TabIndex = 10;
            this.text_other_cef_ED.Text = "Сколько основной единицы в чем-то:";
            // 
            // button_delete_ED
            // 
            this.button_delete_ED.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(204)));
            this.button_delete_ED.Location = new System.Drawing.Point(460, 133);
            this.button_delete_ED.Name = "button_delete_ED";
            this.button_delete_ED.Size = new System.Drawing.Size(41, 20);
            this.button_delete_ED.TabIndex = 11;
            this.button_delete_ED.Text = "-";
            this.button_delete_ED.UseVisualStyleBackColor = true;
            // 
            // button_primer
            // 
            this.button_primer.Location = new System.Drawing.Point(0, 0);
            this.button_primer.Name = "button_primer";
            this.button_primer.Size = new System.Drawing.Size(75, 23);
            this.button_primer.TabIndex = 13;
            this.button_primer.Text = "Пример";
            this.button_primer.UseVisualStyleBackColor = true;
            this.button_primer.Click += new System.EventHandler(this.button3_Click);
            // 
            // add_new_ED
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(513, 386);
            this.Controls.Add(this.button_primer);
            this.Controls.Add(this.button_delete_ED);
            this.Controls.Add(this.text_other_cef_ED);
            this.Controls.Add(this.text_vvod_other_ED);
            this.Controls.Add(this.text_vvod_ED);
            this.Controls.Add(this.vvod_name_ED_);
            this.Controls.Add(this.vvod_main_ED_coef_ED);
            this.Controls.Add(this.vvod_main_name_ED);
            this.Controls.Add(this.vvod_name_FV);
            this.Controls.Add(this.button_save);
            this.Controls.Add(this.text_vvod_FV);
            this.Controls.Add(this.button_add_ED);
            this.Name = "add_new_ED";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.add_new_ED_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button_add_ED;
        private System.Windows.Forms.Label text_vvod_FV;
        private System.Windows.Forms.Button button_save;
        private System.Windows.Forms.TextBox vvod_name_FV;
        private System.Windows.Forms.TextBox vvod_main_name_ED;
        private System.Windows.Forms.TextBox vvod_main_ED_coef_ED;
        private System.Windows.Forms.TextBox vvod_name_ED_;
        private System.Windows.Forms.Label text_vvod_ED;
        private System.Windows.Forms.Label text_vvod_other_ED;
        private System.Windows.Forms.Label text_other_cef_ED;
        private System.Windows.Forms.Button button_delete_ED;
        private System.Windows.Forms.Button button_primer;

    }
}

