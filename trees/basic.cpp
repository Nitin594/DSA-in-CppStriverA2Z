#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int n)
    {
        data = n;
        left = right = NULL;
    }
};

// Traversal using preorder
void preorder(Node *node)
{
    if (node == NULL)
        return;
    cout << node->data << endl;
    preorder(node->left);
    preorder(node->right);
}
// Traversal using inorder
void inorder(Node *node)
{
    if (node == NULL)
        return;
    inorder(node->left);
    cout << node->data << endl;
    inorder(node->right);
}
// Traversal using postorder
void postorder(Node *node)
{
    if (node == NULL)
        return;
    postorder(node->left);
    postorder(node->right);
    cout << node->data << endl;
}

int main()
{
    struct Node *root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // traversel using preorder
    cout<<"---PREORDER---"<<endl;
    preorder(root);
    // traversel using inorder
    cout<<"---INORDER---"<<endl;
    inorder(root);
    // traversel using postorder
    cout<<"---POSTORDER---"<<endl;
    postorder(root);
    return 0;
}