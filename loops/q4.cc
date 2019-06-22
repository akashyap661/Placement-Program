#include<iostream>
using namespace std;
int main()
{
    int arr[50],i,val;
    for(i=0;;i++)
    {
        cin>>val;
        if(val>0)
            arr[i]=val;
        else
            break;
    }
    int len=i;
    if(len==0)
    {
        cout<<"Null Array";
    }
    else
    {
        int max1=INT_MIN;
        for(int j=0;j<len;j++)
        {
            if(arr[j]>=max1)
                max1=arr[j];
        }
        cout<<"Max element : "<<max1;
    }
    return 0;
}
