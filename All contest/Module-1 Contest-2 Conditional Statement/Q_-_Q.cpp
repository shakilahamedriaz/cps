#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie();
   
    
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int m = a*2 + b;
    int r = x*2 + y;

    if(m == r) cout<< "Equal" << "\n";
    else if(m > r) cout<< "Messi" << "\n";
    else cout<< "Ronaldo" << "\n";
    
    
    return 0;
}