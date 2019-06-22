#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
void print(char *c,int start,int end)
{
    if(start==end)
    {
        if(atoi(c)%7==0)
            cout<<c<<endl;
        return;
    }
    for(int i=1;i<=9;i++)
    {
        c[start]='0'+i;
        print(c,start+1,end);
    }
}
int main()
{
    int n;
    cin>>n;
    char s[n+1];
    s[n]='\0';
    print(s,0,n);
}
