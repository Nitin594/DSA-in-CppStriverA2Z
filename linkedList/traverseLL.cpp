#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;

    // Constructor for Node whose next node points to null
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    Node *head;
    head = NULL;
    Node *first = new Node(1);
    head = first;

    Node *second = new Node(2);
    first->next = second;

    Node *third = new Node(3);
    second->next = third;

    // temp Node pointer, points to head and next points to next Node
    Node *temp;
    // while(temp->next != NULL)
    for (temp = head; temp != NULL;)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}