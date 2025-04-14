#include <iostream>
#include <string>

using namespace std;

namespace internal{

        struct manager{
        int age;
        string firstname;
        string lastname;
    }
}

namespace actor{

    struct teller{
        int workerid;
        string firstname;
        string lastname;
 
    }
    
    struct client{
        int accountnumber;
        string bank;
        string firstname;
        string lastname;
 
    }
}

int main()
{
    cout << "alexandre" << endl;
    return 0;
}
