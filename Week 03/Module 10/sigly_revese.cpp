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
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
}

void print_reves(Node *&head, Node *tmp, Node *&tail)
{
    if (tmp->next == NULL)
    {
        head = tmp;
        return;
    }
    print_reves(head, tmp->next, tail);
    tmp->next->next = tmp;
    tmp->next = NULL;
    tail = tmp;
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

    print_reves(head, head, tail);
    print_link_list(head);
    cout << tail->value << endl;

    return 0;
}