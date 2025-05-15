using System;
using System.IO;
using System.IO.Pipes;
using System.Text;
class Server
{
    static void Main()
    {
        const string channelName = "pipe";
        using (
           NamedPipeServerStream pipeSever = new NamedPipeServerStream(
            channelName, // name of the communication channel
            PipeDirection.InOut,//direction of communication
            1, //number of instances (clients)
            PipeTransmissionMode.Byte,// medium of communcation
            PipeOptions.None // additional side effect (optional)
           )
        )
        {
            Console.WriteLine("Yo we are ready to listen");
            pipeSever.WaitForConnection();//start the listening process

            using (StreamReader reader = new StreamReader(pipeSever))//processing client message
            {
                using (StreamWriter writer = new StreamWriter(pipeSever) { AutoFlush = true })//getting our response ready and to send it
                {
                    string clientMessage = reader.ReadLine();
                    while (clientMessage != null)//keeping the connection running
                    {
                        Console.WriteLine("We recieved a message from the talker");
                        writer.WriteLine($"Message processed: {clientMessage}");//responding to client
                        clientMessage = reader.ReadLine();//waiting for next message from client
                    }
                }

            }
        }
    }
}