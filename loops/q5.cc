#include<iostream>
using namespace std;
int main()
{
    int n;
    float i;
    cin>>n;
    for(i=1;i*i*i<=n;i++);
    cout<<"cube root : "<<i-1;
    return 0;
}
