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
node* reverse_k_nodes(node* &head,int k)
{
    node* previous=NULL;
    node* current=head;
    node* next;
    int count=0;
    while(current!=NULL && count<k)
    {
        next=current->next;
        current->next=previous;
        previous=current;
        current=next;
        count++;
    }
    if(next!=NULL)
    {
        head->next=reverse_k_nodes(next,k);
    }
    return previous;
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
    head=reverse_k_nodes(head,2);
    Traversing(head);
    return 0;
}