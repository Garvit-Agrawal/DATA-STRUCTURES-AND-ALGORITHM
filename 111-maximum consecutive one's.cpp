#include<bits/stdc++.h>
using namespace std;
int max_ones(vector<int> v,int k)
{
    int i=0,ans=0,zerocount=0;
    for(int j=0;j<v.size();j++)
    {
        if(v[j]==0)
        {
            zerocount++;
        }
        while(zerocount>k)
        {
            if(v[i]==0)
            {
                zerocount--;
            }
            i++;
        }
        ans=max(ans,j-i+1);
    }
    return ans;
}
int main()
{
    vector<int> v={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;
    cout<<max_ones(v,k);
    return 0;
}