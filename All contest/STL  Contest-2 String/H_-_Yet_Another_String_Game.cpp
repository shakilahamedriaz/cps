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

     int t; cin >> t;
     while( t-- )
     {
        string s;
        cin >> s;
        vector< int > v;

        string ans = "";

        for(int i = 1; i <= s.size(); i++)
        {
            v.push_back(s[i - 1]);
        }
        
        int i = 0;
        for(auto  &u : v)
        {
           i++;
           if(i%2 == 1)  //alice chose odd
           {
               if(u != 97)
                {
                     u = 97;
                }
                else
                {
                     u = 98;
                }
           }
           else      // bob vai chosen even
           {
                if(u != 122)
                {
                    u = 122;
                }
                else
                {
                    u = 121;
                }
           }
        }
        

        for(auto u : v)
        {
            ans += u;  //convert int to char and stored ans.
        }

        cout<< ans << endl;

     }
     
}
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
 