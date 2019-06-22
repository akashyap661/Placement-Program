#include<iostream>
using namespace std;
int main()
{
    int arr[20],n,max=INT_MIN,min=INT_MAX;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i=i+2)
    {
        if(arr[i]>=arr[i+1])
        {
            if(arr[i]>=max)
                max=arr[i];
            if(arr[i+1]<=min)
                min=arr[i+1];
        }
        else
        {
            if(arr[i]<=min)
                min=arr[i];
            if(arr[i+1]>=max)
                max=arr[i+1];
        }
    }
    cout<<max<<endl<<min;
    return 0;
}
