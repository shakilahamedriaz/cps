#include <iostream>
#include <algorithm> // Include this header for __gcd
using namespace std;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

#define mem(a, b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))

const int mx = 1e5;
int a[mx];
int cnt[100000123];

int main()
{
    optimize();

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "GCD of " << num1 << " and " << num2 << " is " << __gcd(num1, num2) << endl;

    return 0;
}#include <iostream>
#include <algorithm> // Include this header for __gcd
using namespace std;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

#define mem(a, b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))

const int mx = 1e5;
int a[mx];
int cnt[100000123];

int main()
{
    optimize();

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "GCD of " << num1 << " and " << num2 << " is " << __gcd(num1, num2) << endl;

    return 0;
}