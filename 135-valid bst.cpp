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

bool isbst(node* root, int minVal, int maxVal)
{
    if(root == NULL)
    {
        return true;
    }

    if(root->data > minVal && root->data < maxVal &&
       isbst(root->left, minVal, root->data) &&
       isbst(root->right, root->data, maxVal))
    {
        return true;
    }
    
    return false;
}

int main()
{
    node* root = new node(50);
    root->left = new node(10);
    root->right = new node(70);
    root->right->left = new node(20);
    root->right->right = new node(80);
    
    if(isbst(root, INT_MIN, INT_MAX))
    {
        cout << "The given tree is a Binary Search Tree." << endl;
    }
    else
    {
        cout << "The given tree is not a Binary Search Tree." << endl;
    }
    
    return 0;
}
