#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int space=n-1,toprint=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=space;j++)
            cout<<" ";
        for(int k=1;k<=toprint;k++)
            cout<<"*";
        cout<<endl;
        space-=1;
        toprint+=2;
    }
    return 0;
}
