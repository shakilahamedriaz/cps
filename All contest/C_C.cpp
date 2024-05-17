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
    // int t;
    // cin >>t;
    // while(t--)
    // {
               string str1, str2;
               cin >> str1 >> str2;
               
               reverse(str1.begin(), str1.end());
               reverse(str2.begin(), str2.end());

              int len1 = str1.size();
              int len2 = str2.size();

              int k= max(len1, len2);
              int ans = 0 , cnt =0;

              if(str1[0] != str2[0])
              {
                          ans = len1 + len2;
              }
              
              else
              {
                for(int i=0; i<min(len1, len2); i++)
                {
                         if(str1[i] == str2[i])
                         {
                            cnt ++ ;
                         }  
                }

                            ans = (len1+len2) - (cnt*2);
            }
                     
                     
                            cout<< ans << '\n';
                       
   // }
}


int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}
