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

int size(Node *&head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    Node *tmp = head;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
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
void insert_at_any_poss(Node *&head, int index, int value)
{
    Node *tmp = head;
    Node *newNode = new Node(value);

    for (int i = 1; i < index; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
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
    int t;
    cin >> t;

    while (t--)
    {
        int index, val;
        cin >> index >> val;
        if (size(head) < index)
        {
            cout << "Invalid" << endl;
        }
        else if (index > 0)
        {
            insert_at_any_poss(head, index, val);
            print_link_list(head);
            cout << endl;
        }
        else if (index == 0)
        {
            insert_at_head(head, val);
            print_link_list(head);
            cout << endl;
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    //    cout <<  size(head);

    return 0;
}