#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,i=0,sum=0;
    cin>>n;
    while(n!=0)
    {
        int r=n%10;
        sum=sum+(r*pow(8,i));
        i++;
        n=n/10;
    }
    cout<<sum;
    return 0;
}