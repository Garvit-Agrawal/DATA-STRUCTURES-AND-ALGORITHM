#include<bits/stdc++.h>
using namespace std;
bool perfect_number(int n)
{
    vector<int> v;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
        }
    }
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        sum=sum+v[i];
    }
    if(sum==n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int sum(vector<int> v,int i,int k)
{
    int ans=0;
    for(int a=i;a<i+k;a++)
    {
        ans=ans+v[a];
    }
    return ans;
}
int fun(vector<int> v,int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(perfect_number(v[i]))
        {
            v[i]=1;
        }
        else
        {
            v[i]=0;
        }
    }
    int i=0;
    int ans=INT_MIN;
    while(n-i>=k)
    {
        int x=sum(v,i,k);
        if(x>ans)
        {
            ans=x;
        }
        i++;
    }
    return ans;
}
int main()
{
    vector<int> v={28,2,3,6,496,99,8128,24};
    cout<<fun(v,8,4);
    return 0;
}