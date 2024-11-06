#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie();

    int t;
    cin >> t;
    map<string, int> cnt;
    while( t-- )
    {
        string s;
        cin >> s;
        
        if(cnt[s] == 0) cout<< "OK" << endl;
        else cout<< s << cnt[s] <<endl;

        cnt[s]++;
    }

    return 0;
}