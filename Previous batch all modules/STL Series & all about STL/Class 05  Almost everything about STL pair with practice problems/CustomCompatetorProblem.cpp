#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int> &p1, const pair<int, int> &p2)
{
    if(p1.first > p2.first) return true;  // Sort by first element in descending order
    else if(p1.first == p2.first) return (p1.second < p2.second);  // If first elements are equal, sort by second in ascending order
    else return false; // If first elements are not equal, sort by first element in descending order
}

void solution()
{
    vector< pair< int, int > > v;
    v = { {4,133}, {3, 120}, {4, 500}, {1, 20} };

    sort(v.begin(), v.end(), cmp);  // Sort using custom comparator

    for(auto u : v) cout<< u.first << " " << u.second << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solution();

    return 0;
}