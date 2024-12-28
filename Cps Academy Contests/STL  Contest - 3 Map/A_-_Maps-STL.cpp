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
    int query;
    cin >> query;
    map<string, int > mp;

    while(query--)
    {
        int type;
        cin >> type;
        
        if(type == 1)
        {
            string name; int marks;
            cin >> name >> marks;
            mp[name] += marks;
        }
        else if(type == 2)
        {
            string name;
            cin >> name;
            mp.erase(name);
        }
        else if(type == 3)
        {
            string name;
            cin >> name;
            cout << mp[name] << endl;
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
 