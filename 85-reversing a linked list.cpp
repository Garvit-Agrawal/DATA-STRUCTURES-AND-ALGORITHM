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
void reverse(node* &head)
{
    node* previous=NULL;
    node* current=head;
    node* next;
    while(current!=NULL)
    {
        next=current->next;
        current->next=previous;

        previous=current;
        current=next;
    }
    head=previous;
}
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
int main()
{
    node* head=NULL;
    insert_at_end(head,1);
    insert_at_end(head,2);
    insert_at_end(head,3);
    insert_at_end(head,4);
    cout<<"Before"<<endl;
    Traversing(head);
    cout<<"After"<<endl;
    reverse(head);
    Traversing(head);
    return 0;
}