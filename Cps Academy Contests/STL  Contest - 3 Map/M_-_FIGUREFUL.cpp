#include <bits/stdc++.h>
using namespace std;

void shakil_sol()
{
    int n;
    cin >> n;
    map<pair<int, int>, string> mp;

    for(int i = 0; i < n; i++)
    {
        int x, y;
        string s;
        cin >> x >> y >> s;

        mp[{x, y}] = s;
    }

    int q;
    cin >> q;

    while(q--)
    { 
        int x, y;
        cin >> x >> y;

        cout << mp[{x, y}] << endl;
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