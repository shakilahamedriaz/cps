#include<bits/stdc++.h>
using namespace std;

int main()
{

     int a, b, c;
     cin >> a >> b >> c;
     cout<< "Minimum numb is : "; 

     if(a < b && a < c) cout<<a ;
     else if(b < a && b < c) cout<<b;
     else cout<<c;

    return 0;
}

// Note : if two num is equal then condition shuld be greaterEquel, lessEqual : =<, >=.