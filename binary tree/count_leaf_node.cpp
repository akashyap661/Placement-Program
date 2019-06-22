#include<iostream>
#include<cmath>
#include "btree.h"
#include "btree.cpp"
using namespace std;
int leaf(node *root)
{
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return 1;
    return leaf(root->left)+leaf(root->right);
}
int main()
{
    node *root=newnode(1);
    root->left=newnode(2);
    root->left->right=newnode(3);
    root->right=newnode(4);
    inorder(root);
    cout<<endl<<leaf(root);
}
