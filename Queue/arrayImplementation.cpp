#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int arr[10];
    int n = 10;

    int front = -1;
    int rear = -1;

    void push(int x)
    {
        // Check full
        if ((rear + 1) % n == front)
        {
            cout << "Queue is full!" << endl;
            return;
        }

        // First element
        if (front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % n;
        }

        arr[rear] = x;
    }

    void pop()
    {
        if (front == -1)
        {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << arr[front] << " is popped out." << endl;

        // Only one element
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % n;
        }
    }

    void peek()
    {
        if (front == -1)
        {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << arr[front] << endl;
    }

    bool isEmpty()
    {
        return front == -1;
    }
};

int main()
{
    Queue q;
    q.pop();
    cout << q.isEmpty() << endl;

    q.push(3);
    q.pop();

    q.push(5);
    q.push(9);
    q.push(90);

    q.pop();
    q.pop();

    q.peek();
    cout << q.isEmpty() << endl;

    q.pop();
    cout << q.isEmpty() << endl;

    q.pop();
    q.pop();

    cout << q.isEmpty();

    return 0;
}