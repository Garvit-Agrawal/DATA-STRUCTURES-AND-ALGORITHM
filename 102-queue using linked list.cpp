#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
class Queue
{
    node* front;
    node* back;
    public:
    Queue()
    {
        front=NULL;
        back=NULL;
    }
    void enqueue(int data)
    {
        node* n=new node(data);
        if(front==NULL)
        {
            front=n;
            back=n;
            return;
        }
        back->next=n;
        back=n;
    }
    void dequeue()
    {
        if(front==NULL)
        {
            cout<<"No element in the queue"<<endl;
            return;
        }
        front=front->next;
    }
    void peek()
    {
        if(front==NULL)
        {
            cout<<"No element in the queue"<<endl;
            return;
        }
        cout<<front->data;
    }
    void empty()
    {
        if(front==NULL)
        {
            cout<<"No element in the queue"<<endl;
            return;
        }
    }
    void display()
    {
        node* ptr=front;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<"  ";
            ptr=ptr->next;
        }
        cout<<endl;
    }
};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
    return 0;
}