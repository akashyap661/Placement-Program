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
//inserting in the front
void insert_front(node **headptr,int value)
{
    node *temp=new node();
    temp->data=value;
    temp->next=*headptr;
    *headptr=temp;
}

//insert after given key value in case of back end
void insert_in_between(node **head,int key1,int key2,int val)
{
    node *temp=new node(),*y=*head;
    temp->data=val;
    while(y->data!=key1)
    {
        y=y->next;
    }
    if(y->next->data==key2)
    {
        temp->next=y->next;
        y->next=temp;
    }
    else
        cout<<"error"<<endl<<"choose again"<<endl;
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
    int op,value,n,key1,key2;
    node *head=NULL;
    do
    {
        cout<<endl<<"Operations"<<endl;
        cout<<"1-Insert from Back end"<<endl;
        cout<<"2-Insert from Front end"<<endl;
        cout<<"3-Insert in Between"<<endl;
        cout<<"4-Delete node"<<endl;
        cout<<"5-End"<<endl;
        cout<<"Choose operation :";
        cin>>op;
        switch (op)
        {
        case 1 :cout<<"Enter value :";
                    cin>>value;
                    insert_back(&head,value);
                    show(&head);
                    break;
            case 2 :cout<<"Enter value :";
                    cin>>value;
                    insert_front(&head,value);
                    show(&head);
                    break;
            case 3 :cout<<"Enter two values : ";
                    cin>>key1>>key2;
                    cout<<"Enter value :";
                    cin>>value;
                    insert_in_between(&head,key1,key2,value);
                    show(&head);
                    break;
            case 4 :cout<<"Enter key :";
                    cin>>value;
                    del(&head,value);
                    show(&head);
                    break;
            case 5 :return 0;
            default : cout<<"Invalid operation"<<endl;
        }
    }while(op!=5);
}

