#include<iostream>
using namespace std;
int main()
{
    int n,a[20],arr[20],max1=INT_MIN,temp,j=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        arr[i]=a[i];
    while(j<3)
    {
        max1=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=max1)
            {
                temp=i;
                max1=arr[i];
            }
        }
        arr[temp]=-1;
        j++;
    }
    cout<<max1;
    return 0;
}
