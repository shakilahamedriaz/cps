#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
  
    int a, b;
    cin >> a >> b;

    if( a == b)
    {
        cout<< "a" << " " << "==" << " "<< "b" << "\n";
    }
    else if(a < b)
    {
        cout<< "a" << " " << "<" << " " << "b" << "\n";
    }
    else
    {
        cout<< "a" << " " << ">" << " " << "b" << "\n";
    }
     

    return 0;
}