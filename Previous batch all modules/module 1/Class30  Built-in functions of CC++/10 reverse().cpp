#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
    
    int n;
    cin >> n;
    int a[n];

    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }


    reverse(a + 1, a + n + 1);   //a + 1 is start pointer, a + n + 1 is end pointer
    //complexity : O(n)

    for(int i = 1; i <= n; i++)
    {
        cout<< a[i] << " ";
    }
    cout<<endl;
    


    return 0;
}
