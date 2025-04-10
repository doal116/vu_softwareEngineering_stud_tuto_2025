#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Identity
{
    int age;
    string firstname;
    string lastname;

    int giveYearOfBirth(){
        return 2025 - age;
    };
};

struct GTA_PLAYER{

    
    public:
    void displayMoney(){
        cout<<money<<endl;
        addMoney();

    };
    private:
        double money = 1;
        void addMoney(){
            money++;
        };
};

struct Calc
{

    int add(int a, int b){
        return a + b;
    };

    int mult(int a, int b){
        return a * b;
    }

    int sub(int a, int b){
        return a-b;
    };

};

int main()
{

    vector<Identity>listOfPerson;

    Identity person1;
    person1.age = 20;
    person1.firstname = "George";
    person1.lastname = "Tsertsvadze";

    cout<<person1.giveYearOfBirth()<< endl;

    GTA_PLAYER George;
    George.displayMoney();


    Calc examples;
    cout << "Add: " << examples.add(5, 5) << endl;
    cout << "Subtract: " << examples.sub(5, 5) << endl;
    cout << "Multiply: " << examples.mult(5, 5) << endl;

    return 0;
}
