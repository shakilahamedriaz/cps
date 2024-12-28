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
       string s;
       cin >> s;
       
       s = s.substr(0, s.size() / 2);
       
    //    int n = unique(s.begin(), s.end()) - s.begin(); 
    //    //it returns the iterator to the end of the unique elements
    //    if(n == 1) cout<< "NO" << endl;
    //    else cout<< "YES" << endl;

    set<char> st;
    
    for(auto u : s) st.insert(u);

    if(st.size() == 1) cout<< "NO" << endl;
    else cout<< "YES" << endl;

       
    }
}
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
 