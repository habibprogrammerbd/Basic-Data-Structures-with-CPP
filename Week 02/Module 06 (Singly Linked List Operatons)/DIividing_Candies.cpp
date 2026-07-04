#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> candy(n);
        for (int i = 0; i < n; i++)
        {
            cin >> candy[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (candy[i] % x == 0)
            {
                if (ans < candy[i])
                {
                    ans = candy[i];
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}