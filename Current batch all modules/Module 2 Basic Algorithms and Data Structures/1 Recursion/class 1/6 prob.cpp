//given an integer, return its all digits like 123 , return 1, 2, 3 seperately
#include<bits/stdc++.h>
using namespace std;


void printDigits(int n)
{
    if(n == 0) return;

    printDigits(n/10);
    cout << n%10 <<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin >> n;
    printDigits(n);

    return 0;
}