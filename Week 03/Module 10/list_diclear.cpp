#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50};

    list<int> l2(l);

    cout << l2.size();
    l2.resize(10, 200);
    l2.clear();

    for (int val : l2)
    {
        cout << val << " ";
    }

    return 0;
}