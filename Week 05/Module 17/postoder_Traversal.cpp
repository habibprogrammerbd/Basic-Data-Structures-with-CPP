// https://gorgeous-bienenstitch-e2c69a.netlify.app/


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

void postorder_traversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout << root->val << " ";
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

    postorder_traversal(root);
    return 0;
}