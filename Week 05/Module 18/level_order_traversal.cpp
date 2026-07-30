// https://luminous-chebakia-d9b19a.netlify.app/

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

void level_order(Node *root)
{
    queue<Node *> qu_node;
    qu_node.push(root);
    while (!qu_node.empty())
    {
        Node *fast = qu_node.front();
        qu_node.pop();

        cout << fast->val << " ";

        if (fast->left)
        {
            qu_node.push(fast->left);
        }
        if (fast->right)
        {
            qu_node.push(fast->right);
        }
    }
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    d->right = e;

    level_order(root);

    return 0;
}