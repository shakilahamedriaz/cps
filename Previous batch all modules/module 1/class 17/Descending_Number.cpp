#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{ 
     
    int n = 1000;
    int cnt = 0;
    for(int i = n; i >= 1; i--)
    {   
        cnt ++;
        cout<< i << " ";
        if(cnt == 5)
        {
            cout<< "\n";
            cnt = 0;
        }

    }

    return 0;
}