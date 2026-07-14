#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_foroworld(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->value << " ";

        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    Node *tmp = tail;

    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->prev;
    }
}

void insert_at_head(Node *&head, Node *&tail, int value)
{
    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
void insert_any_poss(Node *head, int value, int idx)
{
    Node *tmp = head;
    Node *newnode = new Node(value);
    for (int i = 0; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }

    newnode->next = tmp->next;
    tmp->next = newnode;
    newnode->prev = tmp;
    newnode->next->prev = newnode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    insert_any_poss(head, 100, 1);
    insert_any_poss(head, 4, 1);
    insert_any_poss(head, 9, 1);

    print_foroworld(head);
    print_backward(tail);
    return 0;
}