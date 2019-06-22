#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=1,k;
    for(int i=1;i<=n;i++)
    {
        k=c+i-1;
        for(int j=1;j<=i;j++)
            {
                if(i%2==0)
                {
                    cout<<k<<" ";
                    k--;
                    c++;
                }
                else
                {
                    cout<<c<<" ";
                    c++;
                }
            }

        cout<<endl;
    }
    return 0;
}

