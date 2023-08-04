#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,arr[100],i=0;
    cin>>n;
    while(n!=0)
    {
        int r=n%10;
        arr[i]=r;
        i++;
        n=n/10;
    }
    for(int j=0;j<i;j++)
    {
        cout<<arr[j];
    }
    return 0;
}