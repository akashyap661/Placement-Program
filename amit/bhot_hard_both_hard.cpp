#include<iostream>
#include<string>
using namespace std;
int main()
{
   long int a[100][8],i,j,N,R,min,max,time;
   string color,isRated;void insert_after(node **head,int key,int val)
{
    node *temp=new node(),*y=*head;
    temp->data=val;
    while(y->data!=key)
    {
        y=y->next;
    }
    temp->next=y->next;
    y->next=temp;
}
int main()
{
    int value,n;
    node *head=NULL;
    cin>>n;
    while(n>0){
           cin>>value;
            insert(&head,value);
            n--;
    }
    node *x=head;
    while(x!=NULL)
    {
        cout<<x->data<<"  ";
        x=x->next;
    }
    cout<<endl;
    int key;
    cin>>key>>value;
    insert_after(&head,key,value);
    x=head;
    while(x!=NULL)
    {
        cout<<x->data<<"  ";
        x=x->next;
    }
    return 0;
}
   cin>>N;
   for(i=0;i<=N;i++)
   {
       cin>>R>>min>>max>>time>>isRated>>color;
       a[i][0]=i+1;
       a[i][1]=R;
       a[i][2]=min;
       a[i][3]=max;
       a[i][4]=time;
       if(isRated=="rated")
            a[i][5]=1;
       else
            a[i][5]=0;
       if(color=="random")
            a[i][6]=0;
       else if(color=="white")
            a[i][6]=1;
       else
            a[i][6]=2;
       a[i][7]=0;
   }
   for(i=0;i<N;i++)
   {
       for(j=0;j<8;j++)
        cout<<a[i][j]<<"     ";
       cout<<endl;
   }
   for(i=0;i<N;i++)
   {
       if(a[i][7]==0)
       {
           for(j=i+1;j<N;j++)
           {
               if(a[j][7]==0){
               if(a[j][1]>=a[i][2] && a[j][1]<=a[i][3] && a[j][4]==a[i][4] && a[i][5]==a[j][5] && a[i][6]==a[j][6])
               {
                   if(a[i][6]==0)
                   {
                       a[j][7]=i+1;
                       break;
                   }
               }
               else if(a[j][1]>=a[i][2] && a[j][1]<=a[i][3] && a[j][4]==a[i][4] && a[i][5]==a[j][5] && a[i][6]!=a[j][6])
               {
                   if((a[i][6]==1 && a[j][6]==2) || (a[i][6]==2 && a[j][6]==1))
                   {
                       a[j][7]=i+1;
                       break;
                   }
               }
           }
           }
       }
       for(i=0;i<N;i++)
   {
       for(j=0;j<8;j++)
        cout<<a[i][j]<<"     ";
       cout<<endl;
   }
       for(i=0;i<N;i++)
       {
           if(a[i][7]==0)
            cout<<"wait"<<endl;
           else
            cout<<a[i][7]<<endl;
       }
   }

}
