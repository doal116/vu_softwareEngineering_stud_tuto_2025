#include <iostream>
#include <string>
#include <vector>

using namespace std;
namespace bank{
    namespace external{
        struct client{
            string bankaccountnum;
            string firstname;
            string lastname;
        };
    
        struct teller{
            string bankid;
            string firstname;
            string lastname;
        };
    }
    
    namespace internal{
        struct manager{
            string bankid;
            string firstname;
            string lastname;
        };
    }
}


int main() {
    bank::internal::manager person1;
    person1.bankid="sith12";
    person1.firstname="sithija";
    person1.lastname="appuhamy";
 cout<<"the id of the manager is "<<person1.bankid<<endl;
 cout<<"the name of the manage is "<<person1.firstname<<" "<<person1.lastname<<endl;
}