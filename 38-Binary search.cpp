#include<bits/stdc++.h>
using namespace std;
int binary_search(int n,int key,int arr[])
{
    int a=0;
    int b=n;
    while(a<=b)
    {
        int avg=(a+b)/2;
        if(key==arr[avg])
        {
            return avg;
        }
        if(key>arr[avg])
        {
            a=avg+1;
        }
        if(key<arr[avg])
        {
            b=avg-1;
        }
    }
    return -1;
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
    cout<<"Key:"<<endl;
    int key;
    cin>>key;
    cout<<binary_search(n,key,arr);
    return 0;
}