#include<bits/stdc++.h>
using namespace std;

int main()
{

     int a, b, c;
     cin >> a >> b >> c;
     int min, mx;
     
     if(a <= b && a <= c) min = a;
     else if(b <= a && b <= c) min = b;
     else min = c;


     if(a >= b && a >= c) mx = a;
     else if(b >= a && b >= c) mx = b;
     else mx = c;

    
    cout<< min << " " << mx << "\n";

    return 0;
}