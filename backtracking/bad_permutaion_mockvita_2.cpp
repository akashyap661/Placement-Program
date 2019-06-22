#include<iostream>
#include<string>
using namespace std;
void bad_permutation(string s,int start,int end)
{
    if(start==end)
    {
        int flag=0;
        for(int i=0;i<end;i++)
        {
            if(s[i+1]-s[i]==1)
            {
                flag++;
                break;
            }
        }
        if(flag==0)
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
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            count++;
    }
    string s="";
    for(int i=1;i<=count;i++)
        s+=('0'+i);
    bad_permutation(s,0,count);

}
