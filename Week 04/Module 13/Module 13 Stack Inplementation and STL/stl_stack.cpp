#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }

    while (s.empty() != true)
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}