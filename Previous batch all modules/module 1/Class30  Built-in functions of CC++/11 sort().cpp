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
    
   
    int n = 5;
    int a[n] = {55, 44, 33, 22, 11};


    sort(a, a + n);   //a is start pointer, a + n is end pointer
    //complexity : O(nlogn)


    for(int i = 0; i < n; i++)
    {
        cout<< a[i] << " ";
    }
    cout<<endl;

    //if we use 1 based index array
    //sort(a + 1, a + n + 1);   //a + 1 is start pointer, a + n + 1 is end pointer
    //as like reverse, we can sort a range of array


    return 0;
}
