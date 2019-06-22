#include<iostream>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
cpp_int power(int n,int m)
{
    if(m==0)
        return 1;
    return n*power(n,m-1);
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<power(n,m);
}
