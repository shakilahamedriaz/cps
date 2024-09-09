#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll n;
    cin >> n;
    ll sum = 0;

    for(ll i = 1; i <= n-1; i++)
    {
        ll x;
        cin >> x;
        sum+=x;
    }

    ll nthsum = (n*(n+1))/2;
    ll ans = nthsum - sum;
    cout<< ans << "\n";


    return 0;
}