//given an array find frequency which is equal to k
#include<iostream>
using namespace std;
int main()
{
    int flag=0,freq=1,j,i,k;
    int arr[10];
    for(i=0;i<10;i++)
        cin>>arr[i];
    cout<<"Enter K : ";
    cin>>k;
    for(i=0;i<10;i++)
    {
        flag=0;
        freq=1;
        for(j=i+1;j<10;j++)
        {
            if(arr[i]==arr[j]&&flag==1)
                {
                    freq++;
                    arr[j]=-1;
                }
            if(arr[i]==arr[j] && arr[i]!=-1 && arr[j]!=-1)
            {
                flag=1;
                freq++;
                arr[j]=-1;
            }
        }
        if(arr[i]!=-1 && freq==k)
            cout<<arr[i]<<" : "<<freq<<endl;
    }
}
