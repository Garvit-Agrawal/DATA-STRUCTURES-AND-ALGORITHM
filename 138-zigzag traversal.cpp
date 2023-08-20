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
void zigzagtraversal(node* root)
{
    if(root==NULL)
    {
        return;
    }
    stack<node*> currlevel;
    stack<node*> nextlevel;
    bool lefttoright=true;

    currlevel.push(root);
    while(!currlevel.empty())
    {
        node* temp=currlevel.top();
        currlevel.pop();

        if(temp)
        {
            cout<<temp->data<<" ";

            if(lefttoright)
            {
                if(temp->left)
                {
                    nextlevel.push(temp->left);
                }
                if(temp->right)
                {
                    nextlevel.push(temp->right);
                }
            }
            else
            {
                if(temp->right)
                {
                    nextlevel.push(temp->right);
                }
                if(temp->left)
                {
                    nextlevel.push(temp->left);
                }
            }
        }
        
        if(currlevel.empty())
        {
            lefttoright=!lefttoright;
            swap(currlevel,nextlevel);
        }
    }
}
int main()
{
    node* root=new node(10);
    root->left=new node(8);
    root->right=new node(11);
    root->left->left=new node(7);
    root->left->right=new node(9);
    zigzagtraversal(root);
    return 0;
}