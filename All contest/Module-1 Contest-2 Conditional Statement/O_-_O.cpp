#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie();
   
    int x, y;
    cin >> x >> y;

    if(x == y)
    {
         cout<< "Same" << "\n";
    }
    else if(x < y)
    {
        cout<< "Old" << "\n";
    }
    else
    {
        cout<< "New" << "\n";
    }
    
    
    return 0;
}