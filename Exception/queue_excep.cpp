#include <iostream>

#define SIZE 5

using namespace std;

class QUEUE
{
private:
    int num[SIZE];
    int front, rear;

public:
    QUEUE()
    {
        front = -1;
        rear = -1;
    }

    int isEmpty()
    {
        return (front == -1 || front > rear);
    }

    int isFull()
    {
        return (rear == SIZE - 1);
    }

    void enqueue(int n)
    {
        try
        {
            if (isFull())
            {
                throw rear;
            }

            if (front == -1)
                front = 0;

            ++rear;
            num[rear] = n;
            cout << n << " added to queue." << endl;
        }
        catch (int i)
        {
            cout << "Overflow exception: Queue is full!" << endl;
        }
    }

    int dequeue()
    {
        try
        {
            if (isEmpty())
            {
                throw front;
            }

            int temp = num[front];
            ++front;

            if (front > rear)
            {
                // Reset queue after all elements are dequeued
                front = -1;
                rear = -1;
            }

            return temp;
        }
        catch (int i)
        {
            cout << "Underflow exception: Queue is empty!" << endl;
        }
        return -1; // Return a default value if an exception occurs
    }

    void displayItems()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!" << endl;
        }
        else
        {
            cout << "QUEUE is: ";
            for (int i = front; i <= rear; i++)
                cout << num[i] << " ";
            cout << endl;
        }
    }
};

int main()
{
    QUEUE q;

    // Testing the queue
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7); // This should trigger an overflow exception

    q.displayItems();

    cout << q.dequeue() << " removed from queue." << endl;
    cout << q.dequeue() << " removed from queue." << endl;

    q.displayItems();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue(); // This should trigger an underflow exception

    return 0;
}
