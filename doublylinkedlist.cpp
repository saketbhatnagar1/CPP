#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void deleteNode(int data) {
        Node* temp = head;
        while (temp != nullptr && temp->data != data) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            std::cout << "Node not found\n";
            return;
        }
        if (temp->prev != nullptr) {
            temp->prev->next = temp->next;
        } else {
            head = temp->next;
        }
        if (temp->next != nullptr) {
            temp->next->prev = temp->prev;
        }
        delete temp;
    }

    void displayForward() {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    void displayBackward() {
        Node* temp = head;
        if (temp == nullptr) return;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->prev;
        }
        std::cout << std::endl;
    }

    ~DoublyLinkedList() {
        Node* temp = head;
        while (temp != nullptr) {
            Node* next = temp->next;
            delete temp;
            temp = next;
        }
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertAtBeginning(10);
    dll.insertAtEnd(20);
    dll.insertAtEnd(30);
    dll.insertAtBeginning(5);

    std::cout << "List displayed forward: ";
    dll.displayForward(); // Output: 5 10 20 30

    std::cout << "List displayed backward: ";
    dll.displayBackward(); // Output: 30 20 10 5

    dll.deleteNode(20);

    std::cout << "List after deleting 20: ";
    dll.displayForward(); // Output: 5 10 30

    return 0;
}
