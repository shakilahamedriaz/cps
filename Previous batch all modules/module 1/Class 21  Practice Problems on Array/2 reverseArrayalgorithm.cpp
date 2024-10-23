#include<bits/stdc++.h>
using namespace std;

const int mx = 100123;
int a[mx], b[mx];

int main()
{
   int n;
   cin >> n;
   for(int i = 1; i <= n; i++) cin >> a[i];

   for(int i = 1, j = n; i <= n ; i++, j--)
   {
       b[j] = a[i];   // by using an auxiliary array, we can reverse the array
                      //auxiliary array is b[], extra array to store called auxiliary array
   }

   for(int i = 1; i <= n; i++)
   {
      cout<< b[i] << " ";
   }
   cout<< "\n";


    return 0;
}