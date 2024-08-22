#include<bits/stdc++.h>
using namespace std;

int main()
{

   
    int a, b;
    while( 1 )
    {
        cin >> a >> b;
        if( a == 0 && b == 0) break;

        for(int i = 1; i <= a; i++)
        {
            for(int j = 1; j <= b; j++)
            {
                if( (i+j) % 2 == 0 )
                {
                    cout<< "#" ;
                }
                else
                {
                    cout<< ".";
                }
            }
            cout<< "\n";
        }
        cout<< "\n";
    }




    return 0;
}