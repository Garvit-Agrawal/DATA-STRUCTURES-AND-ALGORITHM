#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int x=max(a,b);
    if(a==x)
    {
        int t=1;
        while(t!=0)
        {
            t=a%b;
            a=b;
            b=t;
        }
        cout<<a;
    }
    if(b==x)
    {
        int t=1;
        while(t!=0)
        {
            t=b%a;
            b=a;
            a=t;
        }
        cout<<b;
    }
    return 0;
}