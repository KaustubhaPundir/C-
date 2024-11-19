#include <iostream>
#include <stdexcept> 
#define MAX 1000 // Maximum size of the queue

using namespace std;

class Queue {
    int front, rear;

public:
    int arr[MAX]; // Array to hold queue elements

    Queue() {
        front = 0;
        rear = -1;
    }

    // Enqueue operation with exception handling for queue overflow
    void enqueue(int x) {
        if (rear >= (MAX - 1)) {
            throw overflow_error("Queue Overflow");
        } else {
            arr[++rear] = x;
            cout << x << " added to the queue\n";
        }
    }

    // Dequeue operation with exception handling for queue underflow
    int dequeue() {
        if (front > rear) {
            throw underflow_error("Queue Underflow");
        } else {
            return arr[front++];
        }
    }

    // Peek operation
    int peek() {
        if (front > rear) {
            throw underflow_error("Queue is Empty");
        } else {
            return arr[front];
        }
    }

    // Check if the queue is empty
    bool isEmpty() { 
        return (front > rear); 
    }
};

int main() {
    Queue q;

    try {
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);

        cout << q.dequeue() << " removed from queue\n"; // Should dequeue 10
        cout << "Front element is " << q.peek() << endl; // Should show 20

        // Example of queue underflow exception
        cout << q.dequeue() << " removed from queue\n"; 
        cout << q.dequeue() << " removed from queue\n"; 
        cout << q.dequeue() << " removed from queue\n"; // This will trigger the underflow exception

    } catch (overflow_error &e) {
        cout << "Exception: " << e.what() << endl;
    } catch (underflow_error &e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
