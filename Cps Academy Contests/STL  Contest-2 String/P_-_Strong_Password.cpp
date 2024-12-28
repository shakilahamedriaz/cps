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
   int n;
   cin >> n;
   string s;
   cin >> s;

    int digit = 1, upper = 1, lower = 1, special = 1;

    for(int i  = 0; i < n; i++)
    {
        if(s[i] >= 48 && s[i] <= 57)
        {
            digit = 0;
        
        }
   

        if(s[i] >= 65 && s[i] <= 90)
        {
            upper = 0;
            
        }
   
        if(s[i] >= 97 && s[i] <= 122)
        {
            lower = 0;
        }
    

        if (s[i] == '!' || s[i] == '@' || s[i] == '#' || s[i] == '$' || 
            s[i] == '%' || s[i] == '^' || s[i] == '&' || s[i] == '*' || 
            s[i] == '(' || s[i] == ')' || s[i] == '-' || s[i] == '+') 
        {
            special = 0;
            
        }
    }  

    int total = digit + upper + lower + special;

    if( n >= 6)
    {
        cout << total << endl;
    }
    else
    {
       int need = 6 - n;
       cout<< max(need, total) << endl;
    }
    
}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    shakil_sol();
    
    return 0;
}
