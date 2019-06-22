#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i;
    float n;
    cin>>n;
    int space=n/2+1,toprint=-1;
    for(i=1;i<=n;i++)
    {
        if(i<=floor(n/2)+1)
        {
            toprint+=2;
            space-=1;
            for(int j=1;j<=space;j++)
                cout<<" ";
            for(int k=1;k<=toprint;k++)
                cout<<"*";
            cout<<endl;


        }
        else
        {
            toprint-=2;
            space+=1;
            for(int j=1;j<=space;j++)
                cout<<" ";
            for(int k=1;k<=toprint;k++)
                cout<<"*";
            cout<<endl;
        }

    }

    return 0;
}
