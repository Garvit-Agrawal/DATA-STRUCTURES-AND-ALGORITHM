#include<bits/stdc++.h>
using namespace std;
int fun(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    int x=n*fun(n,p-1);
    return x;
}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<fun(n,p);
    return 0;
}