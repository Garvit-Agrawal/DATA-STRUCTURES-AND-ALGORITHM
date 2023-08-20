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
        right=NULL;
        left=NULL;
    }
};
node* BST(node* root,int val)
{
    if(root==NULL)
    {
        return new node(val);
    }
    if(val<root->data)
    {
        root->left=BST(root->left,val);
    }
    else
    {
        root->right=BST(root->right,val);
    }

    return root;
}
node* search(node* root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }
    if(root->data>key)
    {
        return search(root->left,key);
    }
    return search(root->right,key);
}
int main()
{
    node* root=NULL;
    root=BST(root,5);
    BST(root,1);
    BST(root,3);
    BST(root,4);
    BST(root,2);
    BST(root,7);
    if(search(root,9)==NULL)
    {
        cout<<"Not Found";
    }
    else
    {
        cout<<"Found";
    }
    return 0;
}