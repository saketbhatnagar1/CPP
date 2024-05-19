#include <iostream>
using namespace std;

bool linsearch(int arr[], int size, int key)
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at " << i << endl;
            continue;
            return 1;
        }
        else
        {
            return 0;
        }
        /*sample input
           int arr[10] = {312, 32, 4, 1, 3, 3, 3, 21, 2, 1};
           int key = 239;
           bool a = linsearch(arr, 10, key);
           if (a == 1)
           {
               cout << "Mil gaya" << endl;
           }
           else
           {
               cout << "nahi mila";
           }
           */
    }
}
void printar(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int arrsum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum of the elements of the array is : " << sum << endl;
    return sum;
}

int main()
{
    // reverse an array;
    int a[5] = {3, 32, 12, 3, 5};
    int end = 4;
    int start = 0;
    int temp;

    cout << "Before swapping :" << endl;
    printar(a, 5);
    cout << endl;
    /* for (int i = 0; i < 5; i++)
     {
         if (start != 0 && end < 4 && end != start)
         {
             temp = a[end];
             a[end] = a[start];
             a[start] = temp;
             end++;
             start--;
         }
     }*/
    cout << "after swapping :" << endl;

    while (start <= end)
    {
        temp = a[end];
        a[end] = a[start];
        a[start] = temp;
        end--;
        start++;
    }
    printar(a, 5);
    return 0;
}