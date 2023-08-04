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
node* merge(node* &head1,node* &head2)
{
    node* dummy_node=new node(-1);
    node* ptr1=head1;
    node* ptr2=head2;
    node* ptr3=dummy_node;

    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->data < ptr2->data)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else
        {
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }

    while(ptr1!=NULL)
    {
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }
    while(ptr2!=NULL)
    {
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }

    return dummy_node->next;
}
int main()
{
    node* head1=NULL;
    insert_at_end(head1,1);
    insert_at_end(head1,3);
    insert_at_end(head1,5);
    insert_at_end(head1,7);
    insert_at_end(head1,9);
    node* head2=NULL;
    insert_at_end(head2,2);
    insert_at_end(head2,4);
    insert_at_end(head2,6);
    Traversing(head1);
    Traversing(head2);
    node* head3=merge(head1,head2);
    Traversing(head3);
    return 0;
}