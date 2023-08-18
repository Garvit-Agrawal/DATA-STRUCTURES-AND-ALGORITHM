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
        left=NULL;
        right=NULL;
    }
};
int maxpathsumutil(node* root,int &ans)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=maxpathsumutil(root->left,ans);
    int right=maxpathsumutil(root->right,ans);
    int nodesum=max(max(root->data,root->data + left+ right) ,max(root->data+left,root->data+right));
    ans=max(ans,nodesum);
    int ret=max(max(root->data,root->data+left),root->data+right);
    return ret;
}
int max_path(node* root)
{
    int ans=INT_MIN;
    maxpathsumutil(root,ans);
    return ans;
}
int main()
{
    node* root=new node(1);
    root->left=new node(-12);
    root->right=new node(3);
    root->left->left=new node(4);
    root->right->left=new node(5);
    root->right->right=new node(-6);
    cout<<max_path(root);
    return 0;
}