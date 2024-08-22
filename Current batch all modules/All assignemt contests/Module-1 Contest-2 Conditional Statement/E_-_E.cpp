#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
  
    int x, y;
    cin >> x >> y;

    if(x < y)
    {
        if(y-x <= 2)
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
        if(x - y <= 3 )
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