#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int limit=sqrt(n);
    for(int i=2;i<=limit;i++)
    {
        if(n%i==0)
        {
            cout<<"non prime";
            return 0;
        }

    }
    cout<<"prime no.";
}
