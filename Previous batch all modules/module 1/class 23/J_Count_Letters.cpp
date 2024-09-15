#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll arr[26+1];

int main()
{
   
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    set<char> st;

    for(ll i = 0; i < s.size(); i++)
    {
        arr[s[i] - 'a']++;
        st.insert(s[i]);
    }
    

    for(auto it: st)
    {
       cout<< it << " : " << arr[it - 'a'] << "\n";
    }
 


    return 0;
}