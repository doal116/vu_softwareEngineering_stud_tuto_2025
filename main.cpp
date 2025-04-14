#include <iostream>
#include <string>
#include <vector>
<<<<<<< HEAD


using namespace std;

struct calculator
{
    int a=1;
    int b=2;
    int add() {
       int add = a+b;
       return add;
    }
    int sub (){
        int sub=a-b;
        return sub;
    }
    int mul (){
        int mul=a*b;
        return mul;

    }
};

int main()
{
    calculator att1;
    cout << "add " << att1.add() << endl;
    cout << "sub " << att1.sub() << endl;
    cout << "mul " << att1.mul() << endl;
    return 0;
}
=======

using namespace std;

namespace Game{

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
}

int main()
{
    vector<Game::Identity>listOfPerson;

    Game::Identity person1;
    person1.age=12;
    person1.firstName="alex" ;
    person1.lastName="bob";

    // cout << person1.giveYearOfBirth()<<endl;
    Game::GTA_Player batuhan;
    batuhan.displayMoney();
    // vector<int>listOfPersonAge;
    // vector<string>listOfPersonfirstnamee;
    // vector<string>listOfPersonlastnamee;
    // int person1age=12;
    // string person1FirstName="alex";
    // string person1LastName="bob";
    return 0;
}

>>>>>>> 0d3790669090e543eeeef8a05fbafdc0b841ce41
