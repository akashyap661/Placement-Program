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
int sum(node *head,int x)
{
    if(head==NULL)
        return 0;
    return head->coef*pow(x,head->power)+sum(head->next,x);
}
void insert(node **head,int coef,int power)
{
    node *temp=new node();
    temp->coef=coef;
    temp->power=power;
    temp->next=*head;
    *head=temp;
}
int main()
{
    int n,x,coef,power;
    node *head=NULL;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>coef>>power;
        insert(&head,coef,power);
    }
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->coef<<"x^"<<temp->power;
        temp=temp->next;
        if(temp!=NULL)
            cout<<"+";
    }
    cout<<endl;
    cin>>x;
    cout<<sum(head,x);
}
