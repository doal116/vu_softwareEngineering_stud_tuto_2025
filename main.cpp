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
    struct manager {
        string bankid;
        string firstname;
        string lastname;
    };

}
}

int main() {
    bank::internal::manager person1;
    person1.bankid = "12345";
    person1.firstname = "neo";
    person1.lastname = "randy";
    cout << "Manager id " << person1.bankid << endl;
    cout << "Manager name " << person1.firstname << " " << person1.lastname << endl;

}
