#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795
#define endl "\n"

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

void shakil_sol() 
{
   string s;
   cin >> s;
   string ans = ""; //take as stack
 
   for(int i = 0; i < s.size(); i++)
   {
      if(ans.size() && ans.back() == s[i])
      {
          ans.pop_back();
      }
      else
      {
          ans.push_back(s[i]);
      }
   }

   if(ans.size()) cout<< ans << endl;
   else cout<< "Empty String" << endl;

    
}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
