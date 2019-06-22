#include<iostream>
#include<string>
using namespace std;
void reverse(char *c,int left,int right)
{
    if(left>right)
        return;
    char temp=c[left];
    c[left]=c[right];
    c[right]=temp;
    reverse(c,left+1,right-1);
}
int main()
{
    char str[100];
    cin>>str;
    int len=0;
    while(str[len]!=0)
    {
        len++;
    }
    reverse(str,0,len-1);
    cout<<str;
    return 0;
}
