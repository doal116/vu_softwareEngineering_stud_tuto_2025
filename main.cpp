#include <iostream>
#include <string>

using namespace std;

struct worker {
    string fullName;
    string position;
    double salary;

    worker(string fullName, string position, double salary) {
        this->fullName = fullName;
        this->position = position;
        this->salary = salary;
    }

    void info() {
        cout << "Worker: " << fullName << " at " << position << " position " << "earns " << salary << "$\n";
    }

    void afterModification() {
        addMoney();
        cout << fullName << " will earn " << salary << "$ in a month\n";
    }

    double addMoney() {
        return salary += 1000;
    }

    void yearlySalary() {
        cout << "Yearly salary is: " << salary * 12 << "$" << endl;
    }
};

int main() {
    worker Alex("Alex Bulganin", "Fullstack developer", 3000);
    Alex.info();
    Alex.afterModification();
    Alex.yearlySalary();
    
    return 0;
}
