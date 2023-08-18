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
int find_distance(node* root,int n1,int distance)
{
    if(root==NULL)
    {
        return -1;
    }
    if(root->data==n1)
    {
        return distance;
    }
    int left=find_distance(root->previous,n1,distance+1);
    int right=find_distance(root->next,n1,distance+1);
    if(left==-1)
    {
        return right;
    }
    else if(right==-1)
    {
        return left;
    }
}
int distance(node* root,int n1,int n2)
{
    node* lca=LCA(root,n1,n2);
    int left=find_distance(lca,n1,0);
    int right=find_distance(lca,n2,0);

    return left+right;
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
    cout<<distance(root,0,8);
    return 0;
}