#include<bits/stdc++.h>
using namespace std;
bool sorted(int n,int arr[])
{
    if(n==1)
    {
        return true;
    }
    bool restarray=sorted(n-1,arr+1);
    return (arr[0]<arr[1]  &&  restarray);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[n];
    }
    if(sorted(n,arr))
    {
        cout<<"Array is sorted";
    }
    else
    {
        cout<<"Array is not sorted";
    }
    return 0;
}