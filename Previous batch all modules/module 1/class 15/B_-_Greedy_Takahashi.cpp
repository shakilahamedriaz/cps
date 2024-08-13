#include <bits/stdc++.h>
using namespace std;

int main()
{
    
     long long a, b, k;
     cin >> a >> b >> k;

     long long ans = a + b;
     if(ans <= k)
     {
         cout << "0 0" << "\n";
     }
     else if(a >= k)
     {
        
        cout<< a - k << " " << b << "\n";
     }
     else if(a < k && a + b > k)
     {
        // long long temp = k - a;
        // long long temp2 = b - temp;
        // cout<< 0 << " " << temp2 << "\n";

        cout<< 0 << " " << (a + b) - k << "\n";
     }
 
    return 0;
}