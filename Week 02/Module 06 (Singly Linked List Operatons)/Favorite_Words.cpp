#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    bool ans = false;
    for (int i = 0; i < n.size(); i++)
    {
        if (n[0] == 'c' && n[3] == 'f')
        {
            ans = true;
        }
        else if (n[0] == 'c')
        {
            ans = true;
        }
        else if (n[3] == 'f')
        {
            ans = true;
        }
        
        
        
    }
    if (ans == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    
    
    return 0;
}