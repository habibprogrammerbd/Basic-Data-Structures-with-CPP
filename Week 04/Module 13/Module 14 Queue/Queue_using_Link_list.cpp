#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->next = NULL;
        this->value = value;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int count = 0;
    void push(int value) // ----O(1);
    {
        count++;
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

    void pop() // ----O(1);
    {
        count--;
        Node * del = head;
        head = head->next;
        delete del;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int size() // ----O(1);
    {
        return count;
    }
    int front()
    {
        return head->value;
    }
    int back()
    {
        return tail->value;
    }
   
    bool empty() // ----O(1);
    {
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
   

    return 0;
}