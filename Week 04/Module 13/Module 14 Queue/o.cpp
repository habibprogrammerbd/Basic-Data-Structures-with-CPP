#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
    stack<int> s;
    stack<int> s2;
    int val;
    MyQueue()
    {
    }

    void push(int x)
    {
        if (s.empty() == true)
        {
            val = x;
            s.push(x);
        }
    }

    int pop()
    {
        int value;
        while (!s.empty())
        {
            s2.push(s.top());
            s.pop();
        }
        int val = s2.top();
        s2.pop();
        while (!s2.empty())
        {
           s.push(s2.top());
           s2.pop();
        }
        return value;
    }

    int peek()
    {
        return val;
    }

    bool empty()
    {
        return s.empty();
    }
};

int main()
{
    MyQueue l();

    return 0;
}