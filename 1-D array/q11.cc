#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    int legend=INT_MIN;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]>legend)
        {
            legend=a[i];
            cout<<legend<<" ";
        }
    }
    return 0;
}
