#include<iostream>
#include<string>
using namespace std;
int main()
{
    char str[100];
    int max=INT_MIN,localmax=0,i=0,index;
    cin>>str;
    while(str[i]!=0)
    {
        if(str[i]>='0' && str[i]<='9')
            localmax++;
        else
            localmax=0;
        if(localmax>max)
        {
            max=localmax;
            index=i;
        }
        i++;

    }
    for(i=index-max+1;i<=index;i++)
        cout<<str[i];
    return 0;
}
