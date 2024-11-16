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
 
bool isVowel( char ch){

    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
 
void shakil_sol() 
{

     vector< string > v;
     int cnt [] = {5, 7, 5};

     int  n = 3;
     while( n --)  //taking three lines string, and store in vector
     {
        string s;
        char c;
        cin >> c;
        getline(cin , s);
        s = c + s;

        v.push_back(s);
     }

     //for(auto u : v) cout<< u <<  " ";
     //on  codeforces  beta round is running    a rustling of keys
     
    // cout<<" v size : " << v.size() << endl;  -- > 3
     for(int i = 0; i < 3; i++)
     {
        int cn = 0;

        for(auto u : v[i])  // frist, second, 3rd v
        {
            if(isVowel(u)) cn ++;
        }
        if(cn != cnt[i])
        {
            cout<< "NO" << "\n";
            return;
        }
     }

     cout<< "YES" << endl;

}
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
 