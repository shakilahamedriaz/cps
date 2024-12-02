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
   
   string str;
   cin >> str;
//    map<char, int > mp;

//    for(auto u : str)
//    {
//       mp[u]++;
//    }
   
//    int cnt = 0;
//    for(auto u : mp)
//    {
//       if(u.second == 2) cnt ++;
//    }

//    if(cnt == 2) cout << "Yes" << endl;
//    else         cout << "No"  << endl;

    
    set<char> st;
    for(auto u : str)
    {
        st.insert(u);
    }

    if(st.size() != 2)
    {
        cout<< "No" << endl;
    }
    else
    {
        cout<< "Yes" << endl;
    }

    

}
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
 