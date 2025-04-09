#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Identity{
    int age;
    string firstName;
    string lastName;

    int giveYearOfBirth(){
        return 2025 - age;
    };
};
struct GTA_Player{
    private:
        double money=1;
        void addMoney(){
            money++;
        };
    public:
        void displayMoney(){
            cout << money<< endl;
        };
};

int main()
{
    vector<Identity>listOfPerson;

    Identity person1;
    person1.age=12;
    person1.firstName="alex" ;
    person1.lastName="bob";

    // cout << person1.giveYearOfBirth()<<endl;
    GTA_Player batuhan;
    batuhan.displayMoney();
    // vector<int>listOfPersonAge;
    // vector<string>listOfPersonfirstnamee;
    // vector<string>listOfPersonlastnamee;
    // int person1age=12;
    // string person1FirstName="alex";
    // string person1LastName="bob";
    return 0;
}

