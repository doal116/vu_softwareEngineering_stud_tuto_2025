using System;
using System.Collections.Generic;
//name of struct : Worker
//Properties
    //firstname alex
    //yearOfBirth 1999
    //currentYear 2025

//name of method: calculateAge
    //currentYear - yearofbirth

namespace FirstStep
{
    public struct Person
    {
        public string firstName;
        public string LastName;
        public Person(string firstname, string lastname)
        {
            this.firstName = firstname;
            this.LastName = lastname;
        }
        public void whoIsThis()
        {
            Console.WriteLine($"I am {firstName} {LastName}");
        }
    }
    public class HelloWorld
    {
        public static void Main(string[] args)
        {
            List<int> number = new List<int> { 1, 2, 3, 4, 5 };
            for (int i = 0; i < number.Count; ++i)
                Console.WriteLine($"Hey there {number[i]}");
            
            List<Person> students=new List<Person>();
            for (int i = 0; i < 4; ++i)
                students.Add(new Person($"sean{i}",$"amin{i}"));

            for (int i = 0; i < students.Count; ++i)
                students[i].whoIsThis();
            
        }
    }
}



