#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>x>>n;
    double term=x,sum=term;
    for(int i=2;i<=n;i++)
    {
        sum+=term;
        term=(term*x*x*(-1))/((2*i-1)*(2*i-2));

    }
    cout<<sum;
    return 0;
}
