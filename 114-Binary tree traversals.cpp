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
void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->previous);
    preorder(root->next);
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
void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->previous);
    postorder(root->next);
    cout<<root->data<<" ";
}

int main()
{
    node* root=new node(1);
    root->previous=new node(2);
    root->next=new node(3);
    root->previous->previous=new node(4);
    root->previous->next=new node(5);
    root->next->previous=new node(6);
    root->next->next=new node(7);
    preorder(root);
    cout<<endl;  
    inorder(root);
    cout<<endl; 
    postorder(root);
    cout<<endl;  
    return 0;
}