// 3. Make cin/cout faster

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 

    // to make cin/cout faster we use  - >  ios_base::sync_with_stdio(0);
    // and to remove the buffer we use  - >  cin.tie(0);cout.tie(0); 
    //  --> like onek gula testcase thakle one by one ans na diye ans gula ek sahte dey,
    //  --> protibar store kore rakhe test case shes hole ans ek sathe dey.

        

    
    int a, b;
    cin >> a >> b;
    int ans = a + b;

    cout<< ans << endl;

    //endl - when endl is used, it flushes the output buffer, 
    //which means that it forces the output to be written to the console immediately.
    //  --> endl use korle buffer clear hoye jay, mane output ta console e show korar jonno ready hoye jay.


    return 0;
}