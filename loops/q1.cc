#include<iostream>
using namespace std;
int main()
{
    int n;
    long int sum=0,f;
    cin>>n;
    while(n>0)
    {
        f=1;
        int temp=n%10;
        for(int i=1;i<=temp;i++)
            f=f*i;
        sum+=f;
        n=n/10;
    }
    cout<<sum;
    return 0;
}
