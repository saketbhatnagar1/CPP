#include <iostream>
using namespace std;
class a
{
    void sayhello()
    {
        cout << "HELLOW" << endl;
    }
};
class B
{
public:
    int a;
    int b;

    void operator+(B &obj)
    {
        int val1 = this->a;
        int val2 = obj.a;
        cout << val2 - val1;
    }
};

int main()
{

    B b1, b2;
    b1.a = 10;
    b2.a = 5;
    b1 + b2;

    return 0;
}