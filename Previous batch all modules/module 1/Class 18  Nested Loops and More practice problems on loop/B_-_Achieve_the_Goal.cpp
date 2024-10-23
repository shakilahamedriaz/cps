#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n, k, m;
    cin >> n >> k >> m;

    int a, sum = 0;
    for(int i = 0; i < n-1 ; i++)
    {
        cin >> a;
        sum += a;
    }



    int x = (n*m) - sum;
    if( x < 0) x = 0;

    if(x > k) cout<< "-1" << "\n";
    
    else cout<< x << "\n";


    return 0;
}