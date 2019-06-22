#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[20],n,freq=1,i,j;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        freq=1;
        if(a[i]!=-1)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j] && a[j]!=-1)
                {
                    freq++;
                    a[j]=-1;
                }
            }
            cout<<a[i]<<" : "<<freq<<endl;
        }
    }
    return 0;
}
