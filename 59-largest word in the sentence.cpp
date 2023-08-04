#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int current=0,ans=0,i=0;
    while(1){
        if( arr[i] ==' '|| arr[i]=='\0')
        {
            if(current>ans)
            {
                ans=current;
            }
            current=0;
        }
        else{
        current++;}
        if(arr[i]=='\0')
        {
            break;
        }
        i++;
    }

    int start=0,end=0;
    i=0;
    while(1)
    {
        if(arr[i]==' '|| arr[i]=='\0')
        {
            start=i+1;
            end=start;
        }
        end++;
        if(end-start==ans-1)
        {
            for (int x = start; x <=end+1; x++)
            {
                cout<<arr[x];
            }
            break;
        }
        i++;
    }
    return 0;
}