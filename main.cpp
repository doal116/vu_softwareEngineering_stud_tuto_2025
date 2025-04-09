#include <iostream>
#include <string>
#include <vector>


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
