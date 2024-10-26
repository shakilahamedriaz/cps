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
      int arr[n];
      for(int i = 0; i < n; i++)
      {
         cin >> arr[i];
      }

      int l = 0, r = n - 1;
      int s = 0, d = 0, f = 1;

      while(l <= r)
      {
        if(f == 1)
        {
            if(arr[l] > arr[r])
            {
                s += arr[l];
                l++;
            }
            else
            {
                s += arr[r];
                r--;
            }

            f = 2;
        }
        else
        {
            if(arr[l] > arr[r])
            {
                d += arr[l];
                l++;
            }
            else
            {
                d += arr[r];
                r--;
            }

            f = 1;
        }

      }
     
     cout<< s << " " << d << "\n";

}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

  
    shakil_sol();
    
   
    return 0;
}
