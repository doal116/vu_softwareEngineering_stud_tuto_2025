using System;
using System.Windows.Forms;
namespace TouchPad{
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
    
    private int _padsize=50;

    private int _padGap = 10;

    private System.Windows.Forms.Label _screen;

    private List<string> _userInputList = new List<string>();
    private void pad(){
        
            int shiftYaxis = 0;
            int shiftXaxis = 0;
    
            for(int i=0; i<9; i++)
            {   
               
                Button numpad = new Button();
                numpad.Text =$"{i}";

                numpad.Name = $"heyButton{i}";
                numpad.Size = new System.Drawing.Size(_padsize, _padsize);
                if(i % 3 == 0){
                    shiftYaxis++;
                    shiftXaxis = 0;
                }
                numpad.Click += handleNumPads;

                numpad.Location= new System.Drawing.Point(
                _padsize + (shiftXaxis * _padsize + (shiftXaxis * _padGap )), //x-axis
                30 + (shiftYaxis * _padsize)); // y-axis
                
                this.Controls.Add(numpad);
                shiftXaxis++;
            }      
    }

    private void screen(){
        _screen = new Label();
        _screen.Size = new System.Drawing.Size(((_padsize + _padGap) * 3) - _padGap, _padsize);
        _screen.Name = "screenDisplay";
        _screen.Text = "Hello World!";
        _screen.Location = new System.Drawing.Point(_padsize, 0);
        _screen.BackColor = System.Drawing.Color.Red;
        this.Controls.Add(_screen);
    }

    private void eraseBtn(){
            Button AC = new Button();
            AC.Text = "AC";
            AC.Name = "EraseButton";
            AC.Size = new System.Drawing.Size(_padsize,_padsize);
            AC.Location = new System.Drawing.Point(_padsize, _padsize*5);
            AC.Click += eraseMethod;
            this.Controls.Add(AC);
            
    }

    private void userInput(){
        Button userInput = new Button();
        userInput.Text = "Show List";
        userInput.Size = new System.Drawing.Size(_padsize * 3, _padsize);
        userInput.Location = new System.Drawing.Point(_padsize * 2, _padsize*5);
        userInput.Click += seeList;
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
        this.eraseBtn();
        this.userInput();
    }

    #endregion
}

}

