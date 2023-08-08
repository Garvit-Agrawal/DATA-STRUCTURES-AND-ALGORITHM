#include<bits/stdc++.h>
using namespace std;
class Queue
{
    int front;
    int back;
    int* arr;
    int size;
    public:
    Queue(int size)
    {
        arr=new int[size];
        front=-1;
        back=-1;
        this->size=size;
    }
    void enqueue(int data)
    {
        if(back==size-1)
        {
            cout<<"Queue Overflow"<<endl;
            return;
        }
        back++;
        arr[back]=data;
        if(front==-1)
        {
            front++;
        }
    }
    void dequeue()
    {
        if(front==-1 || front>back)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        front++;
    }
    void peak()
    {
        if(front==-1 || front>back)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<arr[front];
    }
    void empty()
    {
        if(front==-1 || front>back)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        else
        {
            cout<<"Queue is not empty"<<endl;
        }
    }
    void display()
    {
        for(int i=front;i<=back;i++)
        {
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
    }
};
int main()
{
    Queue q(10);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
    return 0;
}