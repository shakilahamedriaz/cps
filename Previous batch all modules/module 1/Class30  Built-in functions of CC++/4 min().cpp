#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int a = 5, b = 10; 
    int ans = min(a, b);
    cout<< "Minimum of a and b is "<< ans << endl;

    int mn = min({ 5, 66, 8, 9, 1, 9 , 0 });
    cout<< "Minimum of this :  "<< mn << endl;


    return 0;
}
