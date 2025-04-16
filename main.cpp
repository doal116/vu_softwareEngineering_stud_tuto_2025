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
        int gcd()
        {
            int a = this->a, b = this->b;
            while (b != 0)
            {
                int temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        }

        // Exponentiation 2^3 = 8: name exp | a base b exponent
        int exp()
        {
            int result = 1;
            for (int i = 0; i < this->b; i++)
            {
                result *= this->a;
            }
            return result;
        }

        // Factorial 4! = 4x3x2x1 = 24: name fact | only use a. b can be eqaual to 0
        int fact()
        {
            if (this->a < 0)
                return -1;
            int result = 1;
            for (int i = 2; i <= this->a; i++)
            {
                result *= i;
            }
            return result;
        }

        // Least Common Multiple 12 18 LCM = 36 : name lcm | a int b int
        int lcm()
        {
            return (this->a * this->b) / gcd();
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
    //===========
    // TestOne
    //===========
    /*
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
            cout  << "gcd of: " << test1[i].a << " | " << test1[i].b << " is " << test1[i].gcd()<<endl;
        else
            cout << "gcd of: " << test1[i].a << " | " << test1[i].b << " is not " << test1[i].gcd()<<endl;
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
    for (int i = 0; i < test2.size(); i++)
    {
        if (test2[i].exp() == test2Expected[i])
            cout << "exp of: " << test2[i].a << " to the power of " << test2[i].b << " is " << test2[i].exp()<<endl;
        else
            cout  << "exp of: " << test2[i].a << " to the power of " << test2[i].b << " is not " << test2[i].exp()<<endl;
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
    for (int i = 0; i < test3.size(); i++)
    {
        if (test3[i].fact() == test3Expected[i])
            cout << "fact of: " << test3[i].a << " is " << test3[i].fact()<<endl;
        else
            cout << "fact of: " << test3[i].a << " is not " << test3[i].fact()<<endl;
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

    for (int i = 0; i < test4.size(); i++)
    {
        if (test4[i].lcm() == test4Expected[i])
            cout << "lcm of: " << test4[i].a << " | "<< test4[i].b << " is " << test4[i].lcm() << endl;
        else
            cout << "lcm of: " << test4[i].a << " | "<< test4[i].b << " is not " << test4[i].lcm() << endl;
    }
    return 0;
    */
}
