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
    newnode->prev = tail;
    tail = newnode;
}

void dubley_revese(Node *head, Node *tail)
{
    for (Node *i = head, *j = tail; i != j && i != j->prev; i = i->next, j = j->prev)
    {
        swap(i->value, j->value);
    }
}

bool detect_fuction(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            return true;
            break;
        }
    }
    return false;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(12);
    Node *c = new Node(70);
    Node *d = new Node(50);
    Node *f = new Node(90);
    Node *tail = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = f;
    f->next = tail;
    tail->next = b;
    // int value;
    // while (true)
    // {
    //     cin >> value;
    //     if (value == -1)
    //     {
    //         break;
    //     }
    //     insert_at_tail(head, tail, value);
    // }

    if (detect_fuction(head) == true)
    {
        cout << "Detete cycle";
    }
    else
    {
        cout << "Not cycle";
    }

    return 0;
}