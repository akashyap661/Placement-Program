#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
int b2d(char *c,int last,int exp)
{
    if(last<0) return 0;
    return (c[last]-'0')*pow(2,exp)+b2d(c,last-1,exp+1);
}
int main()
{
    char c[30];
    cin>>c;
    int len=strlen(c);
    cout<<b2d(c,len-1,0);
    return 0;
}
