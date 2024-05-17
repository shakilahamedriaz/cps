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
    int t;
    cin >>t;
    while(t--)
    {
            int n;
            cin >> n;

            int arr[n];
            map<int, int> mp;

            for(int i=0; i<n; i++)
            {
                    cin >> arr[i];
                    mp[arr[i]]++;
            }
    
                    string s;
                    cin >> s;

                    //chaeck all elements are same or not , if same then falg will be true
                    bool flag = true;
                    for(int i=0; i<n-1; i++)
                    {
                        if(s[i] != s[i+1])
                        {
                            flag = false;
                            break;
                        }
                    }

                    if(flag == true)
                    {
                        cout << "YES" << '\n';
                        
                    }
                    else
                    {
                    map<char, int> mp2;
                    for(int i=0; i< n; i++)
                    {
                        mp2[s[i]]++;
                    }

                    bool f1 = false, f2 = false;

                    for(auto it: mp)
                    {
                        if(it.second == 1)
                        {
                            f1 = true;
                        }
                    }

                    for(auto it2: mp2)
                    {
                        if(it2.second == 1)
                        {
                            f2 = true;
                        }
                    }

                    if(f1 == true && f2 == true)
                    {
                        cout << "YES" << '\n';
                    }
                    else
                    {
                        cout << "NO" << '\n';
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
