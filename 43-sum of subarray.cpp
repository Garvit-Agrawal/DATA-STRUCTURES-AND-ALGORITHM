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
    cout<<"Subarray with the corresponding sums are: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            cout<<"{ ";
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
                sum=sum+arr[k];
            }
            cout<<"}";
            cout<<endl;
            cout<<"Sum: "<<sum<<endl<<endl;
        }
    }
    return 0;
}