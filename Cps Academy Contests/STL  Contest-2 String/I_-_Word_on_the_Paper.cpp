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

    while(t--)
    {

        char arr[8][8];
        string ans = "";

        for(int i = 0; i < 8; i++)
        {
            for(int j = 0; j < 8; j++)
            {
                cin >> arr[i][j];
                if(arr[i][j] != '.') ans += arr[i][j];
            }
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
 