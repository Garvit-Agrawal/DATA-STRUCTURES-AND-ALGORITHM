#include<bits/stdc++.h>
using namespace std;
class Stack
{
    int n;
    queue<int> q1;
    queue<int> q2;
    public:
    Stack()
    {
        n=0;
    }
    void push(int data)
    {
        q2.push(data);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
        n++;
    }
    void pop()
    {
        q1.pop();
        n--;
    }
    void size()
    {
        cout<<n;
    }
    void top()
    {
        cout<<q1.front();
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.top();
    return 0;
}