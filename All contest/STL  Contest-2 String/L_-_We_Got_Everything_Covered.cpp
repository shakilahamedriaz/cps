#include<bits/stdc++.h>
using namespace std;

void solve()
{

     int t;
     cin >> t;
     while( t-- )
     {
          int n, k;
          cin >> n >> k;

          string s = "";

            for( int i = 1; i <= k; i++ )
            {
                 s += (char)(i + 96);
            }

            string ans = "";
            while( n -- )
            {
                ans += s;
            }

            cout<<  ans << endl;
     }


}

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL); cout.tie(NULL);

     solve();

     return 0;
}