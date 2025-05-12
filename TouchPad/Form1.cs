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

        private void showFile(object senders, EventArgs e){
            Button reciveBtn = (Button) senders;
            _screen.Text = ReadFile();
        }

         private string ReadFile(){
            StreamReader sr = new StreamReader("Cow.txt");
            string line = sr.ReadLine();
            string result = line + " \n";
            while(line != null)
            {
                line = sr.ReadLine();
                result += line;
                result += " \n";
            }
            sr.Close();
            return result;
        }

    
    }



}

