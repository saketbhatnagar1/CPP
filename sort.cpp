
#include <iostream>
using namespace std;

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void SelectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) //
        {
            if (arr[j] < arr[minIndex]) //{2,32,423,10,1}
            {                           //{2,10,423,32,1}
                minIndex = j;           //{
            }
        }
        cout << "The Sorted array in " << i << "iteration is :" << endl;
        printarr(arr, n);
        cout << endl;

        swap(arr[minIndex], arr[i]);
    }
}
void BubbleSort(int arr[], int n)
{

    for (int j = 1; j < n; j++)
    {
        bool swapped = false;
        for (int i = 0; i < n - j; i++)
        {
            if (arr[i] > arr[i + 1])

            {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            break;
        }
    }
}
void aselection()
{
}
void insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
    }
}

int main()
{

    return 0;
}
