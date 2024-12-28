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


void shakil_sol(){

    int n;
    cin >> n;
    unordered_map<string, int> freq_map;  
    
    //read the string and count their frequencies
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        freq_map[s]++;
    }

    //find the maximum frequency count
    int mx_frq_cnt = 0;
    for(auto &u : freq_map){
        mx_frq_cnt = max(u.second, mx_frq_cnt);
    }

    //collect strings with the maximum frequency & store in ans vector
    vector<string> ans;
    for(auto &u : freq_map){
        if(u.second == mx_frq_cnt){
            ans.push_back(u.first);
        }
    }

    //sort to get lexicographical order
    sort(ans.begin(), ans.end());
    for(auto &str : ans){
        cout<< str << endl;
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
