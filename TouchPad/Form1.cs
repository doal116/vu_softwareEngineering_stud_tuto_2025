using System;
using System.Windows.Forms;
namespace TouchPad
{
        public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void handleNumPads(object senders, EventArgs e){
            Button receivedBtn = (Button) senders;
            _screen.Text = receivedBtn.Text;

            _userInputList.Add(_screen.Text);
        }

        private void seeList(object send, EventArgs e){
            _screen.Text = string.Join("", _userInputList);
        }

        private void eraseMethod(object Snd, EventArgs e){
            Button reciveButton = (Button) Snd;
            _screen.Text = "Empty";
        }

    
    }



}

