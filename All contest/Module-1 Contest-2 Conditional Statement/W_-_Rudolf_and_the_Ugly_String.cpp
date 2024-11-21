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
   int t;
   cin >> t;
   while( t-- )
   {
      int n ;
      cin >> n;
      string s;
      cin >> s;

      if(n < 3) 
        {
            cout<< 0 << endl;
            continue;
        }
        int cnt = 0;
        for(int i  = 0; i < n; i++)
        {
                if(s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p')
                {
                    cnt ++;
                }
                if(s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e')
                {
                    cnt ++;
                }
        }

        cout<< cnt << endl;


   }

    
}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
