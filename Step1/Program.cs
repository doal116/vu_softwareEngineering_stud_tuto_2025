using System;
using System.Collections.Generic;

namespace Step1
{
    public struct Worker
    {

        public string firstName;
        public int yearOfBirth;
        public int currentYear;

        public Worker(string firstname, int yob, int year)
        {
            this.firstName = firstname;
            this.yearOfBirth = yob;
            this.currentYear = year;
        }
        public int calculateAge()
        {
            return this.currentYear - this.yearOfBirth;
        }
    }
    public class HelloWorld
    {
        public static void Main(string[] args)
        {
            // Worker w1 = new Worker("Sean", 2000, 2025);
            // Console.WriteLine($"my first name is {w1.firstName},\n i am {w1.calculateAge()}old.");
            List<Worker> workers = new List<Worker>();

            for(int i=0;i<4;i++){
                workers.Add(new Worker($"wokername{i}",2000-i,2025));
                Console.WriteLine($"{workers[i].firstName}, {workers[i].calculateAge()}");
            }

       }
    }
}



