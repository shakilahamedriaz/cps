#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    string sign;

    if(a == b)
    {
        sign = "==";
    }
    else if(a > b)
    {
        sign = ">";
    }
    else
    {
        sign = "<";
    }

    cout<< "a" << " ";
    cout<< sign << " ";
    cout<< "b" << "\n";

    return 0;
}