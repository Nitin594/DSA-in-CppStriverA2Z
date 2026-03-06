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
    int arr[] = {1, 2, 3, 4, 5};
    Node *head = NULL;
    Node *current = NULL;

    for (int i = 0; i < 5; i++)
    {
        Node *newNode = new Node(arr[i]);

        if (head == NULL)
        {
            // First node becomes head
            head = newNode;
            current = newNode;
        }
        else
        {
            // Attach new node to the end
            current->next = newNode;
            current = newNode;
        }
    }

    // Traverse and print
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}