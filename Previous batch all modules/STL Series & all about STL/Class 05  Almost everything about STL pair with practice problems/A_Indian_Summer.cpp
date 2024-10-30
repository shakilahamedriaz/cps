#include<bits/stdc++.h>
using namespace std;

int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    vector< pair<string, string > > v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    
    // //this is also correct called : range based loop/for each loop
    // for(auto &it : v)
    // {
    //     cin >> it.first >> it.second;
    // }
    
    sort(v.begin(), v.end()); // must be sorted before making unique
    int sz = unique(v.begin(), v.end()) - v.begin();

    cout<< sz << "\n";
    
    // //we can fnd tese all unique pair
    // for(int i = 0; i < sz; i++)
    // {
    //     cout<< v[i].first << " " << v[i].second << "\n";
    // }

    return 0;
}