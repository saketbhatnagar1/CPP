#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next; // points to objects of node
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// |data|next|-->|NULL|

void InsertAtHead(Node *&head, int d) /*we pass refrence to head so that insertion takes place at the orignal ll and of the orignal node,we dont want a copy to be made*/
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{

    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(Node *head, int position, int d)
{
    Node *temp = head;
    int count = 1;
    while (count <= position - 1)
    {
        temp = temp->next;
        count++;
    }
    // create a node for d;
    Node *nodeToInset = new Node(d);
    nodeToInset->next = temp->next;
    temp->next = nodeToInset;
}
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // created a new node
    Node *node1 = new Node(5); // creates a object in heap,node1 stores the adress of the object created in heap using new keyword
                               //    cout << node1->data;
    Node *head = node1;
    Node *tail = node1;
    print(tail); // head points to adress of node 1 i.e we re assigned value of adress of node 1 to head pointer
                 //  insert at head;
    insertAtTail(tail, 12);
    print(tail);
    insertAtTail(tail, 10);
    print(head);
    insertAtTail(tail, 15);
    print(head);

    return 0;
}