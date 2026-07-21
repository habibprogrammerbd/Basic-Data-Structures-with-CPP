#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;

    void push(int value)
    {
        v.push_back(value);
    }
    void pop()
    {
        v.pop_back();
    }
    int size()
    {
        return v.size();
    }
    int top()
    {
        return v.back();
    }
    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack st;

    st.push(100);
    st.push(200);
    cout << st.top() << endl;
    st.pop();
    st.pop();
    if (st.empty() == false)
    {
        cout << st.top() << endl;
    }
    
    
    return 0;
}