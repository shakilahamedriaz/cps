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
    
    int i = 1;
    int j = n;
    while(i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    for(int i = 1; i <= n - 1; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< arr[n] << "\n";


    return 0;
}