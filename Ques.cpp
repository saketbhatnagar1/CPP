#include <iostream>

// Define a Node structure for the queue
struct Node {
    int data;
    Node* next;
};

// Define the Queue class
class Queue {
private:
    Node* frontNode;
    Node* rearNode;
    int count;

public:
    // Constructor to initialize the queue
    Queue() : frontNode(nullptr), rearNode(nullptr), count(0) {}

    // Destructor to clean up the queue
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    // Enqueue operation to add an element to the queue
    void enqueue(int value) {
        Node* newNode = new Node{value, nullptr};
        if (rearNode) {
            rearNode->next = newNode;
        }
        rearNode = newNode;
        if (!frontNode) {
            frontNode = rearNode;
        }
        ++count;
    }

    // Dequeue operation to remove an element from the queue
    void dequeue() {
        if (isEmpty()) {
            std::cerr << "Queue is empty. Cannot dequeue." << std::endl;
            return;
        }
        Node* temp = frontNode;
        frontNode = frontNode->next;
        if (!frontNode) {
            rearNode = nullptr;
        }
        delete temp;
        --count;
    }

    // Get the front element of the queue
    int front() const {
        if (isEmpty()) {
            std::cerr << "Queue is empty. No front element." << std::endl;
            return -1; // or throw an exception
        }
        return frontNode->data;
    }

    // Get the size of the queue
    int size() const {
        return count;
    }

    // Check if the queue is empty
    bool isEmpty() const {
        return count == 0;
    }
};

int main() {
    // Create a queue
    Queue q;

    // Enqueue elements into the queue
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    // Display the size of the queue
    std::cout << "Size of queue: " << q.size() << std::endl;

    // Access the front element
    if (!q.isEmpty()) {
        std::cout << "Front element: " << q.front() << std::endl;
    }

    // Dequeue an element from the queue
    q.dequeue();
    std::cout << "After one dequeue, front element: " << q.front() << std::endl;

    // Display the size of the queue after dequeue
    std::cout << "Size of queue after one dequeue: " << q.size() << std::endl;

    // Traverse and dequeue all elements
    std::cout << "Dequeuing all elements:" << std::endl;
    while (!q.isEmpty()) {
        std::cout << q.front() << " ";
        q.dequeue();
    }
    std::cout << std::endl;

    // Check if the queue is empty
    if (q.isEmpty()) {
        std::cout << "Queue is empty." << std::endl;
    } else {
        std::cout << "Queue is not empty." << std::endl;
    }

    return 0;
}
