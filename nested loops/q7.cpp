#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[20],i,j,f;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        f=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j] && a[i]!=-1)
            {
                f++;
                a[i]=-1;
            }
            else
                break;
        }
        if(f==1)
            cout<<a[i]<<endl;
    }
    return 0;
}
