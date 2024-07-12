#include <iostream>
using namespace std;

class Queue
{
public:
    int size;
    int *arr;
    int front;
    int rear;

    // constructor for queue
public:
    Queue()
    {
        int size = 30;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    // public functions
    void pop()
    {
    }
    // enque
    void push(int data)
    {
        if (rear == size)
        {
            cout << "QUEUE IS FULL";
        }
        else
        {
            arr[rear] = data;
        }
    }

    bool isEmpty()
    {
        return 0;
    }
};

int main()
{
    int a = 10;
    float b = 20;
    float *ptr = &b;
    float **ptr2 = &ptr;
    cout << ptr << endl;
    cout << *ptr2;

    return 0;
}