#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //reverse 3rd index to 7th index
    reverse(a + 2, a + 8);
    for(int i = 0; i < 10; i++)
    {
        cout<< a[i] << " ";
    }
    cout<<endl;

    cout<< "If we start with index 1 to n" << endl;
    


    return 0;
}
