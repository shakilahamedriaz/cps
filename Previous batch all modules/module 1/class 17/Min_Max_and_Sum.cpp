#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{ 

    ll n;
    cin >> n;
    
    ll min = 1000000 + 10;  //maximum infinity for this case
    ll mx  = -1000000 - 10; //minimum infinity for this case
    
    ll sum = 0;

    for(ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a; 
        sum += a;

        if( min > a )
        {
            min = a;
        }

        if( mx < a )
        {
           mx = a;
        }

    }

    cout<< min << " " << mx << " " << sum << "\n";

    return 0;
}