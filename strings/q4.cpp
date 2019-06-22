
#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string c;
    char x;
    int a[26]={0},i=0,index,max=INT_MIN;
    cin>>c;
    cout<<c<<endl;
    while(c[i]!=0)
    {
        index=c[i]-'a';
        a[index]++;
        ++i;
    }
    for(i=0;i<26;i++)
    {
        if(a[i]>max)
            {
                max=a[i];
                index=i;
            }
    }
    x='a'+index;
    cout<<x;
    return 0;
}
