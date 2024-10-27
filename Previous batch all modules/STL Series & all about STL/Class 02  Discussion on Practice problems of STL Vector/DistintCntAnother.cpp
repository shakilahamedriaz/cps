#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795

int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

struct Runtime {
    clock_t start;
    Runtime() {
        start = clock();
    }
    ~Runtime() {
        cout << "Runtime: " << fixed << setprecision(3) << (double) (clock() - start) / CLOCKS_PER_SEC << "s\n";
    }
};


void shakil_sol() 
{
    int t;
    cin >> t;
    while( t-- )
    {
        int n, x;
        cin >> n >> x;
        vector< ll > v(n);
        set<int> st;

        for(ll i = 0; i < n; i++) 
        {
            cin >> v[i];
            st.insert(v[i]);
        }
      
        int sz = st.size();

        if(sz == x) cout<< "Good" << "\n";
        else if(sz < x) cout<< "Bad" << "\n";
        else cout<< "Average" << "\n";
    }
}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

  
    shakil_sol();
    
   
    return 0;
}
