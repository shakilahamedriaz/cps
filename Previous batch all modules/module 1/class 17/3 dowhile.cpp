#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1;
    do{

        if(i == 5)
        {
            // should be use i++ here
            continue;
        }
        cout<< i << "\n";
        i++;
        
    } while(i <= 10);

    cout<< "After loop i = " << i << endl;

    return 0;
}

// loop will stop when i = 5, because of continue statement
// continue statement will skip the rest of the code and go to the next iteration