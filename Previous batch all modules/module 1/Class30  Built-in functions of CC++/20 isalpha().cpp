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
  
   isalpha(c) ? cout<< "Alphabet" << endl : cout<< "Not an alphabet" << endl;

   char d = ' ';
   isspace(d) ? cout<< "Space" << endl : cout<< "Not a space" << endl;

    return 0;
}
