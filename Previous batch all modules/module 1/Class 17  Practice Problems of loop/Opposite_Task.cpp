#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while( t-- )
    {
        int n;
        cin >> n;

        if(n > 10)
        {
            cout<< n - 10 << " " << 10 << "\n";
        }
        else
        {
            cout<< 0 << " " << n << "\n";
        }
    }
}