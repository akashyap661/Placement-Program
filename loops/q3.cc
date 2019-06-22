#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,i=0;
    cin>>n;
    while(n>0)
    {
        if(n%10==1)
        {
            sum+=(2^i);
        }
        n=n/10;
        i++;
    }
    cout<<sum;
    return 0;
}
