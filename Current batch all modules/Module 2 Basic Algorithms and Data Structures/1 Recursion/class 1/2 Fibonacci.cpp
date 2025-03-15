#include<bits/stdc++.h>
using namespace std;


int fib(int n){
    if(n == 0 || n == 1) return n;
    //if(n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << fib(n) << endl;
    }

    return 0;
}

// time complexity: O(2^n) // exponential , because each function call create 2 new function calls
// space complexity: O(n) // stack memory