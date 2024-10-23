#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int a, b, c;
    cin >> a >> b >> c;

    int s1, s2, s3;

    if(a <= b && a <= c) 
    {
        s1 = a;
        s2 = b;
        s3 = c;
    }
    else if(b <= a && b <=c)
    {
        s1 = b;
        s2 = a;
        s3 = c;
    }
    else
    {
        s1 = c;
        s2 = b;
        s3 = a;
    }

   
      if(s2 > s3)
      {
         int temp = s2;
         s2 = s3;
         s3 = temp;
      }

      cout<< s1 << " " << s2  << " "<< s3 << "\n";

    return 0;
}