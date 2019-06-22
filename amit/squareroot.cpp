#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,limit,i;
    cin>>n;
    for(i=1;i*i<=n;i++);
    cout<<i-1;
}
