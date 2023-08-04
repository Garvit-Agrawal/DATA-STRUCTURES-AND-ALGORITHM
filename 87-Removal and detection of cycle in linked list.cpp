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
bool detect_cycle(node* head)
{
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return true;
        }
    }
    return false;
}
void make_cycle(node* &head,int pos)
{
    node* temp=head;
    node* start_node;
    int count=1;

    while(temp->next!=NULL)
    {
        if(pos==count)
        {
            start_node=temp;
        }
        temp=temp->next;
        count++;
    }

    temp->next=start_node;
}
void remove_cycle(node* &head)
{
    node* slow=head;
    node* fast=head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (fast!=slow);
    fast=head;
    while(fast->next!=slow->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
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
    make_cycle(head,3);
    // cout<<detect_cycle(head);
    remove_cycle(head);
    Traversing(head);
    return 0;
}