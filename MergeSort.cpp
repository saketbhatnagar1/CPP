/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
void merge(int arr[], int s, int e)
{
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];
    int mainarrayindex = s;
    // copy these elements in left and right and merging the arrays;

    for (int i = 0; i < len1; i++)
    {
        // copy the elemeents of orignal array in new sub arrays;
        first[i] = arr[mainarrayindex++];
    }

    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainarrayindex++];
    }
    // merge 2 sortedd arrays:

    int index1 = 0;
    int index2 = 0;
    mainarrayindex = s;
    //  the main array's index = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] <= second[index2])
        {
            arr[mainarrayindex++] = first[index1++];
        }
        else
        {
            arr[mainarrayindex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainarrayindex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainarrayindex++] = second[index2++];
    }
}

void mergesort(int arr[], int s, int e)

{

    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    // left part sorting:
    mergesort(arr, s, mid);
    // sort right
    mergesort(arr, mid + 1, e);

    // merge
    merge(arr, s, e);
}

int main()
{
    int arr[5] = {5, 2, 3, 1, 4};
    mergesort(arr, 0, 4);
    for (int a = 0; a < 5; a++)
    {
        cout << arr[a] << " ";
    }

    return 0;
}