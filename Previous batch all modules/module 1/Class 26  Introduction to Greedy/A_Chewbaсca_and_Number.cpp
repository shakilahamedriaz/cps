#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    string s;
    cin >> s;

    char zth = s[0];
    ll len = s.size();
    
    for(ll i = 0; i < len; i++)
    {
        //convert character to digit
        int t = s[i] - '0';
        int revDigit = 9 - t;

        if(revDigit < t)
        {
            s[i] = revDigit + '0';  // digit to character
        }

    }

    if(s[0] == '0')
    {
        s[0] = zth;  // first index don't be zero, so it it is then replase it previous;
    }

   for(ll i = 0; i < len; i++)
   {
     cout<< s[i];
   }

    return 0;
}