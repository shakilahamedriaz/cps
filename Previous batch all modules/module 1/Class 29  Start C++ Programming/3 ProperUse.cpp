#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define loop(s, f) for(int i = s; i < f; i++)


int main()
{
    optimize();

    int a, b;
    cin >> a >> b;
    int ans = a + b;
    cout<< "a + b = ";
    cout<< ans << endl;

    loop(0, 5) {
        cout << "i = " << i << endl;
    }

    return 0;
}