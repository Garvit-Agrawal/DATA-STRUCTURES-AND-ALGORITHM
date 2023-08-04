#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"  ";
        }
        for(int k=0;k<i;k++)
        {
            cout<<"*"<<" ";
        }
        for(int m=0;m<i-1;m++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"  ";
        }
        for(int k=0;k<i;k++)
        {
            cout<<"*"<<" ";
        }
        for(int m=0;m<i-1;m++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}