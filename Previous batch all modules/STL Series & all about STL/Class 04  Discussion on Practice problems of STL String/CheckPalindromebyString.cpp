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

   int digitSum = 0;

   for(auto it : s)
   {
      digitSum += (it - '0'); // convert char to int
      //here is another way : atoi(&it);
   }

    string sa = to_string(digitSum);
    string temp = sa;
    
    reverse(temp.begin(), temp.end());

    if(sa == temp)
    {
        cout<< "Palindrome " << "\n";
    }
    else
    {
        cout<< "not palindrome" << "\n";
    }

}

int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

  
    shakil_sol();
    
   
    return 0;
}
