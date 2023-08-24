#include<bits/stdc++.h>
using namespace std;
bool isfesible(vector<int> v,int mid,int k,int n)
{
    int pos=v[0];
    int element=1;
    for(int i=1;i<n;i++)
    {
        if(v[i]-pos>=mid)
        {
            pos=v[i];
            element++;
        }
        if(element==k)
        {
            return true;
        }
    }
    return false;
}
int fun(vector<int> v,int k)
{
    sort(v.begin(),v.end());
    int result=-1;
    int start=v[0],end=v[v.size()-1];
    while(start<end)
    {
        int mid=(start+end)/2;
        if(isfesible(v,mid,k,v.size()))
        {
            result=max(result,mid);
            start=mid+1;
        }
        else
        {
            end=mid;
        }
    }
    return result;
}
int main()
{
    vector<int> v={1,2,8,4,9};
    cout<<fun(v,3);
    return 0;
}