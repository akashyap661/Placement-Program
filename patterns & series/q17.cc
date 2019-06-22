#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,term,sum=0;
    cin>>n;
    cin>>a>>b>>c;
    cout<<a<<" "<<b<<" "<<c<<" ";
    term=c;
    sum=a+b+c;
    for(int i=4;i<=n;i++)
    {
        term=term+1;
        cout<<term<<" ";
        sum+=term;
    }
    cout<<endl<<sum;
    return 0;
}

