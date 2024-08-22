#include<bits/stdc++.h>
using namespace std;

int main()
{  

   int n;
   cin >> n;

   int i = 1;
   bool isPerfectSquare = false;
   
   while( i*i <= n)
   {
      if(i*i == n)
      {
        cout<< "Perfect Squire" << "\n";
        isPerfectSquare = true;
        break;

      }
      i++;
   }

   if(!isPerfectSquare)
   {
      cout<< "Not perfect Square" << "\n";
   }





    return 0;
}