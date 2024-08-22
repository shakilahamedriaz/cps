#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
  
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int t1  = x - a;
    int t2 =  y - b;

    if(t1 > t2)
    {
        cout<< "Dominater" << "\n";
    }
    else
    {
        cout<< "Everule" << "\n";
    }
     

    return 0;
}