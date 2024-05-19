#include <iostream>
using namespace std;
class animal
{

public:
    void speak()
    {
        cout << "ANimal noise\n";
    }
};

class dog : public animal
{
};

int main()
{

    dog husky;
    husky.speak();

    return 0;
}
