#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
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
int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while (start <= end) //[5,7,9,13,25,12]
    {
        int mid = (start + ((end - start) / 2));
        if (arr[mid] == key)
        {
            cout << arr[mid] << " Found at : " << mid << endl;
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            cout << "Element not present" << endl;
        }
    }
}
int firstOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        { // Right me jao {3,5,21,33,54,63,732} -->{54,63,732}
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left me jao {3,5,21,33,54,63,732} -->{3,5,21}
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        { // Right me jao {3,5,21,33,54,63,732} -->{54,63,732}
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left me jao {3,5,21,33,54,63,732} -->{3,5,21}
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{ // pivot element find karne ke liye
    /*
     int arr[n] = {7, 8, 9, 10, 2, 3, 4};
     idhar 7,8,9,10 ek sorted array hai
     and 2,3,4 ek sorted array hai

     so 2 is the pivot point jiske around array rotated hai

     so we have to find that pivot point using binary search

    */
    int arrr[7] = {1, 3, 3, 5, 6, 7, 8};

    int n = 5;
    int arr[n] = {7, 8, 9, 1, 2};
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    int pivot;
    int key = 8;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }

        mid = (s + e) / 2;
        pivot = s;
    }

    s = 0;
    e = n - 1;
    mid = (s + e) / 2;
    while (s < e)
    {
        if (key >= arr[pivot] && key <= arr[n - 1]) //
        {
            // binarysearch();
        }
        else
        {
            s = pivot;
        }
        mid = ((s + e) / 2);
    }
    return 0;
}
/*

*/
