#include<iostream>
using namespace std;
int main()
{
    int n,mid;
    cin>>n;
    int a[n*n];
    for(int i=0;i<n*n;i++)
        cin>>a[i];
    mid=n*n/2;
    if(n*n%2!=0)
        cout<<a[mid];
    else
    {
        cout<<(float)(a[mid]+a[mid-1])/2.0;
    }
}
