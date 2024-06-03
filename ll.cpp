#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() : head(nullptr) {}

    void insert(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};
void insertathead(Node* &head,int data) //we passed head as a refrence because we dont want to make a copy,rather we want to update the orignal linked list
{

    cout<<"Insert at head called"<<endl;
    //new node creation:
    Node* temp = new Node(data);
    temp->next=head;
    head=temp;
}
void isnertattail(Node* &tail,int data){
    Node*temp = new Node(data);
    tail->next = temp;//tail is a pointer tha points to the last node:
    tail = temp;//tail->next holds adress of the new node created that is last node
     
}
void insertatindex(Node * &head,int position,int data)
{
    
    //if we want to go to nth position we have to go till n-1th position:

    if(position==1){
        insertathead(head,data);
        return;
    }

    int count = 1;
    Node* temp = head;

     while(count<=position-1)
    {
        temp = temp->next;
        count++;
    }
    Node * nodetoinsert= new Node(data);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert; 
    //length of LL

}


int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display(); // Output: 10 20 30

    return 0;
}
