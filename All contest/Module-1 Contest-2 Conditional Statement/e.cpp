#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a, b;
    cin >> a >> b;

    if(a < b)
    {
        if(b-a <= 2)
        {
            cout<< "Yes" << "\n";
        }
        else
        {
            cout<< "No" << "\n";
        }
    }
    else
    {
        if(a-b <=3)
        {
            cout<< "Yes" << "\n";
        }
        else
        {
            cout<< "No" << "\n";
        }
    }
    

    return 0;
}