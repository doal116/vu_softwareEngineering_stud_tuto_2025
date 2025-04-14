#include <iostream>
#include <string>

using namespace std;

namespace bank{

namespace internal{

        struct manager{
        int age;
        string firstname;
        string lastname;
    };
}

namespace external{

    struct teller{
        int workerid;
        string firstname;
        string lastname;
 
    };

    struct client{
        int accountnumber;
        string bank;
        string firstname;
        string lastname;
 
        };
    }
}

int main()
{
    bank::internal::manager manager;
    manager.age = 50;
    manager.lastname = "george";
    manager.firstname = "tsertsvadze";
    

    cout << manager.firstname << manager.lastname << manager.age << endl;
    return 0;
}
