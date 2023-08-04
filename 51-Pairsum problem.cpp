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
    int sum;
    cout<<"Enter sum: "<<endl;
    cin>>sum;
    cout<<"Corresponding pairs are: "<<endl;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(sum==i+j)
            {
                cout<<"indices are; "<<i<<" and "<<j<<endl;
            }
        }
    }
    return 0;
}