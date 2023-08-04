#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int abc(int n, int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int q=abc(n,2)+n;
    int subarray_sum[q];
    int t=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum=sum+arr[k];
            }
            subarray_sum[t]=sum;
            t++;
        }
    }
    int max=subarray_sum[0];
    for(int i=0;i<q;i++)
    {
        if(max<subarray_sum[i])
        {
            max=subarray_sum[i];
        }
    }
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
            if(sum==max)
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