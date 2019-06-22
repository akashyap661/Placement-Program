#include<iostream>
#include<cmath>
#include "btree.h"
#include "btree.cpp"
using namespace std;
int sum(node *root)
{
    if(root==NULL)
        return 0;
    return root->data+sum(root->left)+sum(root->right);
}
int main()
{
    node *root=newnode(1);
    root->left=newnode(2);
    root->left->right=newnode(3);
    root->right=newnode(4);
    inorder(root);
    cout<<endl<<sum(root);
}

