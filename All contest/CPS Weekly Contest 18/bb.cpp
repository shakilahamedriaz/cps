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



void shakil_sol() 
{
    ll t;
    cin >>t;
    while(t--)
    {        
          ll n, q;
          cin >> n >> q;
          ll arr[n];
    
          for(ll i = 0; i < n; i++)  
          {
                cin >> arr[i];
          }

          
          while(q--)
          {

                 ll l, r;
                 cin >> l >> r;
                 
            
                     ll sum = 0 , odd = 0, even = 0;
                     
                     for(ll i = 0; i < n; i++)
                     {
                           
                           if(arr[i] % 2 == 0)
                           {
                               arr[i] += r;
                               even++;
                           }
                           else if(arr[i] % 2 == 1)
                           {
                               arr[i] += r;
                               odd++;
                               
                           }
 
                         sum += arr[i];
                     }
                     
                     if(l == 0)
                     {
                         cout<< sum  << '\n';
                         
                     }
                     else
                     {
                         cout<< sum  << '\n';
                         
                     }
                     
                  


          }
        
 
    }
}
int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}