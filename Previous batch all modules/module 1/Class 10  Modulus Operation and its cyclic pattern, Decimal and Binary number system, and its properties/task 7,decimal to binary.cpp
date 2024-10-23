#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n, bin;
    cout<< "Enter the decimal number : ";
    cin >> n;

    string bs;

    while(n > 0)
    {
        bin = n % 2;
        bs += to_string(bin);
        n = n / 2;
    }
    
    // print bs in reverse order

    reverse(bs.begin(), bs.end());
    cout<< bs << "\n";


    return 0;
}