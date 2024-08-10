/// find unique element, that appear once time in array
/// or find the element in the array that are not reapeated twice 0(n) time complexity

#include<bits/stdc++.h>
using namespace std;

int main()
{
   
    int n;
    cout<< "Enter the array elements : ";
    cin >> n;
    int a[n];
    cout<< "Enter the array elements : ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans = ans ^ a[i];
    }

    cout << "Unique element is : " << ans << endl;




    return 0;
}

/// NOTE :  if any number xor with 0, then the ans will be the number itself.