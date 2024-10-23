#include<bits/stdc++.h>
using namespace std;

/*given an array of n integers, 
 find the most frequent element in it. 
  
  -> given an array size n, and an array, query, find the frequency of these query
  -> 2 2 1 4
  ->3
  ->5
  ->4
*/
 
const int mx = 1000123;
int freq[mx];
int a[1000123];

int main()
{
    
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];

    for(int i = 1; i <= n; i++)
    {
       freq[a[i]]++;    
    }
    
    //suppose a[]= {2,2,2,1}
    //initially cnt[0] = 0; then,
    //cnt[a[i]] == cnt[2] == cnt[index 2], er value increase hobe , each time when matched
    //then cnt[2] = 1, then again 2, cnt[2] = 2, then agian cnt[2] = 3;
    //same as cnt[1] = 1;

    int q;
    cin >> q;
    while( q-- )
    {
        int val;
        cin >> val;
         
        cout<< "frequency of " << val << " is : ";
        cout<< freq[val] << "\n";
    }



    return 0;
}


