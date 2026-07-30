#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int count = 0;
        for (int i = 1; count != n; i++)
        {
            if (i % 10 == 3)
            {
                continue;
            }
            else if (i % 3 == 0)
            {
                continue;
            }
            else
            {
                count++;
            }

            if (n == count)
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}