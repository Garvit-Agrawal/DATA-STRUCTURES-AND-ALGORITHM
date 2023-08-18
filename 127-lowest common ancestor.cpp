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
node* LCA(node* root,int a,int b)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==a || root->data==b)
    {
        return root;
    }
    node* left=LCA(root->previous,a,b);
    node* right=LCA(root->next,a,b);
    if(left==NULL)
    {
        return right;
    }
    if(right==NULL)
    {
        return left;
    }

    return root;
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
    node* temp=LCA(root,0,6);
    cout<<temp->data;
    return 0;
}