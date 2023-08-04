#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    arr[n]=-1;
    for(int i=1;i<n;i++)
    {
        int temp=i-1;
        for(int j=0;j<=temp;j++)
        {
            if(arr[j]>max)
            {
                max=arr[j];
            }
        }
        if(arr[i]>max && arr[i]>arr[i+1])
        {
            ans++;
        }
    }
    if(arr[0]>arr[1]){ ans++;}
    cout<<ans;
    return 0;
}