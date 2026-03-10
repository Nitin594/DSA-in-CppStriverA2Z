// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Stack
{   
    int arr[10];
    int top = -1;
    public:

    void push(int n)
    {
        if(top>=10)
        {
            cout<<"\nStack Overflow!";
            return;
        }
        ++top;
        cout<<top<<" ";
        arr[top] = n;
    }
    void pop()
    {
        if(top == -1)return;
        --top;
    }
    void top1()
    {
        cout<<arr[top];
    }
    void isEmpty()
    {
        if(top == -1)
        {
            cout<<"\nStack is empty!";
        }else{
            cout<<"\nStack is not empty!";
        }
    }

    void print()
    {
        cout<<endl;
        for(int x: arr)
        {
            cout<<x<<" ";
        }
    }

};


int main()
{
    Stack s;
    s.push(5);
    s.push(6);
    s.push(5);
    s.push(8);
    s.pop();
    s.push(5);
    s.push(5);
    s.pop();
    s.pop();
    s.push(5);
    s.push(7);
    s.push(58);
    s.push(59);
    s.push(565);
    s.push(5454);
    s.pop();
    s.push(6);
    s.top1();
    // s.isEmpty();
    s.print();

    // cout<<s.top;


    return 0;
}