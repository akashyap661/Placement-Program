#include<iostream>>
using namespace std;
int reverse(int n,int temp)
{
    if(n==0)
        return temp;
    temp=temp*10+n%10;
    return reverse(n/10,temp);
}
int main()
{
    int n;
    cin>>n;
    cout<<reverse(n,0);
}
