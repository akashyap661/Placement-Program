// In this problem we need to count no.of step as if we increase value of elements by 1 in order
// to make any row or column prime
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    bool a[n+1];
    int i,j;
    memset(a,true,sizeof(a));
    for(i=2;i*i<=n;i++)
    {
        if(a[i]==true)
        {
            for(j=i*i;j<=n;j+=i)
                a[j]=false;
        }
    }
    return a[n];
}
bool check(int *temp,int n)
{
    int i,count1;
    for(i=0;i<n*n;i++)
    {
        if(i%3==0)
            count1=0;
        if(prime(temp[i])==true)
        {
            count1++;
            if(count1==3)
                return true;
        }

    }
    return false;
}
int main()
{
    int n,step=0;
    cin>>n;
    int a[n][n],r[n*n],c[n*n],i,j,x;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    x=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            r[x]=a[i][j];
        }
    }
    x=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[x]=a[j][i];
        }
    }
    while(1)
    {
        if(check(r,n)==true || check(c,n)==true)
        {
            cout<<step;
            return 0;
        }
        for(int i=0;i<=n*n;i++)
        {
            if(prime(r[i])==false)
                r[i]++;
        }
        for(int i=0;i<=n*n;i++)
        {
            if(!prime(c[i])==false)
                c[i]++;
        }
        step++;
    }
}
