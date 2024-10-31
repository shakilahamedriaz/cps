#include<bits/stdc++.h>
using namespace std;

bool cmp (const pair<int,int> &p1, const pair<int,int> &p2)
{
    if(p1.first > p2.first) return true; // p1 samne rakhbe
    else if(p1.first == p2.first)  return (p1.second < p2.second);  //sorted by second in ascending order
    else return false;  // p2 samne rakhbe
}

void solution()
{
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    
    sort(v.begin(), v.end(), cmp);

    //for(auto u : v) cout<< u.first << " " << u.second << endl;

    
    int cnt = 0;
    // for(int i = 0; i < n; i++)
    // {
    //     if(v[k-1].first == v[i].first && v[k-1].second == v[k].second)
    //     {
    //         cnt ++;
    //     }
    // }

    for(auto u : v)
    {
        if(u == v[k-1]) cnt ++;
    }
     
    cout<< cnt << "\n";
}
int main()
{  
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solution();

    return 0;
}