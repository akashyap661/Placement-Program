#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,a[20],freq,i,j;
    cin>>n>>k;
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
                else
                    break;
            }
        }
        if(freq==k)
            cout<<a[i]<<endl;
    }
    return 0;
}
