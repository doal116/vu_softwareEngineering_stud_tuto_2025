#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct calculator {
    double a;
    double b;

    double add(double a, double b) {
        return (a + b);
    }

    double sub(double a, double b) {
        return (a - b);
    }

    double mult(double a, double b) {
        return (a * b);
    }
};

int main() {
    calculator calc;
    double a = 10;
    double b = 5;

    cout << calc.add(a, b) << endl;
    cout << calc.sub(a, b) << endl;
    cout << calc.mult(a, b) << endl;

    return 0;
}
