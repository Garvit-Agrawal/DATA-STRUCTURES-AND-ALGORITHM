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
void insert_at_index(node* &head,int data,int index)
{
    node* ptr=new node(data);
    if(head==NULL)
    {
        head=ptr;
        return;
    }
    node* n1=head;
    int i=0;
    while(i<index-1)
    {
        n1=n1->next;
        i++;
    }
    ptr->next=n1->next;
    n1->next=ptr;
}
void searching(node* &head,int key)
{
    int i=0;
    node* ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->data==key)
        {
            cout<<"Element found at index  "<<i<<endl;
            return;
        }
        ptr=ptr->next;
        i++;
    }
}
void deletion_at_end(node* &head)
{
    node* ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    node* n=head;
    while(n->next!=ptr)
    {
        n=n->next;
    }
    n->next=NULL;
    free(ptr);
}
void deletion_at_beg(node* &head)
{
    node* ptr=head;
    head=head->next;
    free(ptr);
}
void deletion_at_index(node* &head,int index)
{
    node* p=head;
    node* q=head;
    int i = 0, j = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    while (j != index)
    {
        q = q->next;
        j++;
    }
    p->next = q->next;
    free(q);
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
    int n;
    node* head=NULL;
    do{
        cout<<"Press 1 for Insertion at End"<<endl;
        cout<<"Press 2 for Insertion at Begining"<<endl;
        cout<<"Press 3 for Insertion at Given Index"<<endl;
        cout<<"Press 4 for searching element in linked list"<<endl;
        cout<<"Press 5 for deleting node from End"<<endl;
        cout<<"Press 6 for deleting node from Begining"<<endl;
        cout<<"Press 7 for deleting node at a Given Index"<<endl;
        cout<<"Press 8 fo displaying linked list"<<endl;
        cout<<"Press 9 to exit"<<endl;
        cin>>n;
        switch(n)
        {
            case 1: 
            int data1;
            cout<<"Enter data: ";
            cin>>data1;
            insert_at_end(head,data1);
            break;

            case 2: 
            int data2;
            cout<<"Enter data: ";
            cin>>data2;
            insert_at_beg(head,data2);
            break;

            case 3: 
            int data3;
            cout<<"Enter data: ";
            cin>>data3;
            cout<<"Enter Index: ";
            int index;
            cin>>index;
            insert_at_index(head,data3,index);
            break;

            case 4:
            int data4;
            cout<<"Element data to be searched: ";
            cin>>data4;
            searching(head,data4);
            break;

            case 5:
            deletion_at_end(head);
            break;

            case 6:
            deletion_at_beg(head);
            break;

            case 7:
            cout<<"Enter Index";
            int index2;
            cin>>index2;
            deletion_at_index(head,index2);
            break;

            case 8:
            Traversing(head);
            break;

            case 9:
            break;

            default:
            cout<<"Invalid input";
        }
    }while(n!=9);

    return 0;
}