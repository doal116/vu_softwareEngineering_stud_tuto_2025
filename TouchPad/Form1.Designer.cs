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
        private System.Windows.Forms.Label _screen;
        private List<string> _userInputList=new List<string>();
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
                numpad.Click += handleNumPads;
                numpad.Location = new System.Drawing.Point(
                    _padSize + (shiftXaxis * _padSize + (shiftXaxis * _padGap)), // x-axis
                    30 + (shiftYaxis * _padSize)); // y-axis
                this.Controls.Add(numpad);
                shiftXaxis++;
            }

        }
        private void screen(){
            _screen=new Label();
            _screen.Size =new System.Drawing.Size(((_padGap+_padSize)*3)-_padGap, _padSize);
            _screen.Name = "screenDisplay";
            _screen.Text = "Hello world!";
            _screen.Location= new System.Drawing.Point(_padSize,0);
            _screen.BackColor = System.Drawing.Color.White;
            this.Controls.Add(_screen);
        }
        private void userInput(){
            Button userInput = new Button();
            userInput.Text = "Show List";
            userInput.Size = new System.Drawing.Size(_padSize*3,_padSize);
            userInput.Location = new System.Drawing.Point(_padSize,_padSize*5);
            userInput.Click+=seeList;
            this.Controls.Add(userInput);
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
            this.pad();
            this.userInput();
        }

        #endregion
    }
}


