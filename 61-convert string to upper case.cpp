#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="abcABCdefDGF";
    // transform(s.begin(),s.end(),s.begin(),::tolower);
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }
    
    cout<<s;
    return 0;
}