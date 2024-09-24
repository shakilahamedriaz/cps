#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll n;
    cin >> n;
    ll arr[n+10];

    for(ll i = 01; i <= n; i++)
    {
        cin >> arr[i];
    }
    
    ll cnt = 0;
    for(ll i = 1; i < n; i++)
    {
        if(arr[i] > arr[i+1])
        {
          
           ll temp = arr[i] - arr[i+1];
           arr[i+1] = arr[i];
           cnt +=temp;
        }

    }

    cout<< cnt << "\n";

    return 0;
}
