#include <iostream>
using namespace std;

class BaseClass
{
public:
    int age;

    void display()
    {
        cout << "BASE CLASS FUNCTION CALLED\n";
    }
};
class DerivedClass : public BaseClass
{
public:
    int arg;
    void display()
    {
        cout << "DERIVED CLASS FUNCTION CALLED\n";
    }
};

int main()
{
    BaseClass *baseclasspointer;
    BaseClass obj1;
    DerivedClass deobj;
    baseclasspointer = &deobj;
    // base class ka pointer derived class ko point kar sakta hai;

    baseclasspointer->age = 32;
    baseclasspointer->display();

    return 0;
}