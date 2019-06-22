#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int i;
    cin>>str;
    int len=sizeof(str);
    for(i=0;i<len;i++)
    {
        str[i]=str[i]-'a'+'A';
    }
    cout<<str;
    return 0;
}
