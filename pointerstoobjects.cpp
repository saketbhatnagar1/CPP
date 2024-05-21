#include <iostream>
using namespace std;
class Complex
{
    int real, img;

public:
    void setdata(int a, int b)
    {
        this->real = a;
        this->img = b;
    }
    void getdata()
    {
        cout << "RealPart is " << real << " imaginary part is :" << img;
    }
};

class plane
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        this->id = a;
        this->price = b;
    }
    void getdata()
    {
        cout << "Price is : " << price << "id is :" << id << endl;
    }
};

int main()
{

    Complex c1;
    Complex *ptr = &c1; // object pointer points to adress of object

    (*ptr).setdata(5, 10); // we can also use ptr->setdata(a,b)
    (*ptr).getdata();

    // ARRAY OF OBJECTS:
    int size = 10;
    int p;

    float q;

    plane *pl = new plane[size];

    for (int i = 0; i < size; i++)
    {
        cout << "ID AND PRICE OF " << i + 1;
        cin >> p >> q;     // takes p and q for id and price
        pl->setdata(p, q); // uses set data function for setting the price
        pl++;              // increments the pointer variable to the enxt element in array
    }

    return 0;
}