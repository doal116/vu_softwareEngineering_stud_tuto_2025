#include <iostream>
#include <string>
#include <vector>

using namespace std;
namespace Bank{
    
    namespace external{
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
            int privegelLevel;
            string firstname;
            string lastname;
        };
        
    
    }
    
}

int main(){

   Bank::external::client client;
   client.BankAccNumber = "GETB0076TB60000";
   client.firstname = "Sean";
   client.lastname = "Dewe";

   Bank::internal::maneger manager;
   manager.id = 5;
   manager.privegelLevel = 100;
   manager.firstname = "George";
   manager.lastname = "Tsertsvadze";

   cout<<"Manager " manager.firstname<<" "<<manager.lastname<<" with id "<<id<<" has PRVGLVL on "
   <<manager.privegellevel<<"%"<<endl;



    return 0;
}

