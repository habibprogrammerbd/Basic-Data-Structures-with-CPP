#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }

    return count;
}

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newnode = new Node(value);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void print_link_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
}

void find_valu(Node *head, int val)
{
    Node *tmp = head;
    int count = 0;

    while (tmp != NULL)
    {
        if (tmp->value == val)
        {
            cout << count << endl;
            return;
        }

        count++;
        tmp = tmp->next;
    }

    cout << -1 << endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;

        while (true)
        {
            int value;
            cin >> value;
            if (value == -1)
            {
                break;
            }

            insert_at_tail(head, tail, value);

            // print_link_list(head);
        }
        int val;
        cin >> val;
        find_valu(head, val);
    }

    return 0;
}