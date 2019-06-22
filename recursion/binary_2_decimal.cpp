#include<iostream>
#include<math.h>
using namespace std;
int b2d(int n,int k)
{
    if(n==0)
        return 0;
    return (n%10)*pow(2,k)+b2d(n/10,k+1);
}
int main()
{
    int n;
    cin>>n;
    cout<<b2d(n,0);
}
