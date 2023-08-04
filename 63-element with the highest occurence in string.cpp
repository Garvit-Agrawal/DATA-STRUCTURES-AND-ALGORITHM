#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    char arr[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i]=0;
    }
    
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i]-'a']++;
    }
    int current=0,ans=0;
    for (int i = 0; i < 26; i++)
    {
        current=arr[i];
        ans=max(current,ans);
    }
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]==ans)
        {
            char x='a'+i;
            cout<<x;
            break;
        }
    }
    
    return 0;
}