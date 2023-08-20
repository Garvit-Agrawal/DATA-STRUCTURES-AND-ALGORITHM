#include<bits/stdc++.h>
using namespace std;
class node
{
    public: 
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
node* BST(int preorder[],int* preorderindx,int key,int max,int min,int n)
{
    if(*preorderindx>=n)
    {
        return NULL;
    }
    node* root=NULL;
    if(key>min && key<max)
    {
        root=new node(key);
        *preorderindx=*preorderindx+1;

        if(*preorderindx<n)
        {
            root->left=BST(preorder,preorderindx,preorder[*preorderindx],key,min,n);
        }
        if(*preorderindx<n)
        {
            root->right=BST(preorder,preorderindx,preorder[*preorderindx],max,key,n);
        }
    }
    return root;
}
void printpreorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    printpreorder(root->left);
    printpreorder(root->right);
}
int main()
{
    int preorder[]={10,2,1,13,11};
    int n=5;
    int preorderindx=0;
    node* root=BST(preorder,&preorderindx,preorder[0],INT_MAX,INT_MIN,n);
    printpreorder(root);
    return 0;
}