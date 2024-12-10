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

   int n, k;
   cin >> n >> k;
   map<string, int> freq_map;
   set<string> st;

   for(int i = 0; i < n; i++){
       string s;
       int t;
       cin >> s >> t;
       freq_map[s] = t;
       st.insert(s);
   }


   int size = st.size();
   cout<< size << endl;
   cout<< freq_map.size() << endl;
   if(size <= k){

      int total_spare = 0;
      for(auto &u : freq_map){
         total_spare += u.second;
      }
      cout<< total_spare << endl;

   }

}
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    shakil_sol();
    
    return 0;
}
