#include<bits/stdc++.h>
using namespace std;

const int mx = 1e6 + 123;
char s[mx];

int main()
{
  
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
   
   cin >> s;

   int sum = 0;
   int i = 0;
    while(s[i] != '\0')
    {
        sum += (s[i] - '0');
        i++;
    }

    cout << sum << "\n";

    return 0;
}