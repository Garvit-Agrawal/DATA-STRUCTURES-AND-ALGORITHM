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
int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return max(height(root->previous),height(root->next)) +1;
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
    cout<<height(root);
    return 0;
}