#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = 0;
        for (int i = a; i > b; i--)
        {
            ans = ans + i;
            // cout << i << " " << endl;
        }
        cout << ans << endl;
    }

    return 0;
}