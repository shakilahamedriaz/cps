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
    vector<pair<int, int>> v;
    v = { {4,133}, {3, 120},{3, 111}, {4, 500}, {1, 20} };

    for(auto &u : v)  u.first *= -1;  // Multiply first element of each pair by -1 ( with reference &u )
    
    sort(v.begin(), v.end());
    
    for(auto u : v) cout<< u.first << " " << u.second << "\n";

}
int main()
{  
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solution();

    return 0;
}