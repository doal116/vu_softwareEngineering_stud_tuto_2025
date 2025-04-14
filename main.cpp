#include <iostream>
#include <string>
#include <vector>

using namespace std;
namespace actor{
    struct client
    {
        string BankAccNumber;
        string firstname;
        string lastname;

        void clientInfo(){
            cout<<"Client " firstname, lastname " has recived his Bank Account number " BankAccNumber<<endl;
        }

    };
    struct teller
    {
        int workerId;
        string firstname;
        string lastname;


    };
    
    
}


namespace internal{

    struct maneger
    {
        int id;
        string privegelLevel;
        string firstname;
        string lastname;
    };
    

}

int main(){
    cout << "Hello world" << endl;
    return 0;
}

