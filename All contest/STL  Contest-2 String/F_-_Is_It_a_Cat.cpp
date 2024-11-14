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
    int t;
    cin >> t;
    while(t--)
    {  
       int n;
       cin >> n;
       string s;
       cin >> s;
       for(auto &u : s) 
       {
          u = tolower(u);
       }
       
       string ans = "";

       for(int i = 0; i < n; i++)
       {
          if(s[i] != s[i+1])
          {
             ans += s[i];
          }
       }
 

      cout<< ans << endl;
      if(ans == "meow") cout << "YES" << endl; 
      else if(ans.size() >= 4 && ans.substr(ans.size() - 4) == "meow") cout<< "YES" << endl;
      else cout<< "NO" << endl;

     

    }  
}
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
