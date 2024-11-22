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


        int  n;
        cin >> n;
        string s;
        cin >> s;
        int k;
        cin >> k;

    
        string ans = "";

        for(int i = 0; i < s.size(); i++)
        {
       
            if(s[i]  >= 65 && s[i] <= 90)
            {
                ans += char(int(s[i] + k - 65) % 26 + 65);
                // if s[i] = a, and k = 3, then 97 + 3 - 97 = 3 % 26 + 97 = 100 % 26 + 97 = 22 + 97 = 119 = w
            }
            else if(s[i] >= 97 && s[i] <= 122)
            {
                ans += char(int(s[i] + k - 97) % 26 + 97);
            }
            else
            {
                ans += s[i];
            }
    
  
        }

        cout<< ans << endl;

    }


int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
