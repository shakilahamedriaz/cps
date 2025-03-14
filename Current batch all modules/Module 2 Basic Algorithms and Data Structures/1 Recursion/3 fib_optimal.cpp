#include<bits/stdc++.h>
using namespace std;

int mem[100005];
int mark[100005]; //all elements are initialized to 0



int fib(int n){
    if(n <= 1) return n;
    
    if(mark[n] == 1) return mem[n]; // if already calculated then return the value from memory
    int res = fib(n-1) + fib(n-2);

    mem[n] = res; // store the value in memory
    mark[n] = 1;  // mark as calculated

    return res;

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