#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795
#define endl "\n"

int gcd(int a, int b) { return (a % b == 0) ? b : gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

void shakil_sol() 
{

    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;

    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    
    ll cnt = 0;
    for(auto p : mp)
    {
        if(p.second < p.first)
        {
            cnt += p.second;
        }
        else
        {
            cnt += p.second - p.first;
        }
    }

    cout << cnt << endl;

}
 
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    shakil_sol();
    
    return 0;
}
