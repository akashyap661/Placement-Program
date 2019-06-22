#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int limit=sqrt(n);
    for(int i=1;i<=limit;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }

    }
    for(int i=limit;i>=1;i--)
    {
        if(n%i==0)
        {
            cout<<n/i<<" ";
        }

    }
    return 0;
}

