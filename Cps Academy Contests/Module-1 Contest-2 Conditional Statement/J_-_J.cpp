#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie();

    int d, r, k;
    cin >> d >> r >> k;
    if(d > r && d > k )
    {
        cout<< "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}