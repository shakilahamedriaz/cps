#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int a, b;
    cin >> a >> b;

    if(b-7 > 0) cout<< b-7 << endl;
    else
    {
        int dhori = 30 - a;

        int temp = dhori + b;

        int ok = 7 - b;

        int ans = temp - ok;

        cout<< ans << endl;


    }

    
    



    return 0;
}