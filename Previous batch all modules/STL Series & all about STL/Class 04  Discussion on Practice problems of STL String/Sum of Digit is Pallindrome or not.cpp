#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795

int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

struct Runtime {
    clock_t start;
    Runtime() {
        start = clock();
    }
    ~Runtime() {
        cout << "Runtime: " << fixed << setprecision(3) << (double) (clock() - start) / CLOCKS_PER_SEC << "s\n";
    }
};

bool isvowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

void shakil_sol() 
{

    ll n;
    cin >> n;
    ll sum = 0;

    string str = "";
    string ans = "";

    while(n > 0)
    {
        ll temp = n%10;
        sum += temp;
        n/=10;
    }

    str += to_string(sum);  // convert num to string
    ans = str;              // copy the strng and take in in another

    reverse(ans.begin(), ans.end());

    if(str == ans)
    {
        cout<< "1" << "\n";
    }
    else
    {
        cout<< "0" << "\n";
    }

}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

  
    shakil_sol();
    
   
    return 0;
}
