#include<iostream>>
using namespace std;
int palindrome(int num,int temp)
{
    int x;
    if(num==0)
        return temp;
    x=num%10;
    temp=temp*10+x;
    return palindrome(num/10,temp);
}
int main()
{
    int n,res;
    cin>>n;
    res=palindrome(n,0);
    if(res==n)
        cout<<"palindrome";
    else
        cout<<"not palindrome";
}
