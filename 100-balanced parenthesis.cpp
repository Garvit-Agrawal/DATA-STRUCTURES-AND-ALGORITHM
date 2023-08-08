#include <bits/stdc++.h>
using namespace std;
void is_valid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
        {
            if (!st.empty() && ((s[i] == ')' && st.top() == '(') ||
                                (s[i] == ']' && st.top() == '[') ||
                                (s[i] == '}' && st.top() == '{')))
            {
                st.pop();
            }
            else
            {
                break;
            }
        }
    }
    if (st.empty())
    {
        cout << "Balanced parenthesis";
    }
    else
    {
        cout << "Not a balamced parenthesis!";
    }
}
int main()
{
    string s = "({[]})";
    is_valid(s);
    return 0;
}