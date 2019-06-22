#include<iostream>
#include<math.h>
using namespace std;
int prime(int a)
{
    int lim=sqrt(a);
    for(int i=2;i<=lim;i++)
    {
        if(a%i==0)
            return -1;
    }
    return 1;
}
int main()
{
    int a,b;
    cin>>a>>b;
    if((a-b)!=2 || (b-a)!=2 || prime(a)==-1 || prime(b)==-1)
        cout<<"Not twin prime number";
    else
    {
        cout<<"twin prime numbers";
    }
    return 0;
}
