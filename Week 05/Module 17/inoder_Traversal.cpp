// https://verdant-torrone-52b01c.netlify.app/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorder_traversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder_traversal(root->left);
    cout << root->val << " ";
    inorder_traversal(root->right);
}

int main()
{
    Node *root = new Node(100);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(50);
    Node *d = new Node(40);
    Node *e = new Node(300);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    d->right = e;

    inorder_traversal(root);
    return 0;
}