#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 1) return 1;
    return n * fact(n-1); // new function create new memory on stack
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin >> n;
    cout << fact(n) << endl;


    return 0;
}

// time complexity: O(n) // linear , because each function call create 1 new function call
// space complexity: O(n) // stack memory