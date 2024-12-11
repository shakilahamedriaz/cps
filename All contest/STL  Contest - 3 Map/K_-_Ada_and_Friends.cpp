#include <bits/stdc++.h>
using namespace std;
// #pragma GCC optimize("Ofast,unroll-loops")
// #pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795
#define endl "\n"

int gcd(int a, int b) { return (a % b == 0) ? b : gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }


void shakil_sol()
{

   int n, k;
   cin >> n >> k;
   map<string, ll> freq_map;

   for(int i = 0; i < n; i++){
       string s;
       ll t;
       cin >> s >> t;
       freq_map[s] += t;
      
   }

   //store all expense in a vecor
   vector<ll> exp;
   for(auto &u : freq_map){
      exp.push_back(u.second);
   }

   sort(exp.rbegin(), exp.rend());


   ll total_spare = 0;
   for(ll i = 0; i < min(k, (int)exp.size()); i++){
      total_spare += exp[i];
   }

   cout<< total_spare << endl;

}
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    shakil_sol();
    
    return 0;
}
