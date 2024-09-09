#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mx = 200012;
int isExist[mx] = {0};

int main()
{
   
    ll n;
    cin >> n;
    map<ll, ll> mp;

    for(ll i = 1; i <= n-1; i++)
    {
        ll x;
        mp[x]++;
        
    }

    for(auto it: mp)
    {
        cout<< it.first << " " << it.second <<endl;
    }

    return 0;
}