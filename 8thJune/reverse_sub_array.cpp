//reverse every sub array of k group element for a +ve int array
#include<iostream>
using namespace std;
void reverse(int a[],int start,int end)
{
    int i,j;
    for(i=start,j=end;i<j;i++,j--)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k;
    cin>>k;
    int st=0,end=k-1;
    int extra=n%k,temp=n-extra;
    while(temp>0)
    {
        reverse(a,st,end);
        st=st+end+1;
        end=end+k;
        temp=temp-k;
    }
    reverse(a,st,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;

}
