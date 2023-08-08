#include<bits/stdc++.h>
using namespace std;
void reverse(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        st.push(s[i]);
    }
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    cout<<endl;
}
void reverse_sentence(string s)
{
    stack<string> st;
    for(int i=0;i<s.length();i++)
    {
        string word="";
        while(s[i]!=' ' && i<s.length())
        {
            word=word+s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main()
{
    string s="Garvit";
    string s1="Garvit is my name";
    reverse(s);
    reverse_sentence(s1);
    return 0;
}