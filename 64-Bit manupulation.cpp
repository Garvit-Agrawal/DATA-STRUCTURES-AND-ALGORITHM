#include<bits/stdc++.h>
using namespace std;
void get_bit(int n,int pos)
{
    int x=(1 << pos);
    if((x & n) == 0)
    {
        cout<<"0";
    }
    else
    {
        cout<<"1";
    }
}
void set_bit(int n,int pos)
{
    int x=(1<<pos);
    cout<< (x | n);
}
void clear_bit(int n,int pos)
{
    int x=(1<<pos);
    cout<<(~x & n);
}
int main()
{
    int n,pos;
    cin>>n>>pos;
    // get_bit(n,pos);
    // set_bit(n,pos);
    clear_bit(n,pos);
    return 0;
}