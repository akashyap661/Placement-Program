//find unique element in an array
#include<iostream>
using namespace std;
int main()
{
    int a[10],flag=0,i,j;
    for(i=0;i<10;i++)
        cin>>a[i];
    for(i=0;i<10;i++)
    {
        flag=0;
        for(j=i+1;j<10;j++)
        {
            if(a[i]==a[j])
            {
                flag=1;
                a[j]=-1;
            }
        }
        if(flag==0 && a[i]!=-1)
            cout<<a[i]<<endl;

    }
    return 0;
}
