#include<bits/stdc++.h>
using namespace std;
// int get_maxarea(vector<int> a)
// {
//     int ans=0;
//     int n=a.size();
//     for(int i=0;i<n;i++)
//     {
//         int min_height=a[i];
//         for(int j=i;j<n;j++)
//         {
//             min_height=min(min_height,a[j]);
//             int length=j-i+1;
//             ans=max(ans,length*min_height);
//         }
//     }
//     return ans;
// }
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
int get_maxarea(vector<int> v)
{
    vector<int> next=next_small(v);
    vector<int> prev=prev_small(v);
    int ans=INT_MIN;
    for(int i=0;i<v.size();i++)
    {
        if(next[i]==-1)
        {
            next[i]=v.size();
        }
        int l=v[i];
        int b=next[i]-prev[i]-1;
        ans=max(ans,l*b);
    }
    return ans;
}
int main()
{
    vector<int> a={2,1,5,6,2,3};
    cout<<get_maxarea(a);
    return 0;
}