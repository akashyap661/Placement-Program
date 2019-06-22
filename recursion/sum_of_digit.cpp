#include<iostream>>
using namespace std;
int add(int n)
{
    if(n==0)
        return 0;
    return n%10+add(n/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<add(n);
}
