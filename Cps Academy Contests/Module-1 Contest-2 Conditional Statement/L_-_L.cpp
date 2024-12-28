#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie();
   
    int n;
    cin >> n;
    
    if(n < 3) cout<< "GOLD" << "\n";
    else if(n >= 6) cout<< "BRONZE" << "\n";
    else cout<< "SILVER" << "\n";


    return 0;
}