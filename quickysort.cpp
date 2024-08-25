#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)

{
    // STEP1: find the count of elements less than the element we are supposed to place

    int count = 0;
    int pivot = arr[s];
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // correct position of the pivot element
    int pivotindex = s + count;
    swap(arr[pivotindex], arr[s]);
    // STEP 2: find and place element >pivot to it's left and <pivot to it's right
    // such that [pivot<,pivot,>pivot]

    int i = s;
    int j = e;
    while (i < pivotindex && j > pivotindex) // this handles indexing

    {
        while (arr[i] <= pivot) // this compares the elements
        {
            i++;
        }

        while (arr[j] > pivot) // this compares the elements
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}

void quicksort(int arr[], int s, int e)
{
    // base case for recursive function::
    if (s >= e)
    {
        return;
    }

    // find the pivot index:
    int p = partition(arr, s, e);

    // sort the left partition::
    quicksort(arr, s, p - 1);

    // sort the left partition::
    quicksort(arr, p + 1, e);
}

int main()
{
    cout << "Hello World";
    int arr[6] = {5, 3, 1, 2, 6, 4};

    quicksort(arr, 0, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}