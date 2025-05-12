using System;
using System.Windows.Forms;
using System.IO;
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
        private System.Windows.Forms.Label _screen;
        private List<string> _userInputList = new List<string>();

        private void screen()
        {
            _screen = new Label();
            _screen.Size = new System.Drawing.Size(((_padGap + _padSize) * 10) - _padGap, 300);
            _screen.Name = "screenDisplay";
            _screen.Text = this.fileReader();

            _screen.Location = new System.Drawing.Point(_padSize, 0);
            _screen.BackColor = System.Drawing.Color.White;
            this.Controls.Add(_screen);
        }
        private string fileReader()
        {
            StreamReader sr = new StreamReader("cow.txt");
            string line = sr.ReadLine();
            string result ="";
            while (line != null)
            {
                line = sr.ReadLine();
                result += line;
            }
            sr.Close();
            return result;
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
            this.screen();

        }

        #endregion
    }
}


