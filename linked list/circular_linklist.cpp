#include<iostream>
#include "linklist.h"
#include "linklist.cpp"
using namespace std;
void check(node **head)
{
    node *temp=*head;
    do
    {
        temp=temp->next;
    }while(temp!=NULL && temp!=*head);
    if(temp==NULL)
        cout<<"Not circular linked list";
    else
        cout<<"circular linked list";
}
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
    check(&head);
}
