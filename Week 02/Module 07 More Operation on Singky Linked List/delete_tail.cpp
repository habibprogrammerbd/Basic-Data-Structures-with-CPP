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

void delete_at_tail(Node *&head, Node *&tail, int index)
{
    Node *tmp = head;
    for (int i = 1; i < index - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteaNode = tmp->next;
    tmp->next = deleteaNode->next;
    delete deleteaNode;
    tail = tmp;
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
    int value;

    while (cin >> value)
    {
        insert_at_tail(head, tail, value);
    }

    delete_at_tail(head, tail, 9);
    print_link_list(head);
    return 0;
}