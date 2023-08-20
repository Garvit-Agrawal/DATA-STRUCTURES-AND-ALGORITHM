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
void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
node* inordersucc(node* root)
{
    node* temp=root;
    while(temp!=NULL &&temp->left!=NULL)
    {
        temp=temp->left;
    }
    return  temp;
}
node* delete_in_bst(node* root,int key)
{
    if(key<root->data)
    {
        root->left=delete_in_bst(root->left,key);
    }
    else if(key>root->data)
    {
        root->right=delete_in_bst(root->right,key);
    }
    else
    {
        if(root->left==NULL)
        {
            node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            node* temp=root->left;
            free(root);
            return temp;
        }
        node* temp=inordersucc(root->right);
        root->data=temp->data;
        root->right=delete_in_bst(root->right,temp->data);
    }
    return root;
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
    inorder(root);
    delete_in_bst(root,3);
    cout<<endl;
    inorder(root);
    return 0;
}