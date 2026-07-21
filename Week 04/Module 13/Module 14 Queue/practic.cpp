#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    stack<int> s;
    queue<int> q2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    for (int i = 0; i < n; i++)
    {
        s.push(q.front());
        q.pop();
    }

    for (int i = 0; i < n; i++)
    {
        q2.push(s.top());
        s.pop();
    }

    while (!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }

    return 0;
}