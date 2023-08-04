#include<bits/stdc++.h>
using namespace std;
int binary_to_decimal(long int n)
{
    int sum=0,i=0;
    while(n!=0)
    {
        int r=n%2;
        sum=sum+(r*pow(2,i));
        i++;
        n=n/10;
    }
    return sum;
}
void decimal_to_binary(int n)
{
    int arr[n],i=0;
    while(n!=0)
    {
        int r=n%2;
        arr[i]=r;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<arr[j];
    }
}
int main()
{
    long int a,b;
    cin>>a>>b;
    int t=binary_to_decimal(a)+binary_to_decimal(b);
    decimal_to_binary(t);
    return 0;
}