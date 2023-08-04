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
    int ARR[n];
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>max)
            {
                max=arr[j];
            }
        }
        ARR[i]=max;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ARR[i]<<" ";
    }
    return 0;
}