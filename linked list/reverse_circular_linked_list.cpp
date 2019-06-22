#include<iostream>
#include "linklist.h"
#include "linklist.cpp"
using namespace std;
int main()
{
    int n,val,i;
    node *head=NULL;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>val;
        insert_back(&head,val);
    }
    circular(&head);
    reverse_circular(&head);
    display_circular(head);
}
