#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {2, 6, 5, 3, 4, 1, 2, 5, 3, 1, 5, 4, 3, 1, 1, 2, 3, 5, 4, 1};
    // l.remove(5);
    // l.sort(greater<int>());
    l.sort();

    l.unique();
    for (int val : l)
    {
        cout << val << endl;
    }

    return 0;
}