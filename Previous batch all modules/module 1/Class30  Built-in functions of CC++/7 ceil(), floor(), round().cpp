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

    dl a = 2.5567;
    cout<< "Ceil of " << a << " a is "<< ceil(a) << endl;
    cout<< "Floor of " << a << " is "<< floor(a) << endl;

    dl b = 2.56;
    dl c = 2.47;

    cout<< "Round of " << b << " is "<< round(b) << endl;
    cout<< "Round of " << c << " is "<< round(c) << endl;


    return 0;
}
