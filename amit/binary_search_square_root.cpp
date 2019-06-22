#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binary(int start,int end,int key)
{
    if(start==end)
        return start;
    int mid=start+(end-start)/2;
    if(mid*mid==key)
    {
        return mid;
    }
    else if(mid*mid>key)
        return binary(start,mid-1,key);
    else
        return binary(mid+1,end,key);

}
int main()
{
    int n,i;
    cin>>n;
    int res=binary(1,n,n);
    cout<<res;
}
