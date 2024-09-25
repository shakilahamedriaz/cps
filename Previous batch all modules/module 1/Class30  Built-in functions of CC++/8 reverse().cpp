#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int mx = 1e5 + 123;
int a[mx];

int main()
{
    optimize();

    a[0] = 4;
    a[1] = 5;
    a[2] = 6;
    a[3] = 7;
    a[4] = 8;

    cout<< *a << endl;
    cout<< *(a+1) << endl;
    cout<< *(a+2) << endl;
    cout<< *(a+3) << endl;
    cout<< *(a+4) << endl;

    return 0;
}
