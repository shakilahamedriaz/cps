#include<bits/stdc++.h>
using namespace std;

int main ()
{
   
     int num, rem , temp, decimal = 0;
     cout<< "Enter any binary number : "<<endl;
     cin>> num;
    
     temp = num;
     int i = 0;

     while( temp > 0)
     {  
         rem = temp % 10;  // to find number step by step
         decimal += + rem * pow(2, i);
         i++;
         temp = temp/10;   

     }
      
      cout<< "Decimal number is : ";
      cout<< decimal << endl;
    
    return 0;
}