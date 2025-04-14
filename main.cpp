#include <iostream>
#include <string>
#include <vector>

using namespace std;
namespace AnimalKingDom{

    class Animal{
        public:
            Animal(int legs, string name, int age){
                legs = legs;
                name = name;
                age = age;
            }

            int legs;
            string name;
            int age;


            void eat(){
                cout<<"Water"<<endl;
            };
    };
    
    namespace birdkingdom{

        class parrot: public Animal
        {
            public: 

                parrot(int legs, string name, int age, int wings, string color):Animal(legs,  name,  age){
                    wings = wings;
                    color = color; 
                
                }

                int wings;
                string color;
                
                void eat(){
                    cout<<" seeds"<<endl;
                }

        };
        
    }    
    
    namespace landkingdom{
        class dog: public Animal
        {
            
            void eat(){
                cout<<"bones"<<endl;
            }

        };
        
    }
    
}

int main(){

    AnimalKingDom::birdkingdom::parrot parrot1(2, "Luka", 12, 2, "Red");

    cout<<"Prrot 1 has "<<parrot1.legs<<" legs his name is "<<parrot1.name<<" he is "<<parrot1.age<<" years old and has "
    <<parrot1.wings<<" wings with color of "<<parrot1.color<<endl;




    return 0;
}

