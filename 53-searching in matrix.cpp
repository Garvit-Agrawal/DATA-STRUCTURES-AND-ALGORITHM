#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Enter element to find:"<<endl;
    int element;
    cin>>element; 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(element==arr[i][j])
            {
                cout<<"Element found at {"<<i<<","<<j<<"}";
                return 0;
            }
        }
        cout<<endl;
    }
    return 0;
}