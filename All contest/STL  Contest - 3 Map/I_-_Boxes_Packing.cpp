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
   map<ll, ll> frq;

   for(int i = 0; i < n; i++)
   {
       cin >> a[i];
       frq[a[i]]++;
   }
   //sort(a.begin(), a.end());

   //   auto last = mp.rbegin();
   //   cout<<  last->second << endl;

   //last element of the vector
    // cout << frq[a[n-1]] << endl;

    ll mx = 0;
    for(auto u : frq)
    {
        if(u.second > mx)
        {
            mx = u.second;
        }
    }

    cout << mx << endl;
}
 
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    shakil_sol();
    
    return 0;
}
