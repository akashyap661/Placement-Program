#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int limit=sqrt(n);
    for(int i=2;i<=limit;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            while(n%i==0)
            {
                n=n/i;
            }
        }
    }
    return 0;
}
