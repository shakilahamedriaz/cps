#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795
#define endl "\n"
 
int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
 

void shakil_sol() 
{
   
   int n, m;
   cin >> n >> m;
   
   vector<string> s(n);
   vector<string> t(m);
   for(int i = 0; i < n; i++) cin >> s[i];
   for(int i = 0; i < m; i++) cin >> t[i];
   

   set<string> t_set(t.begin(), t.end());

   //count the number of matching string
   int count = 0;
   for(auto u : s)
   {
      string check = u.substr(u.size() - 3);
      if(t_set.find(check) != t_set.end())
      {
         count ++;
      }
   }

   cout<< count << endl;
}
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
 