//Choclate wrapper problem
// Given money price and wrapper
#include<iostream>
using namespace std;
int recwrap(int choco,int wrap)
{
    if(choco<wrap)
        return 0;
    int newno=choco/wrap;
    return newno+recwrap(newno+choco%wrap,wrap);
}
int choco(int money,int price,int wrap)
{
    int no_of_choco=money/price;
    return no_of_choco+recwrap(no_of_choco,wrap);
}
int main()
{
    int money,price,wrap;
    cin>>money>>price>>wrap;
    cout<<choco(money,price,wrap);
    return 0;8i
}
