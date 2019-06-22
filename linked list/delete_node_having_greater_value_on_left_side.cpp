#include<iostream>
#include<climits>
#include "linklist.h"
#include "linklist.cpp"
using namespace std;
void delete_nodes(node **head,int max)
{
    node *temp=*head,*temp2;
    while(temp->next!=NULL)
    {
        if(temp->next->data>max)
        {
            max=temp->data;
            temp=temp->next;
        }
        else
        {
            temp2=temp->next;
            temp->next=temp2->next;
            delete(temp2);
        }

    }
}
int main()
{
    node *head=NULL;
    int n,value;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        insert_back(&head,value);
    }
    int max=head->data;
    delete_nodes(&head,max);
    display(head);

}
