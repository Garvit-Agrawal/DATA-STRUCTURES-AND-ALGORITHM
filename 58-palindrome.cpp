#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int check;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[n-i-1])
        {
            check=1;
        }
        if(arr[i]!=arr[n-i-1])
        {
            check=0;
            break;
        }
    }
    if(check==1)
    {
        cout<<"Word is palindrome";
    }
    else
    {
        cout<<"Word is not a palindrome!";
    }
    return 0;
}