using System;
using System.IO;
using System.IO.Pipes;
using System.Text;


class Client
{
    static void Main()
    {
        const string channelName = "pipe";
        using (
            NamedPipeClientStream clientServer = new NamedPipeClientStream(
                ".",// if you have an external server that is not on your computer 
                channelName,// for server running on your computer
                PipeDirection.InOut// direction of communication
            )
        )
        {
            Console.WriteLine("Client is connecting");
            clientServer.Connect();
            Console.WriteLine("Client is connected");

            using (StreamReader reader = new StreamReader(clientServer))//processing server message
            using (StreamWriter writer = new StreamWriter(clientServer) { AutoFlush = true })//getting our response ready and to send it to the server
            {
                Console.WriteLine("Write your name: ");//telling the user what to do
                string userInput = Console.ReadLine();//gettign user input from terminal

                while (userInput != null)//keeping the connection running
                {
                    writer.WriteLine(userInput);//sending the user input to server
                    string responseFromServer = reader.ReadLine();//recieving feedback from server
                    Console.WriteLine(responseFromServer);
                    Console.WriteLine("Write your name: ");//telling the user what to do
                    userInput = Console.ReadLine();//gettign user input from terminal
                }
            }

        }
    }
}