#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

struct Stack
{
    Node* top =  nullptr;

    void push(int n)
    {
        Node *newNode = new Node(n);
        newNode->next=top;
        top = newNode;

    }

//     Check if stack is empty
// Store top
// Move top = top.next
// Delete old node

    void pop()
    {
        // first check if stack is empty
        if(top == nullptr)
        {
            cout<<"Stack is Empty!";
            return;
        }
        Node *temp = top;
        top = top->next;
        delete temp;

    }

    void peek()
    {
        if(top == nullptr) cout<<"Stack is empty!";
        cout<<"Top: "<<top->data;
    }

    void isEmpty()
    {
        if(top == nullptr) cout<<"Stack is empty!";
    }
};

int main()
{
    Stack s;
    s.push(5);
    s.pop();
    s.pop();
    s.isEmpty();
    s.push(3);
    s.push(6);
    s.peek();
    s.pop();
    s.peek();

    return 0;
}