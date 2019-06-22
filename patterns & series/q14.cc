#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>x>>n;
    double term=x,sum=1;
    for(int i=2;i<=n;i++)
    {
        term=(term*x)/(i-1);
        sum+=term;
    }
    cout<<sum;
    return 0;
}

