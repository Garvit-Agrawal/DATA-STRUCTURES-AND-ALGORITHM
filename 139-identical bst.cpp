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
bool check(node* root1,node* root2)
{
    if(root1==NULL && root2==NULL)
    {
        return true;
    }
    if(root1==NULL || root2==NULL)
    {
        return false;
    }
    else
    {
        if(root1->data==root2->data && check(root1->left,root2->left) && check(root1->right,root2->right))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    
    return 0;
}