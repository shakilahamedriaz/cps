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

    int n;
    while(cin >> n && n != 0)
    {
            // map<string, int> mp;
            // //int mx_cnt = 0;
            // // string ans;

            // // for(int i = 0; i < n; i++)
            // // {
            // //     string color;
            // //     cin >> color;
            // //     mp[color] ++;

            // //     if(mp[color] > mx_cnt) 
            // //     {
            // //        mx_cnt = mp[color];
            // //        ans = color;
            // //     }

            // // }

            // // cout<< ans << endl;


            vector<string> v;
            for(int i = 0; i < n; i++)
            {
                string color;
                cin >> color;

                v.push_back(color);
            }

            //int k = max_element(v.begin(), v.end()) - v.begin();
            //cout<< v[k] << endl;

            cout<< *max_element(v.begin(), v.end()) << endl;
    }
}
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
 