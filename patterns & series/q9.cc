#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nspace=n/2+1,bspace=-1;
    for(int i=1;i<=n;i++)
    {
        if(i<=n/2+1)
        {
            nspace--;
            for(int j=1;j<=nspace;j++)
                cout<<" ";
            cout<<"*";
            if(i!=1)
            {
                bspace+=2;
                for(int k=1;k<=bspace;k++)
                    cout<<" ";
                cout<<"*";
            }
        }
        else
        {
            nspace++;
            for(int j=1;j<=nspace;j++)
                cout<<" ";
            cout<<"*";
            if(i!=n)
            {
                bspace-=2;
                for(int k=1;k<=bspace;k++)
                    cout<<" ";
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}
