#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int z = n * (n - 1) / 2;

        vector<int> ans(z);
        int final = 0;
        for (int i = 0; i < n; i++)
        {
            final = final + a[i];
        }

        // int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                continue;
            }
            int filan_x = final;
            int c = filan_x - a[i];
            int o = a[i] / 2;
            ans[i] = c + o;
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << ans[i] << " ";
        // }
        // // cout << final;
        // cout << endl;

        int v = ans[0];

        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] > v)
            {
                v = ans[i];
            }
        }

        if (v > k)
        {
            cout << v - k << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
