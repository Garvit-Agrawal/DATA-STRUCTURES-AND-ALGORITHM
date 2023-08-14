#include<bits/stdc++.h>
using namespace std;
class Queue
{
    stack<int> st1;
    stack<int> st2;
    public:
    void enqueue(int data)
    {
        st1.push(data);
        cout<<data<<endl;
    }
    void dequeue()
    {
        if(st1.empty() && st2.empty())
        {
            cout<<"No element in the queue"<<endl;
            return;
        }
        if(st2.empty())
        {
            while(!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        cout<<st2.top()<<endl;
        st2.pop();
    }
    void empty()
    {
        if(st1.empty() && st2.empty())
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            cout<<"Queue is not empty"<<endl;
        }
    }
};
int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<endl;
    q.dequeue();
    return 0;
}