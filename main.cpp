#include <iostream>
#include <string>
#include <vector>



using namespace std;
namespace bank{ 




namespace external{
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
    struct asstmanager {
        string bankid;
        string firstname;
        string lastname;
    };

}
}
namespace Bank:internal{
    struct manager {
        string bankid;
        string firstname;
        string lastname;
    };
}

