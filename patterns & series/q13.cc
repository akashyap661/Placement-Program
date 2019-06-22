#include<iostream>
using namespace std;
int main()
{
    char a=65,b=90;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
            cout<<a<<b<<" ";
            a+=2;
            b--;
    }
    return 0;

}

