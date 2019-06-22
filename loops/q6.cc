#include<iostream>
using namespace std;
int main()
{
    int n;
    float i;
    cin>>n;
    for(i=1;i*i<=n;i++);
    cout<<"square root : "<<i-1;
    return 0;
}
