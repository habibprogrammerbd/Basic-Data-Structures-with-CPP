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
void print_link_list(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
}

// void sorting_linked(Node *head)
// {
//     // Node *tmp = head;
//     for (Node *i = head; i->next != NULL; i = i->next)
//     {
//         for (Node *j = i->next; j != NULL; j = j->next)
//         {
//             if (i->value < j->value)
//             {
//                 swap(i->value, j->value);
//             }
//         }
//     }
// }

void soting_linked(Node *head)
{
    Node *tmp = head;
    Node *ans = head;
    for (Node *i = tmp; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value > j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
    bool x = false;
    for (Node *i = ans; i->next != NULL; i = i->next)
    {
        if (ans->value != tmp->value)
        {
            x = true;
            break;
        }
    }

    if (x == true)
    {
        cout << "yes";
    }
    else
    {
        cout << " no";
    }

    // bool ans = false;
    // for (Node *i = head; i->next != NULL; i = i->next)
    // {
    //     if (i->value == i->next->value)
    //     {
    //         ans = true;
    //         break;
    //     }
    // }

    // if (ans == true)
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }
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
    soting_linked(head);
    // sorting_linked(head);
    // print_link_list(head);
    return 0;
}