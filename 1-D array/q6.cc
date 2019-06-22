#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    int i=0,j=0;
    while(i<n && j<n)
    {
        if(a[i]==b[i])
            {
                i++;
                j++;
            }
        else if(a[i]<b[j])
            {
                cout<<a[i]<<" ";
                i++;
            }
        else
            j++;
    }
    while(i<n)
    {
        cout<<a[i]<<" ";
        i++;
    }
    return 0;
}
