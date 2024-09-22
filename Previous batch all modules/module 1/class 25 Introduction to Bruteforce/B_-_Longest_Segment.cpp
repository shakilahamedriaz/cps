#include<bits/stdc++.h>
using namespace std;

const int mx = 123;
int x[mx], y[mx];

int main()
{  
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
   
    double mxdis = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int x1 = x[i];
            int y1 = y[i];

            int x2 = x[j];
            int y2 = y[j];

            double dis = sqrt( ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
            
            if(dis > mxdis)
            {
                mxdis = dis;
            }
    }
    }
    cout<< fixed << setprecision(10) << mxdis << "\n";

    return 0;
}