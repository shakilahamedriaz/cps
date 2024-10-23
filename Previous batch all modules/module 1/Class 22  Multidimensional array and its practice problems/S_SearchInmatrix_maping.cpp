#include<bits/stdc++.h>
using namespace std;


bool isExist[100009];

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
       isExist[a[i][j]] = true;

     }
   }

   int x;
   cin >> x;

   if(isExist[x]) cout<< "will not take number" << "\n";
   else      cout<< "will take number" << "\n";


    return 0;
}