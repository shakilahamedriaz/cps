#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    while( n-- )
    {
        string s;
        cin >> s;
        int len = s.size();

        if(len > 10)
        {
            cout<< s[0] << len -2 << s[len-1] << "\n";
        }
        else
        {
            cout << s << "\n";
        }
    }

    return 0;
}