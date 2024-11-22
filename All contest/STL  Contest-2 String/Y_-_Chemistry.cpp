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
    int t ;
    cin >> t;
    while( t-- )
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char, int > map;

        for(int i = 0; i < n; i++)
        {
            mp[s[i]] ++;
        }

        for(auto u : mp)
        {
            
        }
        


    }
}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
