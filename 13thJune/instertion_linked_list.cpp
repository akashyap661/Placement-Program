#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
//insertion at the back
void insert(node **headptr,int value)
{
    node *temp=new node();
    temp->data=value;
    temp->next=NULL;
    if(*headptr==NULL)
    {
        *headptr=temp;
    }
    else{
    node *last_node=*headptr;
    while(last_node->next!=NULL)
    {
        last_node=last_node->next;
    }
    last_node->next=temp;
    }
}


//insert after given key value in case of back end
void insert_after(node **head,int key,int val)
{
    node *temp=new node(),*y=*head;
    temp->data=val;
    while(y->data!=key)
    {
        y=y->next;
    }
    temp->next=y->next;
    y->next=temp;
}
int main()
{
    int value,n;
    node *head=NULL;
    cin>>n;
    while(n>0){
           cin>>value;
            insert(&head,value);
            n--;
    }
    node *x=head;
    while(x!=NULL)
    {
        cout<<x->data<<"  ";
        x=x->next;
    }
    cout<<endl;
    int key;
    cin>>key>>value;
    insert_after(&head,key,value);
    x=head;
    while(x!=NULL)
    {
        cout<<x->data<<"  ";
        x=x->next;
    }
    return 0;
}
