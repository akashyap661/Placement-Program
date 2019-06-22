#include<iostream>
#include<string>
using namespace std;
int palindrome(char *c,int left,int right)
{
    if(left>right)
        return 1;
    if(c[left]!=c[right])
        return -1;
    return palindrome(c,left+1,right-1);
}
int main()
{
    char str[100];
    cin>>str;
    int len,i=0;
    while(str[i]!=0)
    {
        i++;
    }
    len=i;
    int res=palindrome(str,0,len-1);
    if(res==1)
        cout<<"palindrome";
    else
        cout<<"non palindrome";
    return 0;
}
