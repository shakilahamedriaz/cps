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
    while( t-- )
    {
        int n;
        cin >> n;
        if(n <= 28)
        {
            cout<< "aa" << char((n - 2) + 96) << endl;
        }
        else
        {
            if(n <= 53)
            cout<< "a" << char((n - 27) + 96) << "z" << endl;
            
            else  //avobe 53 to constrain 78
            cout<<  char((n - 52) + 96 )  << "zz" << endl;
            
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
 