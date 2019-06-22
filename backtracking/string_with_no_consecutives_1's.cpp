#include<iostream>>
using namespace std;
void generate(char *s,int start,int end)
{
    if(start==end)
    {
        cout<<s<<endl;
        return;
    }
    if(s[start-1]=='1')
    {
        s[start]='0';
        generate(s,start+1,end);
    }
    else
    {
        s[start]='0';
        generate(s,start+1,end);
        s[start]='1';
        generate(s,start+1,end);
    }
}
int main()
{
    int n;
    cin>>n;
    char str[n+1];
    str[n]='\0';
    str[0]='0';
    generate(str,1,n);
    str[0]='1';
    generate(str,1,n);
}
