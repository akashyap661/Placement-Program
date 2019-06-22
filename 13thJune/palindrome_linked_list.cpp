#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void check(node **l1,node **l2)
{

}
    while(*l1!=NULL && *l2!=NULL)
    {
        if((*l1)->data!=(*l2)->data){
            cout<<"not palindrome";
            return;
        }
        *l1=(*l1)->next;
        *l2=(*l2)->next;
    }
    cout<<"Palindrome";
}
void reverse(node **headptr,node **middle)
{
    node *prev=NULL,*current=*middle,*right=(*middle)->next;
    while(current!=NULL)
    {
        right=current->next;
        current->next=prev;
        prev=current;
        current=right;
    }
    *middle=prev;
    check(headptr,middle);
}
void middle(node **headptr)
{
    node *p1=*headptr,*p2=*headptr;
    while(p2!=NULL && p2->next!=NULL)
    {
        p1=p1->next;
        p2=p2->next->next;
    }
        reverse(headptr,&p1);
}


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
void show(node **head)
{
    node *temp=*head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node *head=NULL;
    int n,val,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>val;
        insert_back(&head,val);

    }
    middle(&head);

}
