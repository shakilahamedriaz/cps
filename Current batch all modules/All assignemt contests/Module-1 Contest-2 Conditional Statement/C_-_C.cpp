#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
  
     int a, b, c;
     cin >> a >> b >> c;

    
     if(a < b && b < c)
     {
         cout<< "Yes" << "\n";
     }
     else
     {
        cout<< "No" << "\n";
     }
     

    return 0;
}