#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

#define mem(a, b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))


const int mx = 1e5;
int a[mx];

int main()
{
    optimize();
    
    //can be 0, -1;
    memset(a, -1 , sizeof(a));   // memset(array_name, value , sizeof(array_name)) , convert all the elements of the array to -1

    for(int i = 0; i < 10; i++)
    {
        cout<< a[i] << " ";
    }
    

    //now we can use 
    //mem(a, -1);

    return 0;
}
