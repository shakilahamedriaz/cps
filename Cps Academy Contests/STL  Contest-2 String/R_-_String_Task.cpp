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
 
bool isvowel(char ch)
{

    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y');

} 

void shakil_sol() 
{

     string s;
     cin >> s;
     string ans = ".";
     
     for(auto u : s)
     {
       u = tolower(u);
       if(!isvowel(u))
       {
           ans += tolower(u);
           ans += '.';
       }
     }
     
     ans.pop_back();
     cout << ans << endl;
     
}
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
 