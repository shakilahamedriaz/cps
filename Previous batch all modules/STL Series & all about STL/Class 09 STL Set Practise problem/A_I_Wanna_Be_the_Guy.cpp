#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795
 
int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }
 
void shakil_sol() 
{

    set<int> st;

    int t;
    cin >> t;
 
            int p;
            cin >> p;
            for(int i  = 0; i < p; i++)
            {
                int x; cin >> x;
                st.insert(x);
            }
            
            int q; cin >> q;
            for(int i = 0; i< q; i++)
            {
                int x; cin >> x;
                st.insert(x);
            }
    
    
   
//         bool check = true;
//         for(int i = 1; i <= t; i++)
//         {
//             if(st.count(i) != 1)
//             {
//                 check = false;
//                 break;
//             }
//         }

//         if(check) cout<< "I become the guy." << "\n";
//         else cout<< "Oh, my keyboard!" << "\n";

       if(st.size() == t) cout<< "I become the guy." << "\n";
       else             cout<< "Oh, my keyboard!" << "\n";
}
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
