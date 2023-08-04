#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter size of 1st matrix:" << endl;
    cin >> n >> m;
    int arr1[n][m];
    cout << "Enter the values in the matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }


    int x, y;
    cout << "Enter size of 2nd matrix:" << endl;
    cin >> x >> y;
    int arr2[x][y];
    cout << "Enter the values in the matrix:" << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> arr2[i][j];
        }
    }


    int result[n][y];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<y;j++)
        {
            result[i][j]=0;
            for(int k=0;k<m;k++)
            {
                result[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<y;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}