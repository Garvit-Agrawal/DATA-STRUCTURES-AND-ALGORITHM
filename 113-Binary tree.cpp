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
        next=previous=NULL;
    }
};
int main()
{
    node* root=new node(1);
    root->next=new node(2);
    root->previous=new node(3);  
    return 0;
}