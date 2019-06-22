#include<iostream>
using namespace std;
int main()
{
    int global_max=INT_MIN,local_max=0;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        local_max+=a[i];
        if(global_max<local_max)
            global_max=local_max;
        if(local_max<=0)
            local_max=0;
    }
    cout<<global_max;
    return 0;
}
