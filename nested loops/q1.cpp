#include<iostream>
using namespace std;
int main()
{
    int n,k,i,j,c=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                c++;
                break;
            }
        }
    }
    if(c==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
