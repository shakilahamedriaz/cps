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


void shakil_sol() 
{

    string s;
    cin >> s;
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    s.erase(remove(s.begin(), s.end(), 'a'), s.end());
    s.erase(remove(s.begin(), s.end(), 'e'), s.end());
    s.erase(remove(s.begin(), s.end(), 'i'), s.end());
    s.erase(remove(s.begin(), s.end(), 'o'), s.end());
    s.erase(remove(s.begin(), s.end(), 'u'), s.end());
    s.erase(remove(s.begin(), s.end(), 'y'), s.end());
    
    
    for(auto c : s)
    {
        cout << "." << c;
    }
    cout << endl;

}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

  
    shakil_sol();
    
   
    return 0;
}
