#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int w, h;
    cin >> w >> h;

    if(60 <= w && 130 >= h)
    {
        cout<< "Yes" << "\n";
    }
    else
    {
        cout<< "No" << "\n";
    }

    return 0;
}