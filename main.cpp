#include <iostream>
#include <string>
#include <vector>


using namespace std;

struct calculator
{
    int a=1;
    int b=2;
    int add {
        add=a+b

    }
    int sub {
        sub=a-b

    }
    int mul {
        mul=a*b

    }
}
int main()

{
    calculator att1;
    cout << "add " << att1.add << endl;
    cout << "sub " << att1.sub << endl;
    cout << "mul " << att1.mul << endl;
    return 0;
}
