#include<iostream>
using namespace std;
int main()
{
    int n,a,b,arr[20],mat[20][20],i,j,k=0;
    cin>>n>>a>>b;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            mat[i][j]=arr[k];
            k++;
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
