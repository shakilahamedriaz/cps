#include<bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;

    if(x >= 48 && x <= 57)
    {
        cout<< "IS DIGIT" << "\n";
    }
    else if(x >= 65 && x <= 90)
    {
        cout<< "ALPHA" << "\n" << "IS CAPITAL" << "\n";
    }
    else
    {
        cout<< "ALPHA" << "\n" << "IS SMALL" << "\n";
    }


    return 0;
}