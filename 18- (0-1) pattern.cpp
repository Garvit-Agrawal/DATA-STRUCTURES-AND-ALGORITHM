#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"0";
            }
            else{
                cout<<"1";
            }
        }
        cout<<endl;
    }
    return 0;
}