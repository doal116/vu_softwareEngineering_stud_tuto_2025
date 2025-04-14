#include <iostream>
#include <string>
#include <vector>



using namespace std;

namespace actor{
    struct client {
        string bankaccnum;
        string firstname;
        string lastname;
    };
    struct teller{
        string bankid;
        string firstname;
        string lastname;
    };

}
namespace internal {
    struct manager {
        string bankid;
        string firstname;
        string lastname;
    };

}

