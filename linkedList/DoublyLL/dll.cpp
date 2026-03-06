#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int data, Node *next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev = prev;
    }

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

Node *convertArray2DLL(int arr[])
{
    Node *head = new Node(arr[0]);
    Node *prev = head; // prev points to last node so far

    for (int i = 1; i < 6; i++)
    {
        Node *newNode = new Node(arr[i], nullptr, prev);
        prev->next = newNode;   // 2.next → 3
        prev = newNode;         // moves the prev pointer to 3
    }

    return head;
}

int main()
{
    int arr[] = {2, 3, 5, 6, 7, 8};
    int n = 6;

    Node *head = convertArray2DLL(arr);

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}