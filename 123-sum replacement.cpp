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
void sum_replacement(node* &root)
{
    if(root==NULL)
    {
        return;
    }
    sum_replacement(root->previous);
    sum_replacement(root->next);
    if(root->next!=NULL)
    {
        root->data+=root->next->data;
    }
    if(root->previous!=NULL)
    {
        root->data+=root->previous->data;
    }
}
void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->previous);
    cout<<root->data<<" ";
    inorder(root->next);
}
int main()
{
    node* root=new node(1);
    root->previous=new node(5);
    root->next=new node(8);
    root->previous->previous=new node(0);
    root->previous->next=new node(2);
    root->next->previous=new node(6);
    root->next->next=new node(4);
    sum_replacement(root);
    inorder(root);
    return 0;
}