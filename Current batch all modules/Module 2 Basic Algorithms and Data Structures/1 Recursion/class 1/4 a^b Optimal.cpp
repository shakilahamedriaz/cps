#include<bits/stdc++.h>
using namespace std;


int power(int a, int b)
{
    if(b == 0) return 1;

    if(b % 2 == 0)
    {
        int x = power(a, b/2);
        return x*x;
    }
    else
    {
        return power(a, b-1)*a;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    cout << power(a, b) << endl;

    return 0;
}