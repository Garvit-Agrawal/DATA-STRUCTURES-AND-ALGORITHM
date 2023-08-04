#include<bits/stdc++.h>
using namespace std;
void fibo(int n)
{
    int a1=0;
    int a2=1;
    cout<<a1<<a2;
    for(int i=0;i<n-2;i++)
    {
        int a3=a1+a2;
        cout<<a3;
        a1=a2;
        a2=a3;
    }
}
int main()
{
    int n;
    cin>>n;
    fibo(n);
    return 0;
}