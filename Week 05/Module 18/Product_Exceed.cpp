#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, x;
    cin >> a >> b >> x;

    int big = 0;
    int smal = 0;

    if (a > b)
        big = a;
    else
        big = b;
    if (a < b)
        smal = a;
    else
        smal = b;

    int ans = smal * big;
    // int count = 0;
    int w = 0;
    for (int i = 0; ans != x; i++)
    {
        w = x - ans;
        // if (w <= smal)
        //     smal++;
        // else
        //     big++;
        // ans = smal * big;
        // count++;
        // cout << w;
    }
    cout << w;

    return 0;
}