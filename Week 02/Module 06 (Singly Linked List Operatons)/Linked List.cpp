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
    head = newnode;
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

    insert_at_head(head, tail, 10);
    insert_at_head(head, tail, 20);
    insert_at_head(head, tail, 30);
    insert_at_head(head, tail, 40);
    insert_at_head(head, tail, 50);
    insert_at_head(head, tail, 70);

    print_link_list(head);
    return 0;
}