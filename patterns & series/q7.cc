#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            {
                if(j%2==1 && i%2==0)
                {
                    cout<<-c<<" ";
                    c++;
                }
                else if(j%2==0 && i%2==1)
                {
                    cout<<-c<<" ";
                    c++;
                }
                else{
                    cout<<c<<" ";
                    c++;
                }
            }
        cout<<endl;
    }
    return 0;
}
