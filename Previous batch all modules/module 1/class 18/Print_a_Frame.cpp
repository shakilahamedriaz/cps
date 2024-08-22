#include<bits/stdc++.h>
using namespace std;

int main()
{
    

     int r, c;
     while( 1 )
     {
        cin >> r >> c;
        if(r == 0 && c == 0) 
        break;

        for(int i = 1; i <= c; i++) cout<< "#";
        cout<< "\n";

        for(int i = 2; i <= r-1; i++)
        {
            cout<< "#";
            for(int j = 2; j <= c-1; j++) cout<< ".";
            
            cout<< "#\n";
        }
        

        for(int i = 1; i <= c; i++) cout<< "#";
        cout<< "\n\n";

     }

    return 0;
}