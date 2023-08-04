#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter values: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0],min=arr[0]; // max=INT_MIN   min=INT_MAX
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"Max in the array is: "<<max<<endl;
    cout<<"Min in the array is: "<<min<<endl;
    return 0;
}