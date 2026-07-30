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

Node *input()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;

    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *fast = q.front();
        q.pop();

        int l_val, r_val;
        cin >> l_val >> r_val;

        Node *laft_node, *right_node;

        if (l_val == -1)
            laft_node = NULL;
        else
            laft_node = new Node(l_val);

        if (r_val == -1)
            right_node = NULL;
        else
            right_node = new Node(r_val);

        fast->left = laft_node;
        fast->right = right_node;

        if (fast->left)
            q.push(fast->left);
        if (fast->right)
            q.push(fast->right);
    }
    return root;
}

int count_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    return l + r;
}

int main()
{
    Node *root = input();
    cout << count_nodes(root);
    return 0;
}