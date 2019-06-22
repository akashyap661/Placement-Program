#include<iostream>
#include<boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
cpp_int fact(cpp_int n)
{
    if(n==1 || n==0)
        return 1;
    return n*fact(n-1);
}
int main()
{
    cpp_int n6;
    cin>>n;
    cout<<fact(n);
}
