#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<char> Set;
    string s="abcabcbb";
    int Max=INT_MIN;
    int start=0,end=0;
    while(end<s.length())
    {
        auto it=Set.find(s[end]);
        if(it==Set.end())
        {
            Max=max(Max,end-start+1);
            Set.insert(s[end]);
            end++;
        }
        else
        {
            Set.erase(s[start]);
            start++;
        }
    }
    cout<<Max;
    return 0;
}