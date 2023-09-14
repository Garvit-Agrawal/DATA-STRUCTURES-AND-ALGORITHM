#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int a;
    cin>>a;
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=n-1;i>=0;i--)
    {
        ans=ans+a/v[i];
        a=a-a/v[i]*v[i];
    }
    cout<<ans;
    return 0;
}