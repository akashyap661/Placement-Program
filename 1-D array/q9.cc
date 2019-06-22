#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int run[n],ball[n];
    for(i=0;i<n;i++)
        cin>>run[i];
    for(i=0;i<n;i++)
        cin>>ball[i];
    float max_strike_rate=INT_MIN,strike_rate=0;
    for(i=0;i<n;i++)
    {
        strike_rate=(run[i]*1.0)/(ball[i]*1.0);
        if(strike_rate>max_strike_rate)
            max_strike_rate=strike_rate;
    }
    cout<<max_strike_rate*100;
    return 0;
}
