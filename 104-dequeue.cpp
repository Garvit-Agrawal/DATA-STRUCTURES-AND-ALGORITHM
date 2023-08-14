#include<bits/stdc++.h>
using namespace std;
// It is like a mixture of stack and queue where we can insert from both ends as well as delete from both ends
int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_front(0);
    for(auto i:dq)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    dq.pop_back();
    dq.pop_front();
    for(auto i:dq)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}