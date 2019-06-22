#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 && b[i]%2==0)
            a[i]+=b[i];
        else if(a[i]%2==1 && b[i]%2==1)
            a[i]*=b[i];
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
