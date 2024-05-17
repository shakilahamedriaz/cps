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

                    vector<int> v;
                    vector<int> v2;

                    for(auto it: mp)
                    {
                        v.push_back(it.second);
                    }
                    map<char, int> mp2;
                    for(int i=0; i< s.size(); i++)
                    {
                        mp2[s[i]]++;
                    }

                    for(auto it2: mp2)
                    {
                        v2.push_back(it2.second);
                    }

                    sort(v.begin(), v.end());
                    sort(v2.begin(), v2.end());

                    //print these two vectors

                    for(auto it: v)
                    {
                        cout << it << " ";
                    }
                    cout << '\n';

                    for(auto it2: v2)
                    {
                        cout << it2 << " ";
                    }
                    cout << '\n';

                    
                
          
                       
    }
}


int32_t main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}
