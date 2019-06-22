// we have two linked list make a new linked list containing greater value among them
#include<iostream>
#include "linklist.h"
#include "linklist.cpp"
using namespace std;
node* newlist(node *p1,node *p2)
{
    int val;
    node *newlist1=NULL;
    while(p1!=NULL && p2!=NULL)
    {
        if(p1->data>p2->data)
            insert_back(&newlist1,p1->data);
        else
            insert_back(&newlist1,p2->data);
        p1=p1->next;
        p2=p2->next;
    }
    return newlist1;


}
int main()
{
    node *p1=NULL,*p2=NULL,*temp;
    insert_front(&p1,8);
    insert_front(&p1,3);
    insert_front(&p1,2);
    insert_front(&p1,5);
    insert_front(&p2,5);
    insert_front(&p2,4);
    insert_front(&p2,7);
    insert_front(&p2,1);
    display(p1);
    cout<<endl;
    display(p2);
    cout<<endl;
    temp=newlist(p1,p2);
    display(temp);

}
