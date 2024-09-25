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
    
    int a[] = {4, 5, 3, 2, 1, 6, 7, 8, 9, 10};

    cout<< "min element is "<< *min_element(a, a + 10) << endl;

    cout<< "min element from segment 3 to 7 is "<< *min_element(a + 2, a + 7) << endl;
    //1 based index like as reverse,sort etc

    return 0;
}
