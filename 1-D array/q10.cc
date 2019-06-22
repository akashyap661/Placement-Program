#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n],b[n],c[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
            c[i]=1;
        else
            c[i]=0;
    }
    for(i=0;i<n;i++)
        cout<<c[i]<<" ";
    return 0;
}
