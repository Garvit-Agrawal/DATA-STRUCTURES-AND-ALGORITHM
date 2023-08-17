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
        data = val;
        next = NULL;
        previous = NULL;
    }
};

int height(node* root)
{
    if (root == NULL)
    {
        return 0;
    }
    return max(height(root->previous), height(root->next)) + 1;
}

int diameter(node* root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = diameter(root->previous);
    int right = diameter(root->next);
    int curr = height(root->previous)+height(root->next) +1;
    return max(curr,max(left,right));
}

int main()
{
    node* root = new node(1);
    root->previous = new node(5);
    root->next = new node(8);
    root->previous->previous = new node(0);
    root->previous->next = new node(2);
    root->next->previous = new node(6);
    root->next->next = new node(4);
    root->previous->previous->previous=new node(10);
    cout << diameter(root);
    return 0;
}
