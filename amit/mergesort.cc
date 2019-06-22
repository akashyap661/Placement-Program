//Merge sort
#include<iostream>
using namespace std;
void merge(int *a,int l,int r,int m)
{
    int n1=m-l+1,n2=r-m;
    int l1[n1],r1[n2],i,j;
    for(i=0;i<n1;i++)
        l1[i]=a[l+i];
    for(j=0;j<n2;j++)
        r1[j]=a[m+1+j];
    i=0;
    j=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(l1[i]<=r1[j])
        {
            a[k]=l1[i];
            i++;
        }
        else
        {
            a[k]=r1[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=l1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=r1[j];
        j++;
        k++;
    }
}

void mergesort(int *a,int l,int r)
{
    if(l<r)
    {
        int m=l+(r-l)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,r,m);
    }
}
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
        cin>>arr[i];
    mergesort(arr,0,9);
    for(int i=0;i<10;i++)
        {
            cout<<arr[i]<<endl;
        }
        return 0;
}
