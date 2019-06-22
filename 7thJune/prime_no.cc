#include<iostream>
using namespace std;
int prime(int n,int i)
{   if(n==1) return 0;
    if(n==2) return 1;
    if(n%i==0) return 0;
    if(i*i>n) return 1;
    return prime(n,i+1);
}
int main()
{
    int n;
    cin>>n;
    if(prime(n,2)==1)
        cout<<"Prime";
    else
        cout<<"Non Prime";
    return 0;
}
