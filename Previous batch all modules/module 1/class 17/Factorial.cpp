#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{ 

    ll t;
    cin >> t;
    while( t-- )
    {
        int n;
        cin >> n;
        ll fact = 1;
        for(int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        cout<< fact << "\n";
    }

    return 0;
}