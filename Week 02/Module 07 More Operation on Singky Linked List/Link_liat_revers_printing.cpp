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

void reverse_printing(Node *&head)
{
    Node *&tmp = head;

    if (tmp == NULL)
    {
        return;
    }

    reverse_printing(tmp->next);
    cout << tmp->value << " ";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;
    while (cin >> value)
    {

        insert_at_tail(head, tail, value);
    }

    reverse_printing(head);
    return 0;
}