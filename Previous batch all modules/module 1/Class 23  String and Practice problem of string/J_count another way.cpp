#include<bits/stdc++.h>
using namespace std;
#define ll long long

//ll arr[26+1];

int main()
{
   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    map<char, int> mp;

    for(ll i = 0; i < s.size(); i++)
    {
       // arr[s[i] - 'a']++;
        mp[s[i]]++;
      
    }
    
   
    // for(ll i = 0; i < 26; i++)
    // {
    //     if(arr[i] > 0)   //
    //     {
    //         cout<< (char)(i + 'a') << " : " << arr[i] << "\n";
    //     }
    // }

    for(auto it: mp)
    {
       cout<< it.first << " : " << it.second << "\n";
    }

    return 0;
}