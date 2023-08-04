#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insert_at_beg(node* &head,int data)
{
    node* ptr=new node(data);
    if(head==NULL)
    {
        head=ptr;
        ptr->next=ptr;
        return ;
    }
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->next=head;
    head=ptr;
}
void insert_at_end(node* &head,int data)
{
    node* ptr=new node(data);
    if(head==NULL)
    {
        head = ptr;
        ptr->next = head;
        return;
    }
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->next=head;
}
void traversing(node* &head)
{
    node* temp=head;
    do
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    } while (temp!=head);
    cout<<"NULL"<<endl;
}
int main()
{
    node* head=NULL;
    insert_at_end(head,1);
    insert_at_end(head,2);
    insert_at_end(head,3);
    insert_at_end(head,4);
    insert_at_beg(head,5);
    traversing(head);
    return 0;
}