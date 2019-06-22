#include<iostream>
#include "linklist.h"
#include "linklist.cpp"
double median(node **head,int n)
{
    node *p1=*head;
    node *p2=(*head)->next;
    while(p2->next!=NULL)
    {
        p2=p2->next;
        if(p2->next!=NULL)
        {
            p1=p1->next;
            p2=p2->next;
        }
    }
    if(n%2!=0)
        return p1->next->data;
    else
    {
        return (double)(p1->data+p1->next->data)/2.0;
    }
}
int main()
{
    int n,value,i;
    node *head=NULL;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>value;
        insert_back(&head,value);
    }
    cout<<median(&head,n);
}
