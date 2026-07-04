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

void same_to_same(Node *&head1, Node *&head2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    // int x = ;

    bool ans = false;

    if (size(tmp1) == size(tmp2))
    {
        for (Node *i = tmp1, *j = tmp2; i != NULL; i = i->next, j = j->next)
        {
            if (i->value != j->value)
            {
                ans = true;
                break;
            }
        }

        if (ans == true)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
        {
            break;
        }

        insert_at_tail(head1, tail1, value);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
        {
            break;
        }

        insert_at_tail(head2, tail2, value);
    }

    same_to_same(head1, head2);

    return 0;
}