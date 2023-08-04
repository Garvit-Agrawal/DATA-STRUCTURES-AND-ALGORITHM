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
void insert_at_end(node * &head, int data)
{
    node* ptr=new node(data);
    if(head==NULL)
    {
        head=ptr;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
}
void Traversing(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" -> ";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
int length(node* head)
{
    int l=0;
    node* temp=head;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}
void append_k_nodes(node* &head,int k)
{
    int i=0;
    node* new_tail=head;
    node* new_head=head;
    node* tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    while(i<(length(head)-k-1))
    {
        i++;
        new_tail=new_tail->next;
    }
    new_head=new_tail->next;
    new_tail->next=NULL;
    tail->next=head;
    head=new_head;
}
int main()
{
    node* head=NULL;
    insert_at_end(head,1);
    insert_at_end(head,2);
    insert_at_end(head,3);
    insert_at_end(head,4);
    insert_at_end(head,5);
    insert_at_end(head,6);
    append_k_nodes(head,3);
    Traversing(head);
    return 0;
}