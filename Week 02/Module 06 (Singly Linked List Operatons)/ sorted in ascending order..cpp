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

void insert_at_tell(Node *&head, Node *&tell, int value)
{
    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = newnode;
        tell = newnode;
        return;
    }

    Node *tmp = tell;

    tell->next = newnode;
    tell = newnode;
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
    Node *tell = NULL;

    insert_at_tell(head, tell, 2);
    insert_at_tell(head, tell, 8);
    insert_at_tell(head, tell, 9);
    insert_at_tell(head, tell, 9);
    insert_at_tell(head, tell, 9);
    insert_at_tell(head, tell, 9);

    print_link_list(head);

    return 0;
}