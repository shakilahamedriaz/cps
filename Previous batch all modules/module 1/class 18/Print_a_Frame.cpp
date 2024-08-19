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

        for(int i = 0; i < c; i++) cout<< "#";
        cout<< "\n";

        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                if( j == 0  || j == c - 1) cout<< "#" ;
                else cout<< "*" ;
            }
            cout<< "\n";
        }

        for(int i  = 0; i < c; i++) cout<< "#";
        cout<< "\n";

     }

    return 0;
}