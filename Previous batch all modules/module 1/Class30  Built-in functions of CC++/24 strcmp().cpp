#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

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

    /// s1 == s2 return 0
    /// s1 > s2 return 1
    /// s1 < s2 return -1

    char s1[] = "Hello";
    char s2[] = "Hello";

    if(strcmp(s1, s2) == 0)
    {
        cout<< "Both strings are equal" << endl;
    }
    else
    {
        cout<< "Both strings are not equal" << endl;
    }

    cout<< "They return 0 if both strings are equal , 1 if not are equal" << endl;
    cout<< strcmp(s1, s2) << endl;

   

    return 0;
}
