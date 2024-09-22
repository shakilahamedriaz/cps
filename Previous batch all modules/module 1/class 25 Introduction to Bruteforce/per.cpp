#include<bits/stdc++.h>
using namespace std;

const int mx = 123;
int x[mx], y[mx];

int main()
{  
    int n;
    cin >> n;
    if(n == 1)
    {
        cout<< "1" << "\n";
    }
    else if(n == 2 || n == 3)
    {
        cout<< "NO SOLUTIOIN" << "\n";
    }
    else
    {
        for(int i = 1; i <= n; i++)
        {
            if(i%2 == 1)
            {
                cout<< i << " ";
            }
        }
        for(int i = 1; i <= n; i++)
        {
            if(i%2 == 0)
            {
                cout<< i << " ";
            }
        }
        cout<< "\n";
    }


    return 0;
}