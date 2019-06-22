#include<iostream>
#include<string>
using namespace std;
void bad_permutation(string s,int start,int end)
{
    if(start==end)
    {
        cout<<s<<endl;
        return;
    }
    int i;
    for(i=start;i<end;i++)
    {
        char temp=s[start];
        s[start]=s[i];
        s[i]=temp;
        bad_permutation(s,start+1,end);
        temp=s[start];
        s[start]=s[i];
        s[i]=temp;
    }

}
int main()
{
    int n,count=0,i;
    cin>>n;
    string s="";
    for(int i=1;i<=9;i++)
    {
        for(int j=i;j<=n;j++)
            s+=('0'+i);
        bad_permutation(s,0,n);
    }

}
