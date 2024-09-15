#include<bits/stdc++.h>
using namespace std;


int main()
{
   
   int n;
   cin >> n;

   int a[n][n];

   for(int i = 0; i < n; i++)
   {
     for(int j = 0; j < n; j++)
     {

       cin >> a[i][j];

     }
   }

   int PrimaryDiagonal = 0, SecondaryDiagonal = 0;
   for(int i = 0; i < n; i++)
   {
      PrimaryDiagonal += a[i][i];  // 11,22,33,44 
     // SecondaryDiagonal += a[i][n - i - 1];
   }

   for(int i = 0, j = n-1; i < n ; i++, j--)
   {
      SecondaryDiagonal +=a[i][j];
   }

   int ans = PrimaryDiagonal - SecondaryDiagonal;
   if(ans < 0) ans *= -1;

   cout << ans << "\n";

    return 0;
}