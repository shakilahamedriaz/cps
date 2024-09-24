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

    int a = 5, b = 10;
    int ans = max(a, b);
    cout<< "Maximum of a and b is "<< ans << endl;

    cout<< "For using array max is : ";
    int ar[] = {1,2,3,4};
    cout<<  *max_element(ar, ar+4)<<endl; // array, array + size
    // min will work in the same way


    return 0;
}
