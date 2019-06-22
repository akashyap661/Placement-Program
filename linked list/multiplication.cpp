#include<iostream>
#include<iostream>
#include<math.h>
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
/* node* mul(node *p1,int coef,int power)
{
    node *temp=NULL;
    while(p1!=NULL)
    {
        insert(&temp,p1->coef*coef,p1->power+power);
        p1=p1->next;
    }
    return temp;
}
*/
node *mul(node *p1,node *p2)
{
    node *out=NULL,*temp=p1;
    while(p2!=NULL)
    {
        p1=temp;
        while(p1!=NULL)
        {
            insert(&out,p1->coef*p2->coef,p1->power+p2->power);
            p1=p1->next;
        }
        p2=p2->next;
    }
    return out;
}
node* sum(node *head)
{
    node *outputlist=NULL,*temp;
    int coef;
    while(head!=NULL)
    {
        if(head->power!=-1)
        {
            temp=head->next;
            coef=head->coef;
            while(temp!=NULL)
            {
                if(head->power==temp->power && temp->power!=-1)
                {
                    coef+=temp->coef;
                    temp->power=-1;
                }
                temp=temp->next;
            }
            insert(&outputlist,coef,head->power);
        }
        head=head->next;
    }
    return outputlist;
}
void display(node *temp)
{
     while(temp!=NULL)
    {
        cout<<temp->coef<<"x^"<<temp->power;
        temp=temp->next;
        if(temp!=NULL)
            cout<<"+";
    }
    cout<<endl;
}
int main()
{
    int n,x,coef,power;
    node *p[2]={NULL};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>coef>>power;
        insert(&p[0],coef,power);
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>coef>>power;
        insert(&p[1],coef,power);
    }
    node *out[n];
    display(p[0]);
    display(p[1]);
    node *output=mul(p[0],p[1]);
    node *result=sum(output);
    node *temp=output->next;
    while(temp!=NULL)
    {
        delete(output);
        output=temp;
        temp=temp->next;
        if(temp==NULL)
            delete(output);
    }
    display(result);

}

