#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int n1 = n,n2=n;
    int digit=0;
    while(n2!=0)
    {
        n2=n2/10;
        digit++;
    }
    while (n >0)
    {
        int r = n % 10;
        sum += pow(r, digit);
        n = n / 10;
    }
    if (sum == n1)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not Armstrong";
    }

    return 0;
}
