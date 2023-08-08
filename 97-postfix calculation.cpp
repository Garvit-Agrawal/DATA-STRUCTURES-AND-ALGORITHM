#include<bits/stdc++.h>
using namespace std;
void postfix_calculation(string s)
{
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='+')
        {
            int operator1=st.top();
            st.pop();
            int operator2=st.top();
            st.pop();
            int x=operator2+operator1;
            st.push(x);
        }
        else if(s[i]=='-')
        {
            int operator1=st.top();
            st.pop();
            int operator2=st.top();
            st.pop();
            int x=operator2-operator1;
            st.push(x);
        }
        else if(s[i]=='*')
        {
            int operator1=st.top();
            st.pop();
            int operator2=st.top();
            st.pop();
            int x=operator2*operator1;
            st.push(x);
        }
        else if(s[i]=='/')
        {
            int operator1=st.top();
            st.pop();
            int operator2=st.top();
            st.pop();
            int x=operator2/operator1;
            st.push(x);
        }
        else
        {
            st.push(s[i]-'0');
        }
    }
    cout<<st.top();
}
int main()
{
    string s="46+2/5*7+";
    postfix_calculation(s);
    return 0;
}