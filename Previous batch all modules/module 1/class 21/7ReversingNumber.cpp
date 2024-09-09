#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long long double

int main()
{  
    int n;
    cin >> n;
    int arr[n+5];

    for(int i = 1; i <= n; i++) cin >> arr[i];
    
    for(int i = n; i >= 2; i--) cout<< arr[i] << " ";
    cout<< arr[1] << "\n";


    return 0;
}