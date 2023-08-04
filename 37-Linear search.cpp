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
    cout<<"key:"<<endl;
    int key;
    cin>>key;
    int i;
    for( i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            cout<<"Element found at index: "<<i;
            break;
        }
    }
    if(i==n)
    {
        cout<<"Element not found";
    }
    return 0;
}