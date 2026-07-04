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
int size(Node *head)
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
void delete_any_poss(Node *&head, Node *&tail, int index)
{
    Node *tmp = head;

    for (int i = 0; i < index - 1; i++)
    {
        tmp = tmp->next;
    }

    Node *deleteNode = tmp->next;
    tmp->next = deleteNode->next;
    if (deleteNode == tail)
    {
        tail = tmp;
    }
    delete deleteNode;
}
void delete_head(Node *&head, Node *&tail)
{
    Node *deleteNode = head;
    head = head->next;
    if (head == NULL)
    {
        tail = NULL;
    }

    delete deleteNode;
}
void insert_at_head(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;

    while (t--)
    {
        int index, value;
        cin >> index >> value;
        if (index == 0)
        {
            insert_at_head(head, tail, value);
            print_link_list(head);
            cout << endl;
        }
        else if (index == 1)
        {
            insert_at_tail(head, tail, value);
            print_link_list(head);
            cout << endl;
        }
        else if (index == 2)
        {
            if (value < 0 || value >= size(head))
            {
                print_link_list(head);
                cout << endl;
            }
            else if (value == 0)
            {
                delete_head(head, tail);
                print_link_list(head);
                cout << endl;
            }

            else
            {
                delete_any_poss(head, tail, value);
                print_link_list(head);
                cout << endl;
            }
        }
    }

    return 0;
}