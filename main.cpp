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

  

   Bank::internal::maneger manager;
   manager.id = 5;
   manager.privegelLevel = 100;
   manager.firstname = "George";
   manager.lastname = "Tsertsvadze";

   cout<<"Manager "<<manager.firstname<<" "<<manager.lastname<<" with id "<<manager.id<<" has PRVGLVL on "
   <<manager.privegelLevel<<"%"<<endl;



    return 0;
}

