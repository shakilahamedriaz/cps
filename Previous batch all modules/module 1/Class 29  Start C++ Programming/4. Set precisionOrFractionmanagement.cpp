#include<bits/stdc++.h>
using namespace std;

// macro means : #define macro_name value
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define fraction1()  cout<< fixed << setprecision(5);  // 5 here, we can change it to any value.
#define fraction2() cout.unsetf(ios::floatfield); cout.precision(2); cout.setf(ios::fixed,ios::floatfield); // 2 here, we can change it to any value.           



int main()
{
    optimize();

    double num = 3.141592855;
    
    //cout<< fixed << setprecision(5) << num << endl; instead of this we can use :
    //fraction1();  // this function will set the precision manually by user. check macro.
    fraction();  // this function will set the precision manually by user. check macro.
    cout<< num << endl;

 

    return 0;
}
