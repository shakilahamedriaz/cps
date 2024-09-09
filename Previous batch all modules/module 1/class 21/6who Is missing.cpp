#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    map<int, int> mp;

    for(int i = 1; i <= 4*n -1; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    for(auto it: mp)
    {
        if(it.second < 4)
        {
            cout<<it.first << "\n";
            break;
        }
    }

    return 0;
}