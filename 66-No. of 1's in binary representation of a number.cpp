#include<bits/stdc++.h>
using namespace std;
void xyz(int n)
{
    int x=0;
    while(n!=0)
    {
        n= (n &n-1);
        x++;
    }
    cout<<x;
}
int main()
{
    int n;
    cin>>n;
    xyz(n);
   return 0;
}