#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int x=n+sum(n-1);
    return x;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}