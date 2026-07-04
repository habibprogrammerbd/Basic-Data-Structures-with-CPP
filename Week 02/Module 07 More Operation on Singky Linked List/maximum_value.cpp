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

int max_value(Node *head)
{
    Node * tmp = head;
    int max = tmp->value;
    while (tmp != NULL)
    {
        if (max < tmp->value)
        {
            max = tmp->value;
        }
        tmp = tmp->next;
    }

   return max;
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


    cout << max_value(head);

    return 0;
}