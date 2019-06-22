#include<iostream>
using namespace std;
void generate(char *s,int start,int end)
{
    if(start==end)
    {
        cout<<s<<endl;
        return;
    }
    s[start]='0';
    generate(s,start+1,end);
    s[start]='1';
    generate(s,start+1,end);
}
int main()
{
    int k;
    cin>>k;
    char str[k+1];
    str[k]='\0';
    generate(str,0,k);
}
