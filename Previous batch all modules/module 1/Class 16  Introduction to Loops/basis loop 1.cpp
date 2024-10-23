#include <bits/stdc++.h>
using namespace std;

int main()
{

    int target = 20;

    for(int i = 1; i <= target; i+=2 )
    {
        if(i == 5 || i == 15)  //important
        {
            cout<< "For" << i << "all code will be ignored" << "\n";
            
            continue; // ignore all operation for this iteration
            //break; // to stop the loop
            cout<<"wont print"<< "\n";
            cout<<"wont print"<< "\n";
            cout<<"wont print"<< "\n";
            cout<<"wont print"<< "\n";           
        }

        if( i % 2 == 1)
        {
            cout<< "Odd : ";
        }
        cout<< i << "\n";
    }


    return 0;
}