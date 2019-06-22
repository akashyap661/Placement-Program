#include<iostream>>
using namespace std;
int add(int n,int m)
{
    if(m==0)
        return 0;
    return n+add(n,m-1);
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<add(n,m);
}
