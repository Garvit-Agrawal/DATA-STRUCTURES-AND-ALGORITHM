#include<bits/stdc++.h>
using namespace std;
void prefix_calculation(string s)
{
    stack<int> st;
    for (int i = s.length(); i >= 0; i--)
    {
        if(s[i]=='+')
        {
            int operator1=st.top();
            st.pop();
            int operator2=st.top();
            st.pop();
            int x=operator1+operator2;
            st.push(x);
        }
        else if(s[i]=='-')
        {
            int operator1=st.top();
            st.pop();
            int operator2=st.top();
            st.pop();
            int x=operator1-operator2;
            st.push(x);
        }
        else if(s[i]=='*')
        {
            int operator1=st.top();
            st.pop();
            int operator2=st.top();
            st.pop();
            int x=operator1*operator2;
            st.push(x);
        }
        else if(s[i]=='/')
        {
            int operator1=st.top();
            st.pop();
            int operator2=st.top();
            st.pop();
            int x=operator1/operator2;
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
    string s="-+7*45+20";
    prefix_calculation(s);
    return 0;
}