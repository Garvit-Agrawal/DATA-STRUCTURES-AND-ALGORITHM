#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int arr[n],i=0;
    while(n!=0)
    {
        int r=n%8;
        arr[i]=r;
        n=n/8;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<arr[j];
    }
    return 0;
}