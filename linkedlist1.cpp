#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void traverse(Node *head)
{
    // traversel in linked list::

    Node *tempp = head;
    while (tempp != NULL)
    {
        cout << tempp->data << " ";

        tempp = tempp->next;
    }
    cout << endl;
    cout << "Traverserl complete" << endl;
}
Node *ArrtoLL(vector<int> &arr)

{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}
Node *deleteHead(Node *head)
{

    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}
// delet kth element:;
Node *DeleteKth(Node *head, int k)
{
    if (head == NULL)
    {
        return head;
    }
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    int count = 1;
    Node *temp = head;
    Node *prev = NULL;
    while (temp->next != NULL)
    {
        if (count == k)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
        count++;
    }
    return head;
}

Node *elemnt(Node *head, int ele)
{
    if (head == NULL)
    {
        return head;
    }

    Node *temp = head;
    Node *prev = NULL;
    while (temp->next != NULL)
    {
        if (temp->data == ele)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
Node *insertatHead(Node *head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
    return head;
}
Node *insertattail(Node *head, int data)
{
    // crerating a node as the tail

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *tail = new Node(data);
    temp->next = tail;

    return head;
}
Node *insertatK(Node *head, int data, int k)
{
    Node *nodek = new Node(data);
    Node *temp = head;
    int count = 0;
    while (temp->next != NULL)
    {
        count++;
        if (k == 0)
        {
            nodek->next = head;
            return nodek; // New head
        }
        if (count == k)
        {
            nodek->next = temp->next;
            temp->next = nodek;
        }
        temp = temp->next;
    }
    return head;
}


int main()
{
    vector<int> arr;
    arr = {133221, 2, 3, 4, 5, 6, 7};
    int n = 7;

    Node *head = ArrtoLL(arr);
    traverse(head);
    head = insertattail(head, 102);
    traverse(head);
    head = insertatK(head, 345, 3);
    cout << "Inserting 345 at 3" << endl;
    traverse(head);
    return 0;
}
// testing parametres::

// cout << endl;
// traverse(head);
// cout << endl;
// // deletion of head;
// head = deleteHead(head);
// traverse(head);
// DeleteKth(head, 3);
// cout << endl;
// cout << "After deleting " << 3 << "rd element" << endl;
// traverse(head);
// cout << endl;
// elemnt(head, 3);
// traverse(head);
// cout << "After deleting " << 3 << " " << endl;
// traverse(head);
// insertatHead(head, 629);
// cout << "After inserting 629 at head" << endl;
