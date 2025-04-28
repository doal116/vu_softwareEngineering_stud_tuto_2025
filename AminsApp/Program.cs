using System;
using System.Collections.Generic;

namespace AminsApp
{
    public struct worker
    {
        public string firstname;
        public int birthOfYear;
        public const int currentYear = 2025;

        public worker(string firstname, int birthOfYear)
        {
            this.firstname = firstname;
            this.birthOfYear = birthOfYear;
        }

        public void currentAge()
        {
            int currentAge = currentYear - birthOfYear;
            System.Console.WriteLine($"{firstname}'s age is {currentAge}");
        }
    }

    public class HelloWorld
    {
        public static void Main(string[] args)
        {
            List<worker> workers = new List<worker>();

            for (int i = 0; i < 3; i++)
            {
                System.Console.Write("Enter worker name: ");
                string name = Console.ReadLine();

                System.Console.Write("Enter worker birth year: ");
                int birthYear = Convert.ToInt32(Console.ReadLine());

                workers.Add(new worker(name, birthYear));
            }
            System.Console.WriteLine("********************************************************************");
            foreach (var w in workers)
            {
                System.Console.WriteLine($"Worker: {w.firstname}, Birth Year: {w.birthOfYear}");
                w.currentAge();
            }
        }
    }
}
