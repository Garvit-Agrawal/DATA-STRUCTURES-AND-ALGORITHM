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
void Right_view(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    cout<<root->data<<" ";
    while(!q.empty())
    {
        node* Node=q.front();
        q.pop();
        if(Node==NULL && !q.empty())
        {
            node* Node2=q.front();
            cout<<Node2->data<<" ";
        }
        if(Node!=NULL)
        {
            
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

int main()
{
    node* root=new node(1);
    root->previous=new node(5);
    root->next=new node(8);
    root->previous->previous=new node(0);
    root->previous->next=new node(2);
    root->next->previous=new node(6);
    root->next->next=new node(4);
    root->previous->previous->previous=new node(3);
    Right_view(root);
    return 0;
}