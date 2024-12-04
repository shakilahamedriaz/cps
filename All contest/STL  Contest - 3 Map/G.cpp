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
   
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++)
    {
        int n, r;
        cin >> n >> r;
        map<pair<int,int>, int> mp;
        bool check = false;

        while( r-- )
        {
            int id, sub;
            cin >> id >> sub;
            mp[{id, sub}] ++;

            if(mp[{id, sub}] > 1)
            {
                check = true;
            }
        }

  
        cout<< "Scenario #" << i+1 << ": " ;

        if(check)
        {   
         
            cout<< "impossible" << endl;
        }
        else
        {
            cout<< "possible" << endl;
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
 