#include<iostream>
#include<climits>
using namespace std;
int max_array(int *a,int len,int max)
{
    if(len==-1)
        return max;
    if(max<a[len])
        max=a[len];
    return max_array(a,len-1,max);
}
int main()
{
    int n,max=INT_MIN;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<max_array(a,n-1,max);
}
