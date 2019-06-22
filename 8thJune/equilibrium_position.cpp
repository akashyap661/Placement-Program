//equilibrium position in array where sum of left side element is equal to sum of right side element
#include<iostream>
using namespace std;
void equilibrium(int a[],int n,int ls,int rs)
{
    int flag;
    for(int i=2;i<n-1;i++)
    {
        flag=0;
        ls+=a[i-1];
        rs-=a[i];
        if(ls==rs)
        {
            cout<<a[i];
            flag++;
            break;
        }
    }
    if(flag==0)
        cout<<"no such element";
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ls=a[0],rs=0;
    for(int j=2;j<n;j++)
        rs+=a[j];
    if(ls==rs)
    {
        cout<<a[1];
        return 0;
    }
    equilibrium(a,n,ls,rs);
    return 0;

}
