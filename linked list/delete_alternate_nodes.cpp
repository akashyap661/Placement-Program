#include<iostream>
#include "linklist.h"
#include "linklist.cpp"
using namespace std;
void alt_nodes(node **head)
{
    node *temp=*head,*temp1=temp->next;
    while(temp->next!=NULL && temp!=NULL)
    {
        temp->next=temp1->next;

        delete(temp1);
        if(temp->next==NULL)
            break;
        temp=temp->next;
        temp1=temp->next;
    }
}
int main()
{
    int n,value;
    node *head=NULL;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        insert_back(&head,value);
    }
    alt_nodes(&head);
    display(head);
}
