#include <iostream>
using namespace std;
// circular linked list:

// las node/tail points to the first node/head;
class Node
{
public:
    Node *next;
    int data;
    // constructor:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor:
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "MEMORY FREE FROM " << value << endl;
    }
};
// we dont need head pointer in circular linked list:

void insertNode(Node *&tail, int element, int data)
{
    // exmpty list->tail=NULL;
    // tail=temp;
    // temp->next = temp(temp is the new node created)

    // only 1 node is present
    if (tail == NULL)
    {
        // when empty list
        Node *newnode = new Node(data);
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        // non empty list:
        Node *current = tail;

        // find element where we want to insert our node
        while (current->data != element)
        {
            current = current->next;
        }
        // element found: current is representing element node with the elment:
        Node *temp = new Node(data);

        temp->next = current->next;
        current->next = temp;
    }
}
int main()
{

    return 0;
}