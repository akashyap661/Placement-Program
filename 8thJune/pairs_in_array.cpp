//pairs in 2 arrays such that x^y>^x
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    cin>>m;
    int y[m];
    for(int i=0;i<m;i++)
        cin>>y[i];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(pow(x[i],y[j])>pow(y[j],x[i]))
                {
                    cout<<"("<<x[i]<<","<<y[j]<<") ";
                    flag++;
                }
        }
    }
    if (flag==0)
        cout<<"no such pair exist";
    return 0;
}
