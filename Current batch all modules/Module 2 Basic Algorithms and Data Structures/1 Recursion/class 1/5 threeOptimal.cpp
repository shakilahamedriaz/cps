#include<bits/stdc++.h>
using namespace std;

vector<int> coins = {5, 12, 23};
int dp[100005];

int isPossible(int n)
{
    if(n < 0) return 0;
    if(n == 0) return 1;
    
    if(dp[n] != -1) return dp[n];
    int res = 0;
    for(int coin: coins)
    {
        if(isPossible(n - coin)) 
        res = 1;
        break;
    }


    return dp[n] = res;
}

int main()
{
    memset(dp, -1, sizeof(dp)); // used to initialize the dp array with -1

    int n;
    cin >> n;
    cout<< isPossible(n) << endl;
    return 0;
}