#include<iostream>
using namespace std;
//using XOR
int main()
{
    int n,temp=0;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++)
        cin>>arr[i];
    for(int i=1;i<=n;i++)
    {
        temp=temp^i;
    }
    for(int i=0;i<n-1;i++)
    {
        temp=temp^arr[i];
    }
    cout<<temp;
    return 0;
}
//using Sum of n terms
/*int main(){
int n;
cin>>n;
int arr[n-1];
for(int i=0;i<n-1;i++)
    cin>>arr[i];
int temp=n*(n+1)/2;
for(int i=0;i<n-1;i++)
    temp-=arr[i];
cout<<temp;
return 0;
}
*/

//using Sort and Scan
/*
#include<algorithm>
int main()
{
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++)
        cin>>arr[i];
    sort(arr,arr+n-1);
    int counter=arr[0];
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=counter)
            break;
        counter++;
    }
    cout<<counter;
}
*/

