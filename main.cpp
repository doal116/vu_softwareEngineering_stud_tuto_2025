#include <iostream>
#include <string>
#include <vector>

using namespace std;

namespace AnimalKingdom
{
    class Animal
    {
    public:
        int legs;
        string name;
        int age;
        Animal(int l, string n, int a)
        {
            legs = l;
            name = n;
            age = a;
        }
        virtual void eat()
        {
            cout << "I love food" << endl;
        }
    };
    namespace landKingDom
    {
        class Dog : public Animal
        {
        public:
            int ears;
            Dog(int l, string n, int a, int e) : Animal(l, n, a)
            {
                ears = e;
            }
            void eat() override
            {
                cout << "I eat meat" << endl;
            }
        };

    }
    namespace waterKingDom
    {
        class shark : public Animal
        {
        public:
            int teeth;
            shark(int l, string n, int a, int te) : Animal(l, n, a)
            {
                teeth = te;
            }
            void eat() override
            {
                cout << "I eat people" << endl;
            }
        };
    }
}
// alias
using Dog = AnimalKingdom::landKingDom::Dog;

// templating
template <typename T>
class Calculator
{
public:
    T a;
    T b;
    Calculator(T a, T b)
    {
        this->a = a;
        this->b = b;
    }
    T add()
    {
        return a + b;
    }
};

int main()
{
    Calculator<int> math1(1,2);
    Calculator<double> math1(1,2);
    
    Dog dog1(4, "simba", 12, 2);
    AnimalKingdom::waterKingDom::shark shark1(0, "nemo", 100, 1000);

    cout << dog1.ears << endl;
    cout << shark1.age << endl;
    return 0;
}
