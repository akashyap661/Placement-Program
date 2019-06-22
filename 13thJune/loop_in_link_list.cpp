#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void loop(node **headptr)
{
    node *p1=*headptr,*p2=*headptr;
    do
    {
        p1=p1->next;
        p2=p2->next->next;
    }while(p1!=p2 && p2!=NULL && p2->next!=NULL);
    if(p1==p2)
        cout<<"Loop exist";
    else
        cout<<"No loop exist";
}
void insert(node **headptr,int value)
{
    node *temp=new node();
    temp->data=value;
    temp->next=*headptr;
    *headptr=temp;

}
int main()
{
    node *head=NULL;
    insert(&head,10);
    insert(&head,9);
    insert(&head,8);
    insert(&head,7);
    insert(&head,6);
    node *x=head;
    while(x->next!=NULL)
    {
        cout<<x->data<<" ";
        x=x->next;
    }
    x->next=head;
    loop(&head);
}
