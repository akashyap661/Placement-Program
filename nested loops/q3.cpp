#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[20],n,i,j,max_freq=INT_MIN,local_freq;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
    {

        local_freq=1;
        if(a[i]!=-1)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j] && a[j]!=-1)
                {
                    local_freq++;
                    a[j]=-1;
                }
                else
                    break;
            }
            if(local_freq>max_freq)
            {
                max_freq=local_freq;
            }


        }
    }
    cout<<max_freq;
    return 0;
}

