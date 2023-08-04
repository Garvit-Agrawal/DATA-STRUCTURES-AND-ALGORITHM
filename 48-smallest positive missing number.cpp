#include<bits/stdc++.h>
using namespace std;
int fun(int n, int arr[],int number)
{
    for(int i=0;i<n;i++)
    {
        if(number==arr[i])
        {
            return 1;
        }
    }
    return 0;
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
    int number=0;
    int x=1;
    while(x==1)
    {
        x=fun(n,arr,number);
        number++;
    }
    cout<<endl;
    cout<<number-1;
    return 0;
}