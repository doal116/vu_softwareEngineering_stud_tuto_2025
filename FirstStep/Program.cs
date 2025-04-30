using System;
using System.Collections.Generic;


namespace FirstStep{
    
    public struct Person{
        public string firstname;
        public string lastname;
        public Person(string fname, string lname){
            this.firstname = fname;
            this.lastname = lname;
        }

        public void whoIsThis(){
            Console.WriteLine($"I am {firstname} {lastname}");
        }
    }
        public struct Worker{
            public string firstname;
            public int yearOfBirth;
            public int currentYear;
            // public int age;

            public Worker(string fname, int bthyear, int curYear){
                this.currentYear = curYear;
                this.firstname = fname;
                this.yearOfBirth = bthyear;
                
            }

            public int CalculateAge(){
                return this.currentYear - this.yearOfBirth;
            }

        }
    public class HelloWorld{

        public static void Main(string[] args)
        {
            List<Worker> workers = new List<Worker>();

            for(int i=0; i<4; ++i){
                workers.Add(new Worker($"Workername{i}", 2005-i, 2025));
                Console.WriteLine($"Worker: {workers[i].firstname}, Age: {workers[i].CalculateAge()}");
            }

            Worker w1 = new Worker("Geroge", 2005, 2025);
            Console.WriteLine($"Hello my name is {w1.firstname} and I am {w1.CalculateAge()} years old");

            
            List<int> number = new List<int>{1,2,3,4,5};
            for(int i = 0; i<number.Count; i++){
                Console.WriteLine($"Count {number[i]}");
            }            

            List<Person> students = new List<Person>();
            for(int i =0; i < 4; ++i)
                students.Add(new Person ($"George{i}", $"amin{i}")) ;

            for(int i = 0; i<students.Count; i++){
                // Console.WriteLine($"Hey there {students[i].lastname}");
                students[i].whoIsThis();
            }  
        }
    }

}


            // int a = Convert.ToInt32(Console.ReadLine());
            // int b = Convert.ToInt32(Console.ReadLine());
            // int sum = a + b;
            // Console.WriteLine($"The answer is: {sum}");

            // string userinput = Console.ReadLine()?? "";
            // number = string.IsNullOrEmpty(userinput) ? 0: Convert.ToInt32(userinput);