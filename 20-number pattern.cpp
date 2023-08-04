#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x;
    for(int i=1;i<=n;i++)
    {
        x=1;
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<i;k++)
        {
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
    return 0;
}