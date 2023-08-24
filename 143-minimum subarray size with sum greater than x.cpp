#include<bits/stdc++.h>
using namespace std;
int fun(vector<int> v,int x,int n)
{
    int sum=0,minlength=INT_MAX;
    int start=0,end=0;
    while(end<n)
    {
        while(sum<=x)
        {
            sum+=v[end];
            end++;
        }
        while(sum > x && start<=end)
        {
            if(end-start<minlength)
            {
                minlength=end-start;
            }
            sum-=v[start];
            start++;
        }
    }
    return minlength;
}
int main()
{
    vector<int> v={1,4,45,6,10,19};
    cout<<fun(v,51,6);
    return 0;
}