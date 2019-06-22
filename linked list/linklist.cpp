#include "linklist.h"

void insert_back(node **headptr,int value)
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

void insert_front(node **headptr,int value)
{
    node *temp=new node();
    temp->data=value;
    temp->next=*headptr;
    *headptr=temp;
}
void insert_middle(node **head,int val)
{
    node *temp=new node(),*p1=*head,*p2=(*head)->next;
    temp->data=val;
    while(p2->next!=NULL)
    {
        p2=p2->next;
        if(p2->next!=NULL)
        {
            p1=p1->next;
            p2=p2->next;
        }
    }
    temp->next=p1->next;
    p1->next=temp;
}

void del(node **head,int key)
{
    node *temp,*temp1=*head;
    if(temp1->data==key)
    {
        *head=temp1->next;
        delete(temp);
    }
    else
    {
        while(temp1->data!=key)
        {
            temp=temp1;
            temp1=temp1->next;
            if(temp1==NULL)
            {
                cout<<"Key not found"<<endl;
                return;
            }
        }
           temp->next=temp1->next;
           delete(temp1);
    }
}

void reverse(node **head)
{
    node *prev=NULL,*current=*head,*right=(*head)->next;
    while(current!=NULL)
    {
        right=current->next;
        current->next=prev;
        prev=current;
        current=right;
    }
    *head=prev;
}
void reverse_circular(node **head)
{
    node *prev=NULL,*current=*head,*right;
    do
    {
        right=current->next;
        current->next=prev;
        prev=current;
        current=right;
    }while(current!=*head);
    (*head)->next=prev;
    *head=prev;
}
void display(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
void display_circular(node *head)
{
    node *temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(head!=temp);
}
void del_node(node **head,node *pos)
{
    node *temp=*head;
    while(temp->next!=pos)
        temp=temp->next;
    temp->next=pos->next;
    delete(pos);
}
void circular(node **head)
{
    node *temp=*head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=*head;
}
