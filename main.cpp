#include <iostream>
#include <string>
#include <vector>

using namespace std;

// create Alias named Calc

namespace CalcTask
{
    class Calculator
    {
    public:
        int a;
        int b;
        Calculator(int a, int b)
        {
            this->a = a;
            this->b = b;
        }
        // Greatest Common Divisor 48 18 gcd = 6 : name gcd | a int b int
        int gcd(){
            int a = a, b = b;
            while (b != 0){
                int temp = b;
                b = a % b;
                a = temp;
            }
            return a;
            
        }


        // Exponentiation 2^3 = 8: name exp | a base b exponent
        int exp(){
            int result = 1;
            for (int i = 0; i < b; i++){
                result *= a;
            }
            return result;
        }

        // Factorial 4! = 4x3x2x1 = 24: name fact | only use a. b can be eqaual to 0
        int fact(){
            if (a<0)return -1;
            int result =1;
            for (int i = 2; i <= a; i++){
                result *i;
            }
        }


        // Least Common Multiple 12 18 LCM = 36 : name lcm | a int b int
        int lcm(){
            return (a*b)/ gcd();
        }
    };

}
int main()

{
    using Calculator = CalcTask::Calculator;
    
    Calculator calc1(1, 2);
    cout << calc1.a << calc1.b << endl;
    /*
    // unicodes
    const string GREEN = "\033[32m";
    const string RED = "\033[31m";
    const string RESET = "\033[0m";

    const string CHECK = "\u2714";
    const string CROSS = "\u274C";

    //===========
    // TestOne
    //===========
    vector<int> test1Expected = {3, 5, 7, 6, 7, 12, 15, 20};
    vector<CalcTask::Calculator> test1 = {
        CalcTask::Calculator(6, 9),   // GCD is 3
        CalcTask::Calculator(10, 15), // GCD is 5
        CalcTask::Calculator(14, 35), // GCD is 7
        CalcTask::Calculator(18, 24), // GCD is 6
        CalcTask::Calculator(21, 28), // GCD is 7
        CalcTask::Calculator(24, 36), // GCD is 12
        CalcTask::Calculator(30, 45), // GCD is 15
        CalcTask::Calculator(40, 60)  // GCD is 20
    };

    for (int i = 0; i < test1.size(); i++)
    {
        if (test1[i].gcd() == test1Expected[i])
            cout << GREEN << CHECK << RESET << "gcd of: " << test1[i].a << " | " << test1[i].b << " is " << test1[i].gcd();
        else
            cout << RED << CROSS << RESET << "gcd of: " << test1[i].a << " | " << test1[i].b << " is not " << test1[i].gcd();
    }

    //===========
    // TestTwo
    //===========
    vector<long long> test2Expected = {1, 16, 27, 1024, 3125, 36, 128, 81};
    vector<CalcTask::Calculator> test2 = {
        CalcTask::Calculator(2, 0),
        CalcTask::Calculator(2, 4),
        CalcTask::Calculator(3, 3),
        CalcTask::Calculator(4, 5),
        CalcTask::Calculator(5, 5),
        CalcTask::Calculator(6, 2),
        CalcTask::Calculator(2, 7),
        CalcTask::Calculator(3, 4)};
    for (int i = 0; i < test1.size(); i++)
    {
        if (test2[i].exp() == test2Expected[i])
            cout << GREEN << CHECK << RESET << "exp of: " << test1[i].a << " to the power of " << test1[i].b << " is " << test1[i].exp();
        else
            cout << RED << CROSS << RESET << "exp of: " << test1[i].a << " to the power of " << test1[i].b << " is not " << test1[i].exp();
    }

    //===========
    // TestThree
    //===========
    vector<long long> test3Expected = {1, 1, 2, 6, 24, 120, 720, 40320};

    vector<CalcTask::Calculator> test3 = {
        CalcTask::Calculator(0, 0),
        CalcTask::Calculator(1, 0),
        CalcTask::Calculator(2, 0),
        CalcTask::Calculator(3, 0),
        CalcTask::Calculator(4, 0),
        CalcTask::Calculator(5, 0),
        CalcTask::Calculator(6, 0),
        CalcTask::Calculator(8, 0)};
    for (int i = 0; i < test1.size(); i++)
    {
        if (test3[i].fact() == test3Expected[i])
            cout << GREEN << CHECK << RESET << "fact of: " << test3[i].a << " is " << test3[i].fact();
        else
            cout << RED << CROSS << RESET << "fact of: " << test3[i].a << " is not " << test3[i].fact();
    }

    //===========
    // TestFour
    //===========
    vector<long long> test4Expected = {6, 20, 21, 40, 36, 60, 45, 56};

    vector<CalcTask::Calculator> test4 = {
        CalcTask::Calculator(2, 3),
        CalcTask::Calculator(4, 5),
        CalcTask::Calculator(3, 7),
        CalcTask::Calculator(8, 5),
        CalcTask::Calculator(12, 18),
        CalcTask::Calculator(10, 12),
        CalcTask::Calculator(9, 15),
        CalcTask::Calculator(7, 8)};

    for (int i = 0; i < test1.size(); i++)
    {
        if (test4[i].lcm() == test4Expected[i])
            cout << GREEN << CHECK << RESET << "fact of: " << test4[i].a << " is " << test4[i].lcm();
        else
            cout << RED << CROSS << RESET << "fact of: " << test4[i].a << " is not " << test4[i].lcm();
    }*/
    return 0;
}
