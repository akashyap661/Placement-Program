#include<iostream>
#include<cmath>
#include "btree.h"
#include "btree.cpp"
using namespace std;
int height(node *root)
{
    if(root==NULL)
        return 0;
    return max(height(root->left),height(root->right))+1;
}
int main()
{
    node *root=newnode(1);
    root->left=newnode(2);
    root->left->right=newnode(3);
    root->right=newnode(4);
    inorder(root);
    cout<<endl<<height(root);
}
