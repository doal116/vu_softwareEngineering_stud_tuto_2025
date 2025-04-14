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
        struct assistantmanager{
            string bankid;
            string firstname;
            string lastname;
        };
    }}

namespace bank:internal{
    struct manager{
        string bankid;
        string firstname; 
        string lastname;
    };
}
