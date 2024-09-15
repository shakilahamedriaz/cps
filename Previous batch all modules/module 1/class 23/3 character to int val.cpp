#include<bits/stdc++.h>
using namespace std;

int main()
{

     // if we substration '0' from a character, it will return the integer value of that character
    // '0' = 48
    // '1' = 49
    // '2' = 50
    // '3' = 51
    //if we add '0' with an integer, it will return the character value of that integer


    char c = '3';
    int x = c - '0';
    cout << x << "\n";


    // if we add '0' with an integer, it will return the character value of that integer

    int y = 3;
    char d = y + '0';
    cout << d << "\n";

    /*
      #char      '4' - '0'   =   4  =   #int
      #assci val  52  -  48  =   4  =   #int
      
    
    
    */




    return 0;
}