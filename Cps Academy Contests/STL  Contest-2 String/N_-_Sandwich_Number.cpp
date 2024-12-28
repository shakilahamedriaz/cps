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
   cin >> s;

   ll len = s.size();
   
   if(s.size() < 8) cout<< "No";
   else
   {
        bool check = false;
        if ((s[0] >= 65 && s[0] <= 90) && (s[len-1] >= 65 && s[len-1] <= 90))
        check = true;
        
        string nm = "";
        bool ok = true;

        for(ll i = 1; i < len-1; i++) 
        {
            if(s[i] >= 65 && s[i] <= 90)
            {
                ok = false;
            }
            else
            {
                nm +=s[i];
            }
        }
        
        ll k = stoi(nm);
        if(k >= 100000 && k <= 999999)
        check = true;
        
        else check = false;

        if(check && ok) cout<< "Yes" << endl;
        else      cout<< "No" << endl;

   }
}
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
 