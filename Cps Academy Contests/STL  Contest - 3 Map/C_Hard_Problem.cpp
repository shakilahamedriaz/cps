#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795
#define endl "\n"

int gcd(int a, int b) { return (a % b == 0) ? b : gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

void shakil_sol() 
{

    int t;
    cin >> t;
    while(t--)
    {
        ll m, a, b, c;
        cin >> m >> a >> b >> c;

        ll r1 = min(a, m);
        ll r2 = min(b, m);

        ll rem1 = m - r1;
        ll rem2 = m - r2;

        ll total = rem1 + rem2;

        ll no = min(c, total);

        ll ans = r1 + r2 + no;

        cout << ans << endl;
    }

}


int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    shakil_sol();
    
    return 0;
}
