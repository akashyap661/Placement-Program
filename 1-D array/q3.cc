#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        sum+=arr[i];
    int mean=sum/n;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if (arr[i]>mean)
            count++;
    }
    cout<<count;
    return 0;
}
