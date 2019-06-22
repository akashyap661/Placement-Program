#include<iostream>
#include "linklist.h"
#include "linklist.cpp"
using namespace std;
int sum(node *head)
{
    static node *temp=head;
    if(head==NULL)
        return 0;
    if(head->next==NULL)
    {
        if(temp->data<head->data)
            return head->data;
        else
            return 0;
    }
    if(head->next->data<head->data)
        return head->data+sum(head->next);
    else
        return sum(head->next);
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
    cout<<sum(head);
}
