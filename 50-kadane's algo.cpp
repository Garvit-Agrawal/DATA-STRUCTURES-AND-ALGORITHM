#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int current_sum[n];
    if(arr[0]>=0)
    {
        current_sum[0]=arr[0];
    }
    else{
        current_sum[0]=0;
    }
    for(int i=1;i<n;i++)
    {
        current_sum[i]=current_sum[i-1]+arr[i];
        if(current_sum[i]<0)
        {
            current_sum[i]=0;
        }
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(current_sum[i]>max)
        {
            max=current_sum[i];
        }
    }
    cout<<max;
    return 0;
}