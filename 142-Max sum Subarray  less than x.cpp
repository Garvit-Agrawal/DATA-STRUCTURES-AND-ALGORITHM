#include<bits/stdc++.h>
using namespace std;
int sum(vector<int> v,int i,int k)
{
    int ans=0;
    for(int a=i;a<i+k;a++)
    {
        ans=ans+v[a];
    }
    return ans;
}
int subarray_sum(vector<int> v,int k,int x)
{
    int n=v.size();
    int i=0;
    int ans=INT_MIN;
    while(n-i>=k)
    {
        int z=sum(v,i,k);
        if(z>ans && z<x)
        {
            ans=z;
        }
        i++;
    }
    return ans;
}
int main()
{
    vector<int> v={7,5,4,6,8,9};
    cout<<subarray_sum(v,3,20);
    return 0;
}