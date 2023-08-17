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
int Sum_nodes(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return Sum_nodes(root->previous) +Sum_nodes(root->next) +root->data;
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
    cout<<Sum_nodes(root);
    return 0;
}