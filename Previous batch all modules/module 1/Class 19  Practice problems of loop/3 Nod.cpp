#include<bits/stdc++.h>
using namespace std;

int main()
{
   
    int n;
    cin >> n;

    int cnt = 0;
    int i = 1;

    for(long long i = 1; i*i <= n; i++)
    {
         if( i*i == n)
         {
            cnt +=1;
         }
         else if(n % i == 0)
         {
            cnt +=2;
         }
    }
     cout<< cnt << "\n";

    return 0;
}