#include<bits/stdc++.h>
using namespace std;

int main()
{
   
//    int number = 231;        // number = 231
   long long number; cin >> number;
   
   int c = number % 10;     /// c = 1
   number = number / 10;    /// number = 23

   int b = number % 10;    ///  b = 3
   number = number / 10;   ///  number = 2

   int a = number % 10;    ///  a = 2
    


   long long abc = 0;             /// abc  = 0;

   abc = abc + a;           /// abc= 0 + 2 = 2;
   abc = abc * 10;          /// abc = 2 * 10 = 20

   abc = abc + b;           /// abc = 20 + 3 = 23
   abc = abc * 10;          /// abc = 23 * 10 = 230

   abc = abc + c;           /// abc = 230 + 1 = 231


   long long bca = 0;             /// bca = 0;

   bca = bca + b;           /// bca = 0 + 3;
   bca = bca * 10;          /// bca = 3 * 10 = 30

   bca = bca + c;           /// bca = 30 + 1;
   bca = bca * 10;          /// bca = 31 * 10 = 310

   bca = bca + a;           /// bca = 310 + 2 = 312


   long long cab = 0;             /// cab = 0;

   cab = cab + 1;           /// cab = 0 + 1 = 1
   cab = cab * 10;         /// cab = 1 * 10 = 10

   cab = cab + a;         /// cab = 10 + 2 = 12
   cab = cab * 10;        /// cab = 12 * 10 = 120

   cab = cab + b;         // cab = 120 + 3 = 123


   long long ans = abc + bca + cab;

   cout<< ans << endl;


    return 0;
}