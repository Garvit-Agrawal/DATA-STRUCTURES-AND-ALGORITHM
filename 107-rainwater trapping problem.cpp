#include<bits/stdc++.h>
using namespace std;
vector<int> prev_max(vector<int> v)
{
    vector<int> temp(v.size());
    temp[0]=v[0];
    for(int i=1;i<v.size();i++)
    {
        temp[i]=max(temp[i-1],v[i]);
    }
    return temp;
}
vector<int> next_max(vector<int> v)
{
    vector<int> temp(v.size());
    temp[v.size()-1]=v[v.size()-1];
    for(int i=v.size()-2;i>=0;i--)
    {
        temp[i]=max(temp[i+1],v[i]);
    }
    return temp;
}
int rain_water(vector<int> v)
{
    vector<int> next=next_max(v);
    vector<int> prev=prev_max(v);
    int ans=0;
    for(int i=0;i<v.size();i++)
    {
        int x=min(next[i],prev[i])-v[i];
        ans=ans+x;
    }
    return ans;
}
int main()
{
    vector<int> v={3,1,2,4,0,1,3,2};
    cout<<rain_water(v);
    return 0;
}