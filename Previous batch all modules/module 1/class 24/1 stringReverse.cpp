#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string s;
    cin >> s;

    int len = s.size();
    for(int i = 0, j = len - 1; i < j; i++, j--)
    {
        //swap(s[i], s[j]);
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    
    cout << s << "\n";

    return 0;
}