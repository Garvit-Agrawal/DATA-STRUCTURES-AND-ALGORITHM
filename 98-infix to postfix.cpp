#include <bits/stdc++.h>
using namespace std;
int precedence(char c)
{
    if (c == '/' || c == '*')
        return 2;
    if (c == '+' || c == '-')
        return 1;
    // return 0;
}
void infix_postfix(string s)
{
    stack<char> st;
    string s1="";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                s1 += st.top();
                st.pop();
            }
            st.pop();
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            while ( !st.empty() &&  st.top() != '(' && precedence(st.top()) > precedence(s[i]))
            // while (st.top() != '('  && !st.empty()   && precedence(st.top()) > precedence(s[i])) not correct 
            {
                s1 += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        else
        {
            s1 += s[i];
        }
    }
    while (!st.empty())
    {
        s1 += st.top();
        st.pop();
    }
    cout << s1;
}
int main()
{
    string s = "(a-b/c)*(a/k-l)";
    infix_postfix(s);
    return 0;
}