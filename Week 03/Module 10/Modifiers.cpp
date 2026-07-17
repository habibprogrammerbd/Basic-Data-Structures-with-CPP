#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 2, 5, 6, 2, 8, 2};
    // list<int> l2;
    // l2 = l;
    vector<int> v = {1, 2, 3, 4, 5, 6, 5, 6, 50};
    // l2.assign(l.begin(), l.end());

    // v[6] = 4111;
    // l.push_back(1000);
    // l.push_front(120);
    // l.pop_back();
    // l.pop_front();
    // int p = *next(l.begin(), 5);
    // cout << p;
    // l.insert(next(l.begin(),5),100);
    // l.insert(next(l.begin(),6),v.begin(),v.end());

    // l.erase(next(l.begin(),2),next(l.begin(),6));
    // replace(l.begin(), l.end(), 2, 100);
    auto it = find(l.begin(), l.end(), 8);
    if (it == l.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }

    // for (int val : l)
    // {
    //     cout << val << " ";
    // }

    return 0;
}