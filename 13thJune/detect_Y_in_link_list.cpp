#include<iostream>
using namespace std;
class node
{public:
    int data;
    node *next;
};
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

int detect_Y(node **p1,node **p2)
{
    node *temp=*p1;
    int count1=0,count2=0;
    while(temp!=NULL)
    {
        count1++;
        temp=temp->next;
    }
    temp=*p2;
    while(temp!=NULL)
    {
        count2++;
        temp=temp->next;
    }
    int cnt;
    if(count1>=count2)
    {

        temp=*p1;
        cnt=count1-count2;
        while(cnt)
        {
            temp=temp->next;
            cnt--;
        }
        node *temp1=*p2;
        while(temp1->next!=temp->next && temp1->next!=NULL && temp->next!=NULL)
        {
            temp1=temp1->next;
            temp=temp->next;
        }
        if(temp1->next==temp->next)
                cout<<"Y present";
            else
                cout<<"Not present";


    }
    else
    {
        temp=*p2;
        cnt=count2-count1;
        while(cnt)
        {
            temp=temp->next;
            cnt--;
        }
        node *temp1=*p1;
        while(temp1->next!=temp->next && temp1->next!=NULL && temp->next!=NULL)
        {
            temp1=temp1->next;
            temp=temp->next;
        }
        if(temp1->next==temp->next)
                cout<<"Y present";
            else
                cout<<"Not present";
    }
}
int main()
{
    node *head1=NULL,*head2=NULL;
    insert(&head1,1);
    insert(&head1,2);
    insert(&head1,3);
    insert(&head1,4);
    insert(&head1,5);
    insert(&head1,6);
    insert(&head1,7);
    insert(&head1,8);
    insert(&head2,3);
    insert(&head2,2);
    insert(&head2,1);
    node *y=head1;
    while(y->data!=5)
        y=y->next;
    node *x=head2;
    while(x->next!=NULL)
        x=x->next;
    x->next=y;
    detect_Y(&head1,&head2);
}
