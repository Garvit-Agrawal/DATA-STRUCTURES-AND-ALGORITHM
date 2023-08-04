#include<bits/stdc++.h>
using namespace std;
int binary_search(int key,int arr[],int start,int end)
{
    while(start<=end)
    {
    int avg=(start+end)/2;
    if(key==arr[avg])
    {
        return avg;
    }
    if(key>arr[avg])
    {
       return binary_search(key,arr,avg+1,end);
    }
    if(key<arr[avg])
    {
       return binary_search(key,arr,start,avg-1);
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
    cout<<binary_search(key,arr,0,n-1);
    return 0;
    return 0;
}