#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Calculator {
    int a;
    int b;

    int add(int a,int b){
        cout<< "the sum " << endl;
        return a+b;
    }

    int sub(int a,int b){
        cout<< "the subratration " << endl;
        return a-b;
    }

    int mult(int a,int b){
        cout<< "the multiplication" << endl;
        return a*b;
    }
};


int main()
{
    vector<Calculator>numbers;

    Calculator numbers1;
    numbers1.a = 22;
    numbers1.b = 10;
    

    return 0;
} 