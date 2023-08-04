#include<bits/stdc++.h>
using namespace std;
void pow_of_2(int n)
{
    if((n & n-1)==0)
    {
        cout<<"Yes it is power of 2";
    }
    else{
        cout<<"It is not a power of 2";
    }
}
int main()
{
    int n;
    cin>>n;
    pow_of_2(n);
    return 0;
}