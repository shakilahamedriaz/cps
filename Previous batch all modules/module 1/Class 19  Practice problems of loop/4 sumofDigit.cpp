#include<bits/stdc++.h>
using namespace std;

int main()
{

   int n;
   cin >> n;
   int sum = 0;

   while( n )
   {
       sum += n % 10;  // add last digit
       n/=10;          // remove last digit
   }
   

   cout<< "sum of digits is : " <<  sum << "\n";


    return 0;
}