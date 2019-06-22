#include<iostream>
#include<math.h>
using namespace std;
int binary_to_decimal(int arr[],int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i]*pow(2,n-i-1);
    }
    return sum;
}
int main()
{
    int n,i;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    int a_dec=binary_to_decimal(a,n);
    int b_dec=binary_to_decimal(b,n);
    if(a_dec>b_dec)
        cout<<a_dec-b_dec;
    else
        cout<<b_dec-a_dec;
    return 0;
}
