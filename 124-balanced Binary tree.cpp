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
    return max(height(root->previous),height(root->next)) + 1;
}
bool balanced_tree(node* root)
{
    if(root==NULL)
    {
        return true;     // base
    }
    if(balanced_tree(root->previous)==false)
    {
        return false;
    }
    if(balanced_tree(root->next)==false)
    {
        return false;
    }
    if(abs(height(root->previous)-height(root->next))<=1)
    {
        return true;
    }
    else
    {
        false;
    }
}
// bool balanced_tree_optimized(node* root,int* height)
// {
//     if(root==NULL)
//     {
//         return true;
//     }
//     int lh=0,rh=0;
//     if(balanced_tree_optimized(root->previous,&lh)==false)
//     {
//         return false;
//     }
//     if(balanced_tree_optimized(root->next,&rh)==false)
//     {
//         return false;
//     }
//     *height=max(lh,rh)+1;
//     if(abs(lh-rh)<=1)
//     {
//         return true;
//     }
//     else
//     {
//         false;
//     }
// }
int main()
{
    node* root=new node(1);
    root->previous=new node(5);
    root->next=new node(8);
    root->previous->previous=new node(0);
    root->previous->next=new node(2);
    root->previous->previous->previous=new node(6);
    cout<<balanced_tree(root);
    // cout<<balanced_tree_optimized(root,0);
    return 0;
}