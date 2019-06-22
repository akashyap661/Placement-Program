#include<iostream>
using namespace std;
int main()
{
    int a,b,mat[20][20],even[20],odd[20],i,j,e=0,o=0;
    cin>>a>>b;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
            cin>>mat[i][j];
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(mat[i][j]%2==0)
            {
                even[e]=mat[i][j];
                e++;
            }
            else
            {
                odd[o]=mat[i][j];
                o++;
            }
        }
    }
    for(i=0;i<e;i++)
        cout<<even[i]<<' ';
    cout<<endl;
    for(j=0;j<o;j++)
        cout<<odd[j]<<' ';
    return 0;

}
