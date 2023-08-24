#include<bits/stdc++.h>
using namespace std;
int peakelement(vector<int> v,int n,int low,int high)
{
    int mid=(low+high)/2;
    if((mid==0 || v[mid-1]<=v[mid] && (mid==n-1 || v[mid+1]>=v[mid])))
    {
        return mid;
    }
    else if(mid>0 && v[mid-1]>v[mid])
    {
        return peakelement(v,n,low,mid-1);
    }
    else
    {
        return peakelement(v,n,mid+1,high);
    }
}
int main()
{
    vector<int> v={0,6,8,5,7,9};
    cout<<peakelement(v,6,0,5);
    return 0;
}