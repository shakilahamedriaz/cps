#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie();

    int d, r, k;
    cin >> d >> r >> k;
   
    int arr[3] = {d,r,k};
    sort(arr, arr + 3);

    cout<< arr[0] << " " << arr[1] << " "<< arr[2] <<endl;

    return 0;
}