#include <iostream>

using namespace std;

struct Calculator {
    double a, b;
    double add() {
        return a + b;
    }

    double sub() {
        return a - b;
    }

    double mult() {
        return a * b;
    }

};

int main()
{
    Calculator calculator;
   
    cin >> calculator.a >> calculator.b;

    cout << "Addition of two numbers: " << calculator.add() << '\n';
    cout << "Substraction of two numbers: " << calculator.sub() << '\n';
    cout << "Multiplication of two numbers: " << calculator.mult() << '\n';

    return 0;
}