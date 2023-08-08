#include<bits/stdc++.h>
using namespace std;
class Stack
{
    int* arr;
    int top;
    int size;
    public:
    Stack(int size)
    {
        top=-1;
        this->size=size;
        arr=new int[size];
    }
    void push(int data)
    {
        if(top==size-1)
        {
            cout<<"Stack Overflow!!"<<endl;
            return;
        }
        top++;
        arr[top]=data;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow!!"<<endl;
            return;
        }
        top--;
    }
    void Top()
    {
         cout<<arr[top];
    }
    bool isFull()
    {
        if(top==size-1)
        {
            return true;
        }
        return false;
    }
    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        return false;
    }
    void display()
    {
        for (int i = 0; i <=   top; i++)
        {
            cout<<arr[i]<<endl;
        }
        
    }
};
int main()
{
    Stack st(10);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    // st.display();
    st.pop();
    // st.display();
    st.Top();
    return 0;
}