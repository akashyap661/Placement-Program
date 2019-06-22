#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    int b[m];
    for(i=0;i<m;i++)
        cin>>b[i];
    int c[n+m];
    i=0;
    j=0;
    k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<m)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    for(i=0;i<m+n;i++)
        cout<<c[i]<<" ";
    return 0;
}
