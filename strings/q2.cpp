#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int len=sizeof(str),count=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]>='0' && str[i]<='9')
            count++;
    }
    cout<<count;
    return 0;
}
