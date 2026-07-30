// https://lustrous-trifle-e94566.netlify.app/

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

Node *binary_tree_input()
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

        Node *left_node, *right_node;

        if (l_val == -1)
            left_node = NULL;
        else
            left_node = new Node(l_val);
        if (r_val == -1)
            right_node = NULL;
        else
            right_node = new Node(r_val);

        fast->left = left_node;
        fast->right = right_node;

        if (fast->left)
            q.push(fast->left);

        if (fast->right)
            q.push(fast->right);
    }
    return root;
}
void level_order(Node *root)
{
    queue<Node *> q;
    if (root != NULL)
        q.push(root);
    else
        cout << "No Tree\n";

    while (!q.empty())
    {
        Node *fast = q.front();
        q.pop();

        cout << fast->val << " ";

        if (fast->left)
            q.push(fast->left);
        if (fast->right)
            q.push(fast->right);
    }
}
int main()
{
    Node *root = binary_tree_input();
    level_order(root);
    return 0;
}