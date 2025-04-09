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

struct Clac
{
    int a;
    int b;

    int add(a,b){
        return a + b;
    };

    int mult(a,b){
        return a * b;
    }

    int sub(a,b){
        retrun a-b;
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

    
    Clac examples;
    examples.add(5,5);
    examples.sub(5,5);
    examples.mult(5,5)

    return 0;
}
