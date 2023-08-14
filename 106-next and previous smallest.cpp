#include<bits/stdc++.h>
using namespace std;
vector<int> next_small(vector<int> v)
{
    vector<int> ans(v.size());
    stack<int> st;
    int n=v.size();
    st.push(-1);
    for(int i=n-1;i>=0;i--)
    {
        while(st.top()!=-1 && v[st.top()]>=v[i])
        {
            st.pop();
        }
        ans[i]=st.top();
        st.push(i);
    }
    return ans;
}
vector<int> prev_small(vector<int> v)
{
    vector<int> ans(v.size());
    stack<int> st;
    int n=v.size();
    st.push(-1);
    for(int i=0;i<n;i++)
    {
        while(st.top()!=-1 && v[st.top()]>=v[i])
        {
            st.pop();
        }
        ans[i]=st.top();
        st.push(i);
    }
    return ans;
}
int main()
{
    vector<int> v={2,1,5,6,2,3};
    vector<int> new_v=next_small(v);
    for(int i=0;i<new_v.size();i++)
    {
        cout<<new_v[i]<<" ";
    }
    cout<<endl;
    vector<int> prev_smallest=prev_small(v);
    for(int i=0;i<prev_smallest.size();i++)
    {
        cout<<prev_smallest[i]<<"  ";
    }
    return 0;
}