#include<iostream>
#include<string>
using namespace std;
int main()
{
    int count=0,i=0;
    char str[100];
    cin.getline(str,sizeof(str));
    while(str[i]!=0)
    {
        if(str[i]==32)
            count++;
        i++;
    }
    cout<<count+1;
    return 0;
}
