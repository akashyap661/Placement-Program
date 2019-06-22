#include<iostream>
using namespace std;
int main()
{
    int n,i,j,count=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0,j=n-1;i<j;i++,j--)
    {
        if(a[i]!=a[j])
        {
            count++;
            break;
        }
    }
    if(count==0)
        cout<<"pallindrome";
    else
        cout<<"not pallindrome";
    return 0;
}
