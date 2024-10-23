#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int t; 
    cin >> t;
    while( t-- )
    {
        int n;
        cin >> n;
        string s = to_string(n);
        int len = s.length();

        int a = s[0] - '0';
        int b = s[len - 1] - '0';
        
        cout<< "Sum = ";
        cout<< a + b << "\n";
          
    }
    return 0;
}