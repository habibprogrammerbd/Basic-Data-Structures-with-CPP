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

void delete_head(Node *&head, Node *&tail)
{
    Node *del = head;
    head = head->next;
    delete del;
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
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

    delete_head(head, tail);
    delete_head(head, tail);
    cout << tail;
    cout << head;

    print_foroworld(head);
    print_backward(tail);
    return 0;
}