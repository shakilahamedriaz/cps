#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#define ll long long
#define ld long double
#define PI 3.1415926535897932384626433832795
#define endl "\n"

int gcd(int a, int b) { return (a % b == 0) ? b : gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }


void shakil_sol()
{

  int n, q;
  cin >> n >> q;
  map<string, string> ipName;
  for(int i = 0; i < n; i++)
  {
     string name, ip;
     cin >> name >> ip;
     ipName[ip] = name;
  }

  while(q--)
  {
     string s1, ip;
     cin >> s1 >> ip;
     ip.pop_back();

     cout<< s1 << " " << ip << "; #" << ipName[ip] << endl;
  }

}
 
int32_t main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    shakil_sol();
    
    return 0;
}
