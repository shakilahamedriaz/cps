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

bool isvowel(char ch) {
   
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void shakil_sol() 
{
   
    vector< string > v;
    int cnt[] = { 5, 7, 5 };

    //taking three lines(string), and store them in a vector
    int n = 3;
    while( n-- )
    {
        string s;
        char c;
        cin >> c;
        getline (cin, s);
        s = c + s;   //prepend character

        v.push_back(s);
    }

    for(int i = 0; i < 3; i++)
    {
        int cn = 0;

        for(auto u : v[i])
        {
           if(isvowel(u)) cn ++;
        }

        if (cn != cnt[i])
        {
            cout<< "NO" << "\n";
            return ;
        }
    
    }

    cout<< "YES" << "\n";

}
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

  
    shakil_sol();
    
   
    return 0;
}
