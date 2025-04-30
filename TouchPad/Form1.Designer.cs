using System;
using System.Windows.Forms;
namespace TouchPad
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }
        private int _padSize = 30;
        private int _padGap = 10;
        private void pad()
        {
            int shiftYaxis = 0;
            int shiftXaxis = 0;
            for (int i = 0; i < 9; i++)
            {
                Button numpad = new Button();
                numpad.Text = $"{i}";

                numpad.Name = $"heyButton{i}";
                numpad.Size = new System.Drawing.Size(_padSize, _padSize);
                if (i % 3 == 0)
                {
                    shiftYaxis++;
                    shiftXaxis = 0;
                }
                numpad.Location = new System.Drawing.Point(
                    _padSize + (shiftXaxis * _padSize + (shiftXaxis * _padGap)), // x-axis
                    30 + (shiftYaxis * _padSize)); // y-axis
                this.Controls.Add(numpad);
                shiftXaxis++;
            }

        }
        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Text = "Form1";

            this.pad();
        }

        #endregion
    }
}


