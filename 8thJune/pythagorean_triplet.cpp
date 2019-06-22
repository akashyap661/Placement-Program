//pair(a,b,c) in array such that a^2+b^2=c^2
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[i]*a[i]+a[j]*a[j]==a[k]*a[k])
                {
                    cout<<"("<<a[i]<<","<<a[j]<<","<<a[k]<<") ";
                    flag++;
                }
            }
        }
    }
    if(flag==0)
        cout<<"no pair exist";
    return 0;
}
