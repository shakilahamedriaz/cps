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
      
    string s;
    getline(cin, s);

    set< char > st;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != ' ')
        {
            st.insert(tolower(s[i]));
        }
    }
    
    if(st.size() == 26) cout<< "pangram" << endl;
    else                cout<< "not pangram" << endl;
}
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
