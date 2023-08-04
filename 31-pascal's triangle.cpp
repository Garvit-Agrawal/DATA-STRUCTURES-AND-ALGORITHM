#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int abc(int n, int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"  ";
        }
        for(int k=0;k<=i;k++)
        {
            cout<<abc(i,k)<<"  ";
        }
        cout<<endl;
    }
    return 0;
}