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

    int t;
    cin >> t;
    while(t--)
    {
        mem(cnt, 0);
        int n;
        cin >> n;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }

        int q;
        cin >> q;
        while(q--)
        {
            int x;
            cin >> x;
            cout<< cnt[x] << endl;
        }

    }


    

    return 0;
}
