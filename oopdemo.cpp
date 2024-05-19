// code file demonstrating all concepts of object oriented programing in c++
#include <iostream>
using namespace std;

// classes and objects
class car
{
private:
    int id;

public:
    string type;
    int hp;
    float torque;
    int range;

    // getters and setters

    // we use the get method to get the value of the id ,now the private member is accesable through the getid() method
    int getid()
    {

        return id;
    }

    // set id used to set the valeus of the private data members through public function calls

    void setid(int vid)
    {
        id = vid;
    }

    // constructors,whenever we create a object,a function is invoked that is called as  constructor
    // whenever we create a object,a function is created by the class name
    // when creating a constructor ,give it the same name as your class
    // default contructor is deleted whenever we create our own constructor

    car() // default constructor
    {
        cout << "default constructor called\n"; // this will be printed everytime a object is created meaning a cosntrucvtor is called at every initiallization of a object
    }

    // parametarized constructor:

    // this keyword
    car(int range)
    {
        cout << "this->" << this << endl;
        this->range = range;
    }
    car(int id, string type, float torque)
    {
        this->torque = torque;
        this->type = type;
        this->id = id;
    }
};

// inheritence

class human
{
public:
    int height;
    int age;
    int weight;

    void eats()
    {
        cout << "Eats\n";
    }
    void walks()
    {
        cout << "walks\n";
    }
    int getage()
    {
        return age;
    }
    void setweight(int w)
    {
        this->weight = w;
    }
};

class male : public human
{
public:
    string color;
    void sleep()
    {
        cout << "male sleeping";
    }
};

int main()
{
    // creating object of class vehicle;
    // static allocation
    // car bmwm340i;
    // bmwm340i.hp = 350;
    // bmwm340i.type = "SportsSedan";
    // bmwm340i.torque = 500;
    // bmwm340i.setid(50); // set id method used to set the value of the private member
    // bmwm340i.getid();   // get id method called to get the id of the car object which was a private member

    // dynamic allocation of vehicle class
    // car *x7 = new car;
    // x7 is the adress of the variable,*x7 is derefrencing the variable
    // x7->hp = 600; // x7->hp is the syntax for assigning values to the dynamically assigned variables
    // x7->hp = 600 is the same as (*x7).hp = 600

    // constructors:

    // car panemera(10);
    // cout << panemera.range << endl;

    // car series(13, "sports sedan", 589);
    //  series.setid(13);
    // cout << series.getid();
    // copy constructors:

    car sclass;
    sclass.setid(32);
    sclass.range = 800;
    car maybach(sclass); // copy constructor
    cout << maybach.range;

    // inheritence
    male object1;
    object1.age = 90;
    object1.color = "kaala\n";
    object1.height = 190;

    return 0;
}