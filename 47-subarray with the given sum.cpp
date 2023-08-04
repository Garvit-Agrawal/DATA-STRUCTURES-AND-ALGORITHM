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
    cout<<"Enter sum: "<<endl;
    int given_sum;
    cin>>given_sum;
    cout<<"Corresponding subarray is: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum=sum+arr[k];
            }
            if(sum==given_sum)
            {
                cout<<"From position "<<i+1<<" to "<<j+1<<" i.e;  ";
                cout<<"{ ";
                for(int k=i;k<=j;k++)
                {
                    cout<<arr[k]<<" ";
                }
                cout<<"}"<<endl;
            }
        }
    }
    return 0;
}