#include<bits/stdc++.h>
using namespace std;


int operation(int a, char c, int b)
{
    if(c == '+') return a + b;
    else if(c == '-') return a - b;
    else if(c == '*') return a * b;
    else if(c == '/') return a / b;
     
    return 0;
}

int main()
{
     long long a, b;
     char c;

     while( 1 )
     {
        cin >> a >> c >> b;
        if( c == '?') break;

        int ans = operation(a, c, b);
        cout<< ans << "\n";
     }
    
    return 0;
}