#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace Bank
{
    namespace external
    {
        struct client
        {
            int accountnumber;
            string firstname;
            string lastname;
        };
        struct teller
        {
            int workerid;
            string firstname;
            string lastname;
        };
    }

    namespace internal
    {
        struct manager
        {
            int workerid;
            string priviledgeLevel;
            string firstname;
            string lastname;
        };

    }
}

int main()
{

    Bank::internal::manager Person1;
    Person1.workerid = 1234;
    Person1.firstname = "Sean";
    Person1.lastname = "Dewe";

    cout << Person1.workerid << Person1.firstname << Person1.lastname << endl;
    return 0;
}
