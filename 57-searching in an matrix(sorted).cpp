#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int target;
    cout<<"Target?";
    cin>>target;
    int r=0,c=m-1;
    while(r<n && c>=0)
    {
        if(arr[r][c]==target)
        {
            cout<<"Found!";
            return 0;
        }
        if(arr[r][c]<target)
        {
            r++;
        }
        if(arr[r][c]>target)
        {
            c--;
        }
    }
    cout<<"Not found!!";
    return 0;
}