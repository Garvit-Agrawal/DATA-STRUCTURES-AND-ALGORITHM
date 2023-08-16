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
void level_traversal(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* Node=q.front();
        q.pop();
        if(Node!=NULL)
        {
            cout<<Node->data<<" ";
            if(Node->previous!=NULL)
            {
                q.push(Node->previous);
            }
            if(Node->next!=NULL)
            {
                q.push(Node->next);
            }
        }
        else if(!q.empty())
        {
            q.push(NULL);
        }
    }
}
int Sum_at_kth_level(node* root,int k)
{
    if(root==NULL)
    {
        return -1;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int level=0;
    int sum=0;
    while(!q.empty())
    {
        node* Node=q.front();
        q.pop();
        if(Node!=NULL)
        {
            if(k==level)
            {
                sum=sum+Node->data;
            }
            if(Node->previous!=NULL)
            {
                q.push(Node->previous);
            }
            if(Node->next!=NULL)
            {
                q.push(Node->next);
            }
        }
        else if(!q.empty())
        {
            level++;
            q.push(NULL);
        }
    }
    return sum;
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
    level_traversal(root);
    cout<<endl;
    cout<<Sum_at_kth_level(root,2);
    return 0;
}