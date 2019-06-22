#include<iostream>
using namespace std;
class node
{
public:
    int coef;
    int power;
    node *next;
};
void insert(node **head,int coef,int power)
{
    node *temp=new node();
    temp->coef=coef;
    temp->power=power;
    temp->next=*head;
    *head=temp;
}
void insertback(node **headptr,int coef,int power)
{
    node *temp=new node();
    temp->coef=coef;
    temp->power=power;
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

node* add(node **p1,node **p2)
{
    node *newlist=NULL,*temp1=*p1,*temp2=*p2,*temp;
    int sum,power;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->power==temp2->power)
        {
            sum=temp1->coef+temp2->coef;
            power=temp1->power;
            insertback(&newlist,sum,power);
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else if(temp1->power>temp2->power)
        {
            sum=temp1->coef;
            power=temp1->power;
            insertback(&newlist,sum,power);
            temp1=temp1->next;
        }
        else
        {
            sum=temp2->coef;
            power=temp2->power;
            insertback(&newlist,sum,power);
            temp2=temp2->next;
        }

    }
    while(temp1!=NULL)
    {
        insertback(&newlist,temp1->coef,temp1->power);
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        insertback(&newlist,temp2->coef,temp2->power);
        temp2=temp2->next;
    }
    temp=newlist;
    while(temp!=NULL)
    {
        cout<<temp->coef<<"x^"<<temp->power;
        if(temp->next==NULL)
            break;
        temp=temp->next;

        cout<<"+";
    }

}

int main()
{
    node *p1=NULL,*p2=NULL,*temp;
    insert(&p1,1,0);
    insert(&p1,2,2);
    insert(&p1,5,4);
    insert(&p2,5,1);
    insert(&p2,10,2);
    insert(&p2,3,3);
    temp=p1;
    while(temp!=NULL)
    {
        cout<<temp->coef<<"x^"<<temp->power;
        if(temp->next==NULL)
            break;
        temp=temp->next;
        cout<<"+";
    }
    cout<<endl;
    temp=p2;
    while(temp!=NULL)
    {
        cout<<temp->coef<<"x^"<<temp->power;
        if(temp->next==NULL)
            break;
        temp=temp->next;
        cout<<"+";
    }
    cout<<endl;
    add(&p1,&p2);
}
