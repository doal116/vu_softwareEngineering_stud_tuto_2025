#include <iostream>
#include <string>


using namespace std;


struct calculator {
     
    int a, b;

    int add (int a, int b) {
        return a + b;
    }

    int substract (int a, int b) {
        if ( a > b) {
            return a - b;
        }

        if ( b > a) {
           int temp = a;
            a = b;
            b = temp;

            return b - a;
        }
        return 0;
    }


    int mul ( int a, int b) {
        return a * b;
    }

};

int main () {
    int a, b;
    cout << "Please give value to Integer a and b: " << endl;
    cin >> a >> b;

    calculator PartOne;
    cout << "The addition of the two inetegrs " << a << " and" << b << " is" << PartOne.add(a, b) << endl;
    cout << "The substraction of the two inetegrs " << a << " and" << b << " is" << PartOne.substract(a, b) << endl;
    cout << "The multiplication of the two inetegrs " << a << " and" << b << " is" << PartOne.mul(a, b) << endl;

    return 0;

}