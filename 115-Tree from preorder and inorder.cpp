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
int search(int inorder[],int start,int end,int current)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==current)
        {
            return i;
        }
    }
}
node* built_tree(int preorder[],int inorder[],int start,int end)
{
    if(start>end)
    {
        return NULL;
    }
    static int indx=0;
    int current=preorder[indx];
    indx++;
    node* root=new node(current);
    if(start==end)
    {
        return root;
    }
    int pos=search(inorder,start,end,current);
    root->previous=built_tree(preorder,inorder,start,pos-1);
    root->next=built_tree(preorder,inorder,pos+1,end);

    return root;
}
void inorder_print(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder_print(root->previous);
    cout<<root->data<<" ";
    inorder_print(root->next);
}
int main()
{
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};

    node* root=built_tree(preorder,inorder,0,4);
    inorder_print(root);
    return 0;
}