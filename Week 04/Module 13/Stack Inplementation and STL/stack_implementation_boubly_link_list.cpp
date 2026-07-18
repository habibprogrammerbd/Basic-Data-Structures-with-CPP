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
        this->next = NULL;
        this->value = value;
        this->prev = NULL;
    }
};

class myStack
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
        newnode->prev = tail;
        tail = newnode;
    }
    void pop() // ----O(1);
    {
        count--;
        Node *del = tail;
        tail = tail->prev;
        delete del;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }

        tail->next = NULL;
    }
    int size() // ----O(1);
    {
        return count;
    }
    int top() // ----O(1);
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
    myStack st;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (st.empty() != true)
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}