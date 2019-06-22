//given an array find element such that all elements in left are small and all elements in right are greater.
#include<iostream>
using namespace std;
void sort_element(int a[],int n)
{
    int flag;
    for(int i=1;i<n-1;i++)
    {
        flag=0;
        for(int j=0;j<i;j++)
        {
            if(a[i]<a[j])
            {
                flag++;
                break;
            }
        }
        if(flag==1)
            continue;
        for(int k=i+1;k<n;k++)
        {
            if(a[i]>a[k])
            {
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            cout<<a[i];
            break;
        }
    }
    if(flag==1)
    {
        cout<<"no such element";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort_element(a,n);
    return 0;
}
