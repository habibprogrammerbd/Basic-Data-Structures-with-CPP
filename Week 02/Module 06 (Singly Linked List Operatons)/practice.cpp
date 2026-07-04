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

void insert_at_head(Node *&head, int value)
{
    Node *NewNode = new Node(value);
    if (head == NULL)
    {
        head = NewNode;
        return;
    }

    head = NewNode->next;
    head = NewNode;
}

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *NewNode = new Node(value);
    if (head == NULL)
    {
        head = NewNode;
        tail = NewNode;
        return;
    }

    tail->next = NewNode;
    tail = NewNode;
}

void insert_at_poss(Node *&head, int idx, int value)
{
    Node *NewNode = new Node(value);
    if (head == NULL)
    {
        head = NewNode;
        return;
    }
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }

    NewNode->next = tmp->next;
    tmp->next = NewNode;
}

void insert_mark(Node *&head, Node *&tail, int idx, int value)
{
    if (idx == 0)
    {
        insert_at_head(head, value);
    }
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // insert_at_tail(head, tail, 10);
    int NodeCount = 0;

    int insart, value;
    while (cin >> insart >> value)
    {
        if (NodeCount <= insart)
        {
            insert_mark(head, tail, insart, value);
            NodeCount++;
        }
        else
        {
            cout << "No Inssart" << endl;
        }
    }

    print_link_list(head);

    return 0;
}