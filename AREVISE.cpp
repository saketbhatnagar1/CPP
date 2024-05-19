/*question 1: swap alternates
    i/p = {1,2,7,8,5}
    o/p = {2,1,8,7,5}

    i/p = {1,2,3,4,5,6}
    o/p = {2,1,4,3,6,5}

    */

#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 2, 7, 8, 5};

    for (int i = 0; i < 5; i += 2)
    {
        for (int j = i + 1; j < 5; j += 2)
        {
            swap(a[i], a[j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}