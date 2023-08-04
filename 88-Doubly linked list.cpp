#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node* previous;
    node(int val)
    {
        data=val;
        next=NULL;
        previous=NULL;
    }
};
void insert_at_beg(node* &head,int data)
{
    node* ptr=new node(data);
    if(head==NULL)
    {
        head=ptr;
        return;
    }
    ptr->next=head;
    head=ptr;
}
void insert_at_end(node* &head,int data)
{
    node* ptr=new node(data);
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
}
void insert_at_index(node* &head,int data,int index)
{
    node* ptr=new node(data);
    node* temp=head;
    int count=0;
    while(count<index-1)
    {
        temp=temp->next;
    }
    temp->next->previous=ptr;
    ptr->next=temp->next;
    ptr->previous=temp;
    temp->next=ptr;
    
}
int main()
{
    
    return 0;
}