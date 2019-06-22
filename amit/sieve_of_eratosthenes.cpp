#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    bool a[n+1];
    memset(a,true,sizeof(a));
    for(i=2;i*i<=n;i++)
    {
        if(a[i]==true)
        {
            for(j=i*i;j<=n;j+=i)
                a[j]=false;
        }
    }
    for(i=2;i<=n;i++)
    {
        if(a[i]==true)
            cout<<i<<" ";
    }
}
