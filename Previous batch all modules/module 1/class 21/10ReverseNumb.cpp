#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long long double

int main()
{  
    int n;
    cin >> n;
    int arr[n+5];
    int brr[n+5];  ///using auxlary array

    for(int i = 1; i <= n; i++) cin >> arr[i];
    
    for(int i =1, j = n; i <= n; i++, j--)
    {
       brr[i] = arr[j];
    }   

    for(int i = 1; i <= n - 1; i++)
    {
        cout<< brr[i] << " ";
    }
    cout<< brr[n] << "\n";


    return 0;
}