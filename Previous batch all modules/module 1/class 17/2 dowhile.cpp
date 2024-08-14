#include<bits/stdc++.h>
using namespace std;

int main() {


    int i = 0;
    do {
        cout << i << " ";
        i++;
    } while (i <= 10);

    cout<< "After loop i = " << i << endl;

    cout<< "Another example : " << endl;

    for(; 0 ;)
    {
        cout<< "this will not execute" << endl;
    }

    while(0)
    {
        cout<< "this will not execute" << endl;
    }

    do
    {
        cout<< "this will execute" << endl;
    } while(0);

    //do while loop execute atleast once


    return 0;
}