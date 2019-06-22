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
        int cp=0;
        while(n%i==0)
        {
            cp++;
            n=n/i;
        }
        if(cp!=0)
        {
            cout<<i<<"^"<<cp<<endl;
        }
    }
    return 0;
}
