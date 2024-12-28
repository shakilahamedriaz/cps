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
      
     string s, s2;
     cin >> s >> s2;

     

     transform(s.begin(), s.end(), s.begin(), :: tolower);
     transform(s2.begin(), s2.end(), s2.begin(), :: tolower);

     if(s == s2) cout<< "0" << endl;
     else if(s < s2) cout<< "-1" << endl;
     else cout<< "1" << endl;

}
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
