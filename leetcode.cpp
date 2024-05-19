#include <iostream>
using namespace std;
void swp(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void printar(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swap_adjacent_numbers(int a[], int n)
{
    for (int i = 0; i < n; i += 2)
    {

        if (i + 1 < n)
        {
            swp(a[i], a[i + 1]);
        }
    }
    printar(a, 6);
}
int main()
{
    /*question 1: swap alternates
    i/p = {1,2,7,8,5}
    o/p = {2,1,8,7,5}

    i/p = {1,2,3,4,5,6}
    o/p = {2,1,4,3,6,5}

    */

    /*question 2 : find unique element
    a[n]={3,7,2,2,7,3,4};
    n = 2m+1;
    m occurs twice

    i/p = {3,7,2,2,7,3,4}

    o/p = 4;at index 6;

    */

    /*
    q3
    find unique element in an array


    */
    int n = 7;
    int a[n] = {1, 2, 3, 5, 5, 6, 4};

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ a[i]; // stores the value of unique elements
    }

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ i;
    }
    cout << ans;

    bool bell = 1;
    if (bell == 1)
    {
        cout << "Bell pressed" << endl;
    }
    else
    {
    }

    return 0;
}