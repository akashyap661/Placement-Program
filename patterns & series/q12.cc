#include<iostream>
using namespace std;
int main()
{
    long int a=2,b=10,n,sum=0;
    cin>>n;
    for(int i=1;i<=2*n;i++)
    {
        if(i%2==0)
        {
            sum+=b;
            cout<<b<<" ";
            b*=2;
        }
        else
        {
            sum+=a;
            cout<<a<<" ";
            a*=3;
        }
    }
    cout<<endl<<sum;
    return 0;

}
