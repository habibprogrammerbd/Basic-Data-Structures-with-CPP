#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        bool c = false;
        int idx = 0;
        for (int i = x, j = z;; i = i + y, j = j + z)
        {
            if (i >= 100 || j >= 100)
            {
                break;
            }
            if (i >= j)
            {
                idx++;
                c = true;
                break;
            }
            idx++;
        }
        if (c == true)
        {
            cout << idx << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}