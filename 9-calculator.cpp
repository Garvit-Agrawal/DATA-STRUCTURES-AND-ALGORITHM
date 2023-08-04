#include<bits/stdc++.h>
using namespace std;

int main()
{
    float n1,n2,n4;
    int n3;
    cin>>n1>>n2;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Divison"<<endl;
    cout<<"5. Modulo"<<endl;
    cout<<"Enter your choice:  ";
    cin>>n3;
    switch(n3)
    {
        case 1:
        n4=n1+n2;
        break;
        case 2:
        n4=n1-n2;
        break;
        case 3:
        n4=n1*n2;
        break;
        case 4:
        n4=n1/n2;
        break;
        case 5:
        n4=int(n1)%int(n2);
        break;
    }
    cout<<n4;
    return 0;
}