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

// Function to calculate LCM using GCD
int __lcm(int a, int b) {

    return (a * (b / __gcd(a, b)));
}

int main()
{
    optimize();

   int num1 = 5, num2 = 25;


    cout << "LCM of " << num1 << " and " << num2 << " is " << __lcm(num1, num2) << endl;

    return 0;
}