#include<bits/stdc++.h>
using namespace std;

const int mx = 2e8+12;
bool isPerfectSquare[mx];  // array, where all perfect square is available

int main()
{
   
   int n;
   cin >> n;

   //take all the perfect square in an map array
   for(int i = 1; i<=n; i++)
   {
      isPerfectSquare[i*i] = 1;
   }
   
   int cnt = 0;
   for(int a = 1; a <=n; a++)
   {
      for(int b = a; b<=n; b++)
      {
         int v = (a*a) + (b*b);
         if(isPerfectSquare[v])
         {
            cnt ++;
         }
      }
   }

    cout<< cnt << "\n";

    return 0;
}