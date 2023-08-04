#include<bits/stdc++.h>
using namespace std;
int max(int a,int b, int c)
{
    int max=a;
    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }
    return max;
}
void check(int x,int y,int z)
{
    int t=y*y+z*z;
    if(t==x*x)
    {
        cout<<"It is pythogorus";
    }
    else{
        cout<<"Not pythogorus";
    }
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int max_number=max(a,b,c);
    if(a==max_number)
    {
        check(a,b,c);
    }
    if(b==max_number)
    {
        check(b,c,a);
    }
    if(c==max_number)
    {
        check(c,a,b);
    }
    return 0;
}