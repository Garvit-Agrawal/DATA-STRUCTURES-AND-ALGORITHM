#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        k=1;
        for(int j=0;j<n-i;j++)
        {
            cout<<k;
            k++;
        }
        cout<<endl;
    }
    return 0;
}