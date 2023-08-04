#include<bits/stdc++.h>
using namespace std;
bool issafe(int** arr,int x,int y,int n)
{
    if(x<n && y<n && arr[x][y]==1)
    {
        return true;
    }
    return false;
}

bool Rate_in_maze(int** arr, int x, int y, int n, int** solArr) {
    // Base case: Check if the rat has reached the destination (bottom-right corner)
    if (x == n - 1 && y == n - 1) {
        solArr[x][y] = 1;
        return true;
    }

    if (issafe(arr, x, y, n)) {
        solArr[x][y] = 1;

        // Check if moving right leads to a solution
        if (Rate_in_maze(arr, x + 1, y, n, solArr)) {
            return true;
        }

        // Check if moving down leads to a solution
        if (Rate_in_maze(arr, x, y + 1, n, solArr)) {
            return true;
        }

        // If neither right nor down leads to a solution, backtrack
        solArr[x][y] = 0;
        return false;
    }

    return false;
}

int main()
{
    int n;
    cin>>n;
    int** arr=new int*[n];
    for (int i = 0; i < n; i++) // dynamic allocation of 2d array
    {
        arr[i]=new int[n];
    }
    for (int i = 0; i < n; i++) // giving values
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    int** solArr=new int*[n];
    for (int i = 0; i < n; i++) // dynamic allocation of 2d array
    {
        solArr[i]=new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j]=0;
        }
        
    }
    if(Rate_in_maze(arr,0,0,n,solArr))
    {
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++)
            {
                cout<<solArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"Rate can not escape from the maze";
    }
    return 0;
}

/*
1 0 1 0 1
1 1 1 1 1
0 1 0 1 0
1 0 0 1 1
1 1 1 0 1 
*/