#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795
using namespace std;

int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

struct Runtime 
{
    clock_t start;
    Runtime() {
        start = clock();
    }
    ~Runtime() {
        cout << "Runtime: " << fixed << setprecision(3) << (double) (clock() - start) / CLOCKS_PER_SEC << "s\n";
    }
};

bool isVowel(char c) {
    if( c == 'a' || c == 'o' || c == 'u' || c == 'i' || c == 'e')
    return true;
}

void shakil_sol() 
{
    int t;
    cin >>t;
    while(t--)
    {        
              string s;
              cin >> s;
              int len = s.size();

              for(int i = 0; i < len; i++)
              {
                  if(!isVowel(s[i]) && s[i] != 'n')
                  {
                        if(i+1 >= len || !isVowel[s+1])
                        {
                            cout<< "NO" << endl;
                            return 0;
                        }
                  }
              }
              
              cout<< "YES" << endl;

    }
}
int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}


