#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    int t;
    cin >> t;
    while( t -- )
    {
        string s;
        cin >> s;

        int len = 0;
        while(s[len] != 0)
        {
            len ++;
        }

        bool isGood = false;
        for(int i = 2; i < len ; i++)
        {
            char a = s[i-2];  ///  a = s[0]
            char b = s[i-1];  ///  b = s[1]
            char c = s[i];   ///  c = s[2]

            if((a == '0' && b == '1' && c == '0') || (a == '1' && b == '0' && c == '1'))
            {
                isGood = true;
                break;
            }
        }

        (isGood) ? cout<< "Good" << "\n" : cout<< "Bad" << "\n";

    }

    return 0;
}


///bruteforce : all kinds of solution will be checked, then find the actual solution;