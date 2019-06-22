#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
node *globalhead;
void split(node *head,node **p1,node **p2)
{
    node *temp1,*temp2;
    if(head==NULL && head->next==NULL)
    {
        *p1=head;
        *p2=NULL;
    }
    else{
            temp1=head;
            temp2=head->next;
    while(temp2!=NULL)
    {
        temp1=temp2->next;
        if(temp2!=NULL)
        {
            temp1=temp1->next;
            temp1=temp1->next;
        }
    }
    *p1=head;
    *p2=temp1->next;
    temp1->next=NULL;
    }

}
void insertback(node **headptr,int value)
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
    globalhead=*headptr;
}
node* merge(node *p1,node *p2)
{
    node *newlist=NULL;
    if(p1==NULL)
        return p2;
    else if(p2==NULL)
        return p1;
    if(p1->data<p2->data)
    {
        newlist=p1;
        newlist->next=merge(p1->next,p2);
    }
    else
    {
        newlist=p2;
        newlist->next=merge(p1,p2->next);
    }
    return newlist;

}
void msort(node **headptr)
{
    node *h=*headptr,*first=NULL,*second=NULL;
    if(h==NULL || h->next==NULL)
       return;
    split(h,&first,&second);
    msort(&first);
    msort(&second);
    *headptr=merge(first,second);
}
int main()
{
    node *head=NULL;
    insertback(&head,10);
    insertback(&head,4);
    insertback(&head,32);
    insertback(&head,6);
    insertback(&head,12);
    head=globalhead;
    node *x=globalhead;
    while(x!=NULL)
    {
        cout<<x->data<<" ";
        x=x->next;
    }
    cout<<endl;
    msort(&globalhead);
    x=globalhead;
    while(x!=NULL)
    {
        cout<<x->data<<" ";
        x=x->next;
    }
}
