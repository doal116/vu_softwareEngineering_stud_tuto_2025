#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace Actor {
    struct client {
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

namespace internal{
    struct manager {
        int workerid;
        string priviledgeLevel;
        string firstname;
        string lastname;  
    };
       
}





int main(){



    return 0;
} 