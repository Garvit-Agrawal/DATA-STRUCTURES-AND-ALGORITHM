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
void intersect(node* &head1, node* &head2,int pos)
{
    node* temp1=head1;
    node* temp2=head2;
    while(pos>1)
    {
        temp1=temp1->next;
        pos--;
    }
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
}
int check_intersection(node* &head1,node* &head2)
{
    node* temp1;
    node* temp2;
    int l1=length(head1);
    int l2=length(head2);
    int d;
    if(l1>l2)
    {
        d=l1-l2;
        temp1=head1;
        temp2=head2;
    }
    else
    {
        d=l2-l1;
        temp1=head2;
        temp2=head1;
    }

    while(d)
    {
        temp1=temp1->next;
        d--;
    }

    while(temp1->next!=NULL  &&  temp2->next!=NULL)
    {
        if(temp1==temp2)
        {
            return temp1->data;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return -1;
}
int main()
{
    node* head1=NULL;
    insert_at_end(head1,1);
    insert_at_end(head1,2);
    insert_at_end(head1,3);
    insert_at_end(head1,4);
    insert_at_end(head1,5);
    insert_at_end(head1,6);

    node* head2=NULL;
    insert_at_end(head2,9);
    insert_at_end(head2,10);

    intersect(head1,head2,4);

    Traversing(head1);
    Traversing(head2);

    cout<<check_intersection(head1,head2);
    return 0;
}