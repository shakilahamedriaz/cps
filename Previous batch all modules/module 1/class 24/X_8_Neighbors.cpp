#include<bits/stdc++.h>
using namespace std;

int main()
{

   ios_base::sync_with_stdio(false);
   cin.tie(0); cout.tie(0);

   int n, m;
   cin >> n >> m;
   char grid[n][m];

   for(int p = 0; p < n; p++)
   {
        for(int q = 0; q < m; q++)
        {
            cin >> grid[p][q];
        }
   }
  
       int i, j;
       cin >> i >> j;
       i--, j--;

               int x, y;
               bool isAns = true;

               x = i-1;
               y = j-1;
               if(!(x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 'x'))
               {
                  isAns = false;
               }


               x = i-1;
               y = j;
               if(!(x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 'x'))
               {
                  isAns = false;
               }

               x = i-1;
               y = j+1;
               if(!(x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 'x'))
               {
                  isAns = false;
               } 

               x = i;
               y = j-1;
               if(!(x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 'x'))
               {
                  isAns = false;
               }

               x = i;
               y = j+1;
               if(!(x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 'x'))
               {
                  isAns = false;
               }

               x = i+1;
               y = j-1;
               if(!(x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 'x'))
               {
                  isAns = false;
               }

               x = i+1;
               y = j;
               if(!(x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 'x'))
               {
                  isAns = false;
               }


               x = i+1;
               y = j+1;
               if(!(x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 'x'))
               {
                  isAns = false;
               }   

   

       (isAns) ? cout<< "yes" << "\n" : cout<< "no" << "\n";


    return 0;
}