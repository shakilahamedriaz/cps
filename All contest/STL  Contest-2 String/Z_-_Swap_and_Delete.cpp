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
        string s;
        cin >> s;
        int zeros = 0, ones = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0') zeros ++;
            else ones ++;
        }
        
        int step = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
            {
                if(zeros == 0) break;
                zeros --;
            }
            else if(s[i] == '0')
            {
                if(ones == 0) break;
                ones --;
            }
        }

        cout<< ones + zeros << endl;

    }
}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
