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

      int n;
      cin >> n;
      vector<int> v(n);

      for(int i = 0; i < n; i++) cin >> v[i];
      int Sereja = 0, Dima = 0, change = 1;

      while( !v.empty() )
      {
        if(change == 1)
        {
            if(v[0] > v.back())
            {
                Sereja += v[0];
                v.erase(v.begin());
            }
            else
            {
                Sereja += v.back();
                v.pop_back();
            }
            change = 2;
        }
        else
        {
            if(v[0] > v.back())
            {
                Dima += v[0];
                v.erase(v.begin());
            }
            else
            {
                Dima += v.back();
                v.pop_back();
            }

            change = 1;
        }

      }

      cout<< Sereja << " " << Dima << "\n";
}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

  
    shakil_sol();
    
   
    return 0;
}
