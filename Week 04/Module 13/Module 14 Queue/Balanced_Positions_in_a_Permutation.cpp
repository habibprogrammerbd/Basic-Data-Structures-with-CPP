#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        queue<int> c;
        int a;
        cin >> a;
        vector<int> v(a);
        c.front

        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
        }

        int ans = 0;
        for (int i = 0; i < a; i++)
        {
            int right = 0;
            int left = 0;

            for (int j = 0; j < i; j++)
            {
                if (v[j] < v[i])
                {
                    left++;
                }
                
            }

            for (int j = i + 1; j < a; j++)
            {
                if (v[j] > v[i])
                {
                    right++;
                }
            }

            if (left == right)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}