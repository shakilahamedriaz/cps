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

   char c = 'A';

   if(isupper(c))
    {
         cout<< "Upper case letter" << endl;
    }
    else
    {
         cout<< "Lower case letter" << endl;
    }
    

    //isupper() function is used to check whether the given character is in uppercase or not.
    //islwoer() function is used to check whether the given character is in lowercase or not.
    //both are reutrn boolean value 1 or 0.

    
    return 0;
}
