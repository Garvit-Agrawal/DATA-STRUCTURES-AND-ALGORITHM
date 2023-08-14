#include<bits/stdc++.h>
using namespace std;
void redundant(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' or s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/')
        {
            st.push(s[i]);
        }
        if(s[i]==')')
        {
            if(st.empty() || st.top()=='(')
            {
                cout<<"Redundant";
                return;
            }
            else
            {
                while(st.top()!='(')
                {
                    st.pop();
                }
                st.pop();
            }
        }
    }
    if(st.empty())
    {
        cout<<"Non Redundant";
    }
}
int main()
{
    string s="(a+(b+c)+(c+d)+(d))";
    redundant(s);
    return 0;
}