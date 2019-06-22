#include<iostream>
using namespace std;
int main()
{
    int arr[20],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int max=INT_MIN;
    cout<<"leaders : ";
    for(int i=n-1;i>=0;i--)
    {
        if(max<arr[i])
        {
            cout<<arr[i]<<" ";
            max=arr[i];
        }
    }
    return 0;
}
