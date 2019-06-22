//given an array and print duplicate elements
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int flag=0;
    int arr[10];
    for(int i=0;i<10;i++)
        cin>>arr[i];
    sort(arr,arr+10);
    for(int i=0;i<10;i++)
    {
        if(arr[i]==arr[i+1] && flag!=1)
        {
            cout<<arr[i]<<endl;
            flag=1;
        }
        else
            flag=0;
    }
}
