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
        a[i][j] = cnt;
        cnt ++;
     }
   }
   

   for(int i = 0; i < 3; i++)
   {
     for(int j = 0; j < 4; j++)
     {
        cout<< a[i][j] << " ";
     }
     cout<< "\n";
   }


    return 0;
}