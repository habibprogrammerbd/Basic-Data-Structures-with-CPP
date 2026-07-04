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

    int list1 = size(head1);
    int list2 = size(head2);

    if (list1 == list2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}