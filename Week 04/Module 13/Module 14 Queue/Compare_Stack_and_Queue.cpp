#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    stack<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    bool flas = true;
    if (a != n)
    {
        cout << "NO\n";
        flas = false;
    }
    if (flas == true)
    {
        while (!s.empty())
        {
            if (s.top() != q.front())
            {
                cout << "NO\n";
                flas = false;
                break;
            }
            q.pop();
            s.pop();
        }
    }

    if (flas == true)
    {
        cout << "YES\n";
    }

    return 0;
}