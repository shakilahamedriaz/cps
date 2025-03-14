#include<bits/stdc++.h>
using namespace std;


int pw_calculatation(int a, int b){
    if(b == 0) return 1;
    int ans = 1;
    for(int i = 1; i <=b; i++)
    {
        ans *=a;
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >>b;
   
    cout<< pw_calculatation(a, b) << endl;

    return 0;
}

//Complexity: O(b) // linear
//Space Complexity: O(1) // constant