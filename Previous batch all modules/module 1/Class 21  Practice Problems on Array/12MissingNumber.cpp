#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mx = 200012;
int isExist[mx] = {0};

int main()
{
   
    ll n;
    cin >> n;
    for(ll i = 1; i <= n-1; i++)
    {
        ll x;
        cin >> x;
        isExist[x]++;
    }

    for(ll i = 1; i <= n; i++)
    {
        if(isExist[i] == 0)
        {
            cout<< i << "\n";
            break;
        }
    }

    return 0;
}