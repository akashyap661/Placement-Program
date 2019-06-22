#include<iostream>
using namespace std;
int sum_array(int *a,int len,int sum)
{
    if(len==-1)
        return sum;
    return a[len]+sum_array(a,len-1,sum);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<sum_array(a,n-1,0);
}
