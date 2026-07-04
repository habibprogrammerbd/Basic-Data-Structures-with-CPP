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
void print_link_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->value << " ";
        tmp = tmp->next;
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
    tail = newnode;
}

// void delete_any_poss(Node *&head, Node *&stor)
// {
//     Node *tmp = head;
//     Node *x = stor;

//     x->next = tmp->next;
//     delete tmp;
// }

void duplicate(Node *&head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        Node *j = i;
        while (j->next != NULL)
        {
            if (j->next->value == i->value)
            {
                Node *del = j->next;
                j->next = del->next;
                delete del;
            }
            else
            {
                j = j->next;
            }
        }
    }
}

int main()
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
    }

    duplicate(head);
    print_link_list(head);

    return 0;
}