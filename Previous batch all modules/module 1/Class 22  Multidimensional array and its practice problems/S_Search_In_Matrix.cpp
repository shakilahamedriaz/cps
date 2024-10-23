#include<bits/stdc++.h>
using namespace std;

int main()
{
   
   int n, m;
   cin >> n >> m;

   int a[n][m];
   for(int i = 0; i < n; i++)
   {
     for(int j = 0; j < m; j++)
     {
       cin >> a[i][j];
       
     }
   }

   int x;
   cin >> x;
   bool check = false;

   for(int i = 0; i < n; i++)
   {
     for(int j = 0; j < m; j++)
     {
        if(a[i][j] == x)
        {
           check = true;
           break;
        }
     }

   }

   if(check) cout<< "will not take number" << "\n";
   else      cout<< "will take number" << "\n";


    return 0;
}